#include "login.h"
#include "ui_login.h"
#include <synchapi.h>
int login::flag = 10;
login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    this->setFixedSize(540,426);
    //ui->progressBar->startTimer(20);
    this->setStyleSheet("background-color: rgb(6, 189, 255)");
    sl = new QSlider;
    //ui->progressBar->setStyleSheet("QProgressBar::chunk{background-color: #0a93ee;   width: 20px;}");
    ui->progressBar->setTextVisible(false);
    QObject::startTimer(40);
    qDebug()<<"happy";
    connect(this->sl,SIGNAL(valueChanged(int)),ui->progressBar,SLOT(setValue(int)));

}

void login::deal()
{

}
void login::timerEvent(QTimerEvent *tr)
{

        static int j = 0;
      //  qDebug()<<"hello"<<j;
        this->sl->setValue(j);
               j++;
       if(j == 30 || j == 60 || j == 90)
       {
            Sleep(800);
       }
        else if(j == 40 || j == 70)
       {
           Sleep(300);
       }
    if(j == 100)
    {
        userspace *mn = new userspace;
        mn->show();
        this->close();
    }

}

login::~login()
{
    delete ui;
}


