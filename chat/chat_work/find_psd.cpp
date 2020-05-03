#include "find_psd.h"
#include "ui_find_psd.h"

find_psd::find_psd(QWidget *parent) :
    QWidget(parent),psd(""),
    ui(new Ui::find_psd)
{
    ui->setupUi(this);


    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(this_close()));

}
void find_psd::this_close()
{
    user = ui->lineEdit->text();
    tel = ui->lineEdit_7->text();
    qDebug()<<"用户名="<<user;

    conf = new QSettings(path,QSettings::IniFormat);
    conf->beginGroup("user_config");

    if(user == conf->value("username").toString())
    {
        if(tel == conf->value("tel").toString())
        {
            psd = conf->value("userpsd").toString();
            qDebug()<<"密码 = "<<psd;
            conf->endGroup();
            delete conf;
            this->close();
        }
        else{
            QMessageBox::information(NULL,"忘记密码","手机号错误，请重新输入",QMessageBox::Yes);
        }
    }
    else{
        QMessageBox::information(NULL,"忘记密码","用户名不存在，请注册",QMessageBox::Yes);
    }
}

find_psd::~find_psd()
{
    delete ui;
}
