#include "regist.h"
#include "ui_regist.h"

regist::regist(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::regist)
{
    ui->setupUi(this);
    this->setGeometry(200,200,715,551);
    ui->lineEdit->setPlaceholderText("昵称");
    ui->lineEdit_5->setPlaceholderText("密码");
    ui->lineEdit_8->setPlaceholderText("短信验证码");
    ui->pushButton->setStyleSheet("background-color: rgb(0, 132, 198);\
                                    border:2px groove gray;border-radius:6px;padding:2px4px;color:white;");
    ui->pushButton_3->setStyleSheet("background-color: rgb(0, 132, 198);\
                                    border:2px groove gray;border-radius:6px;padding:2px4px;color:white;");
    ui->pushButton->installEventFilter(this);
    ui->pushButton_3->installEventFilter(this);

    connect(ui->lineEdit_7,SIGNAL(returnPressed()),this,SLOT(check_gist()));
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(to_login()));
}

bool regist::eventFilter(QObject *target, QEvent *e)
{
    if(target == ui->pushButton)
    {
        if(e->type() == QEvent::Enter)
        {

            ui->pushButton->setStyleSheet("background-color: rgb(0, 120, 198);\
                                            border:4px groove gray;border-radius:6px;padding:4px4px;color:white;");
        }
        else if(e->type() == QEvent::Leave)
        {

            ui->pushButton->setStyleSheet("background-color: rgb(0, 132, 198);\
                                            border:2px groove gray;border-radius:6px;padding:2px4px;color:white;");        }
        else if(e->type() == QEvent::MouseButtonDblClick)
        {
            if(write_init())
            {
               emit ui->pushButton->click();
            }
        }
    }
        else if(target == ui->pushButton_3)
        {
            if(e->type() == QEvent::Enter)
            {

                ui->pushButton_3->setStyleSheet("background-color: rgb(0, 120, 198);\
                                                border:4px groove gray;border-radius:6px;padding:4px4px;color:white;");            }
            else if(e->type() == QEvent::Leave)
            {

                ui->pushButton_3->setStyleSheet("background-color: rgb(0, 132, 198);\
                                                border:2px groove gray;border-radius:6px;padding:2px4px;color:white;");        }
        }
}

bool regist::write_init()
{
    qDebug()<<"ur"<<ui->lineEdit->text().trimmed();

    QString path = "iogin.ini";
    QSettings *conf = new QSettings(path,QSettings::IniFormat);
     conf->beginGroup("user_config");

    if(ui->lineEdit->text().trimmed() == NULL){
         QMessageBox::information(NULL,"注册","用户名为空",QMessageBox::Yes);
         ui->lineEdit->clear();
         return false;
     }
     else if(ui->lineEdit_5->text().trimmed() == NULL){
         QMessageBox::information(NULL,"注册","密码为空",QMessageBox::Yes);
         ui->lineEdit_5->clear();
         return false;
     }
    else if(ui->lineEdit_7->text().trimmed() == NULL){
        QMessageBox::information(NULL,"注册","手机号为空",QMessageBox::Yes);
        ui->lineEdit_7->clear();
        return false;
    }
    else if((ui->lineEdit->text().trimmed()) != (conf->value("username").toString()))
    {
        conf->setValue("username",ui->lineEdit->text().trimmed());
        conf->setValue("userpsd",ui->lineEdit_5->text().trimmed());
        conf->setValue("tel",ui->lineEdit_7->text().trimmed());

        conf->endGroup();
         delete conf;
       return true;

    }
     else {
         QMessageBox::information(NULL,"注册","用户名已存在，请输入",QMessageBox::Yes);
         return false;
     }


}

void regist::check_gist()
{
    if(write_init())
    {
    emit ui->pushButton->click();
    }
}

void regist::to_login()
{
    this->close();
}


regist::~regist()
{
    delete ui;
}
