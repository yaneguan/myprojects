#include "widget.h"
#include "ui_widget.h"


Widget::Widget(QWidget *parent) :
    QWidget(parent),_usr(""),_pwd(""),path(""),conf(nullptr),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setFixedSize(540,426);
    this->setGeometry(900,300,540,426);
    QMovie *pm = new QMovie(":/image/movie.gif");
      ui->label->setMovie(pm);
      ui->label->setAttribute(Qt::WA_TranslucentBackground);
      pm->start();
      //屏蔽整个背景框
      //this->setWindowOpacity(1); //窗口整体透明度，0-1 从全透明到不透明
      //this->setWindowFlags(Qt::FramelessWindowHint); //设置无边框风格
    //this->setAttribute(Qt::WA_TranslucentBackground);
        this->setStyleSheet("background-color: rgb(255,255,255)");


      const QString m_red_SheetStyle = "min-width: 80px; min-height: 80px;max-width:80px; max-height: 80px;border-radius: 40px;border-image: url(:/image/man.png);";
        ui->label_2->setStyleSheet(m_red_SheetStyle);
        const QString m_red_SheetStyle2 = "min-width: 16px; min-height: 16px;max-width:16px; max-height: 16px;border-radius: 8px;  border:1px solid white;background-color: rgb(0, 255, 0);border-color: rgb(252, 252, 252);";
          ui->label_3->setStyleSheet(m_red_SheetStyle2);
        ui->lineEdit->setPlaceholderText("QQ号/手机号/邮箱");
        ui->lineEdit_2->setStyleSheet("background:transparent;border-width:0;border-style:outset");
        ui->comboBox->setStyleSheet("background:transparent;border-width:0;border-style:outset;color:rgba(0, 0, 0, 0)");
        ui->lineEdit->setStyleSheet("background:transparent;border-width:0;border-style:outset");
        ui->pushButton->setFlat(true);
 //       ui->lineEdit->setAttribute(Qt::WA_TranslucentBackground);
        ui->lineEdit_2->setPlaceholderText("密码");
        ui->lineEdit_2->setEchoMode(QLineEdit::Password);
        ui->pushButton_3->setStyleSheet("background-color: rgb(6, 189, 255);\
                                        border:2px groove gray;border-radius:6px;padding:2px4px;color:white;font:10pt 新宋体");
       // ui->pushButton_3->setStyleSheet("QPushButton{border-color: rgba(0, 170, 249, 243);border:0px;font 8pt}"); //去除部件边框
       ui->pushButton_3->installEventFilter(this);
        ui->pushButton_4->setStyleSheet("QPushButton{border-color: rgba(0, 170, 249, 243);border:0px;}");
        ui->pushButton_4->installEventFilter(this);
        ui->pushButton->installEventFilter(this);
        ui->pushButton_2->installEventFilter(this);
        ui->pushButton_2->setStyleSheet("QPushButton{border-color: rgba(0, 170, 249, 243);border:0px;}");
        //ui->pushButton_4->setStyleSheet("QPushButton{border-color: rgba(0, 170, 249, 243);border:0px;}");
        ui->label_8->setStyleSheet("QLabel{border:0px;border-image: url(:/image/erweima.gif);background-color:rgb(255, 255, 255,0);}");
        connect(ui->pushButton_4,SIGNAL(clicked(bool)),this,SLOT(regist_view()));
 //       connect(ui->pushButton_3,SIGNAL(clicked(bool)),this,SLOT(login_view()));
//        ui->label_6->setAttribute(Qt::WA_TranslucentBackground);
//        ui->label_7->setAttribute(Qt::WA_TranslucentBackground);
        ui->label_6->setWindowFlag(Qt::FramelessWindowHint);
        connect(ui->checkBox,SIGNAL(clicked(bool)),this,SLOT(set_auto_state()));
        connect(ui->checkBox_2,SIGNAL(clicked(bool)),this,SLOT(set_state()));
        connect(ui->pushButton_3,SIGNAL(clicked(bool)),this,SLOT(do_exam()));
        connect(this,SIGNAL(exam_rady()),this,SLOT(login_view()));
        connect(ui->lineEdit_2,SIGNAL(returnPressed()),this,SLOT(do_exam()));
        connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(find_pwd()));
         path = "iogin.ini";
         conf = new QSettings(path,QSettings::IniFormat);
        conf->beginGroup("user_config");
          ui->checkBox->setChecked(false);
          ui->checkBox_2->setChecked(false);
          qDebug()<<"values.. "<<ui->checkBox_2->isChecked();
  //        conf->setValue("auto_state",ui->checkBox->isChecked());
          bool stats = conf->value("state").toBool();
          bool auto_stats = conf->value("auto_state").toBool();
          qDebug()<<"1  "<<stats;
          qDebug()<<"2  "<<auto_stats;
          if(stats)
          {
             do_remember();
             ui->checkBox_2->setChecked(true);
          }
          if(auto_stats)
          {
              ui->checkBox->setChecked(true);
              if(stats)
              {
                  emit this->exam_rady();

              }
          }
}
#if 1
   void Widget::paintEvent(QPaintEvent *)
   {
       QPainter painter(this);
       painter.drawLine(175,210,339,210);
       painter.drawLine(175,260,345,260);
#endif
   }
bool Widget::eventFilter(QObject *target, QEvent *e)
{
    if(target == ui->pushButton)
    {
        if(e->type() == QEvent::Enter)
        {

           ui->pushButton->setStyleSheet("QPushButton{border-image: url(:/image/caculenew.gif);}");
        }
        else if(e->type() == QEvent::Leave)
        {

           ui->pushButton->setStyleSheet("QPushButton{border-image: url(:/image/caculate.gif);}");
        }
    }
    else if(target == ui->pushButton_2)
    {
        if(e->type() == QEvent::Enter)
        {

           ui->pushButton_2->setStyleSheet("QPushButton{border-color: rgba(0, 170, 260, 260);border:0px;color:rgba(0, 170, 249, 243);}");
        }
        else if(e->type() == QEvent::Leave)
        {

           ui->pushButton_2->setStyleSheet("QPushButton{border-color: rgba(0, 170, 249, 243);border:0px;color:balck;}");
        }
    }
    else if(target == ui->pushButton_3)
    {
        if(e->type() == QEvent::Enter)
        {
            //ui->pushButton_3->resize(320,70);
            ui->pushButton_3->setStyleSheet("background-color: rgb(6, 200, 255);\
                                            border:4px groove gray;border-radius:8px;padding:4px8px;color:black;font:12pt 新宋体");
        }
        else if(e->type() == QEvent::Leave)
        {
            //ui->pushButton_3->resize(295,51);
            ui->pushButton_3->setStyleSheet("background-color: rgb(6, 189, 255);\
                                            border:2px groove gray;border-radius:6px;padding:2px4px;color:white;font:10pt 新宋体");
        }
    }
    else if(target == ui->pushButton_4)
    {
        if(e->type() == QEvent::Enter)
        {
            //ui->pushButton_4->resize(45,35);
            ui->pushButton_4->setStyleSheet("QPushButton{border-color: rgba(0, 150, 260, 270);border:0px;color:rgba(0, 170, 249, 243);}");
        }
        else if(e->type() == QEvent::Leave)
        {
            //ui->pushButton_4->resize(39,28);
            ui->pushButton_4->setStyleSheet("QPushButton{border-color: rgba(0, 170, 249, 243);border:0px;color:black}");
        }
    }

}
 void Widget::regist_view()
 {
     qDebug()<<"hello";
     regist *gst = new regist;
     gst->show();

 }
 void Widget::login_view()
 {

     login *lg = new login;
     lg->show();
      qDebug()<<"new win";
     this->close();
 }

 void Widget::do_exam()
 {
     qDebug()<<ui->lineEdit->text().trimmed();
     QString str = ui->lineEdit->text().trimmed();
     qDebug()<<"<**"<<str;
     if(this->ui->lineEdit->text().trimmed() != NULL)
 {
         if(this->read_init(ui->lineEdit->text().trimmed(),ui->lineEdit_2->text().trimmed()))
     {
         emit this->exam_rady();
      this->close();
     }
     }
     else{
         qDebug()<<"is empty";
         QMessageBox::information(NULL,"登录","请输入用户名和密码",QMessageBox::Yes);
     }
 }
void Widget::do_read_init()
{

     _usr = conf->value("username").toString();
     _pwd = conf->value("userpsd").toString();
    qDebug()<<"_useranme = "<<_usr;
    qDebug()<<"_userpswd = "<<_pwd;
}

 bool Widget::read_init(QString usr,QString psd)
 {
        do_read_init();
     if(_usr == usr)
     {
         if(_pwd == psd)
         {

             QMessageBox::information(NULL,"登录","登录成功",QMessageBox::Yes);
             return true;
         }
         else{
             QMessageBox::information(NULL,"登录","密码输入有误，请重新输入",QMessageBox::Yes);
             ui->lineEdit_2->clear();
             return false;
         }
     }
     else{
         QMessageBox::information(NULL,"登录","用户名输入有误，请重新输入",QMessageBox::Yes);
         ui->lineEdit->clear();
         return false;
     }
     conf->endGroup();
     delete conf;
 }

void Widget::do_remember()
{

    do_read_init();
    ui->lineEdit->setText(_usr);
    ui->lineEdit_2->setText(_pwd);
}
void Widget::set_state()
{
    conf->setValue("state",ui->checkBox_2->isChecked());

}
void Widget::set_auto_state()
{
     conf->setValue("auto_state",ui->checkBox->isChecked());
}
void Widget::find_pwd()
{
    find_psd *pwd = new find_psd;
    pwd->conf = this->conf;
    pwd->path = this->path;
    pwd->show();

}
Widget::~Widget()
{
    delete ui;
}
