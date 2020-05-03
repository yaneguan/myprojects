#include "gameover.h"

int Gameover::i = 0;
int Gameover::j = 1;
int Gameover::x = 40;
int Gameover::y = 2;
Gameover::Gameover(QWidget *parent) : QWidget(parent)
{
    this->resize(800,600);
    this->setFixedSize(800,600);
    QPalette palette;
    palette.setBrush(QPalette::Background,QBrush(QPixmap(":/img/ganmewidget.jpg").scaled(this->size())));	//图片自适应主窗口大小
    this->setPalette(palette);

   one = new QLabel(this);
   one->setGeometry(140,60,500,200);
   one->setStyleSheet("font: 200 64pt 华文琥珀;color:red;");
   one->setText("游戏结束 !");

   two = new QLabel(this);
   two->setGeometry(230,250,180,100);
   two->setStyleSheet("font: 200 28pt 华文琥珀;color:#5555ff;");
   two->setText("最高分");

   high_score = new QLabel(this);
   high_score->setGeometry(400,250,150,100);
   high_score->setStyleSheet("font: 200 24pt 华文琥珀;color:green;");
//   high_score->setText("最高分");

   three = new QLabel(this);
   three->setGeometry(200,310,200,150);
   three->setStyleSheet("font: 200 28pt 华文琥珀;color:#5555ff;");
   three->setText("当前得分");

   score = new QLabel(this);
   score->setGeometry(450,310,150,150);
   score->setStyleSheet("font: 200 24pt 华文琥珀;color:green;");
//   score->setText("当前得分");

   four = new QLabel(this);
   four->setGeometry(200,400,400,150);
   four->setStyleSheet("font: 200 38pt 华文琥珀;color:#aa0000;");
   four->setText("请再接再厉哟！");
   qDebug()<<"over/overover!";

   tim = new QTimer(this);
   connect(tim,SIGNAL(timeout()),this,SLOT(snake_move()));
}

void Gameover::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
   // pix = new QPixmap(":/img/title.jpg");
 //           painter.drawPixmap(QRect(i*20, j*20, 20, 20), *pix);
    painter.fillRect(QRect(i*20,j*20,20,20),Qt::red);
    painter.fillRect(QRect((i+1)*20,j*20,20,20),Qt::blue);

    painter.fillRect(QRect(x*20,y*20,20,20),Qt::red);
    painter.fillRect(QRect((x-1)*20,y*20,20,20),Qt::blue);
}

void Gameover::recv()
{
    qDebug()<<"Gameover! coming";
    this->show();
    qDebug()<<"Gameover! show";
 //   qDebug()<<"sc = "<<Gamezone::score_trans()->score;
//     qDebug()<<"sh = "<<Gamezone::score_trans()->hight_socre;
    score->setText(QString::number(Gamezone::score_trans()->score));
    qDebug()<<"score! show";
    high_score->setText(QString::number(Gamezone::score_trans()->hight_socre));
    qDebug()<<"high_score! show";
    tim->start(500);
}

void Gameover::snake_move()
{
    i++;
    if(i == 40)
        i = 0;
    x--;
    if(x == 0)
        x = 40;
    update();
}
