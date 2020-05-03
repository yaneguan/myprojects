#include "widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent)
{
    this->setFixedSize(1000,800);
    this->setWindowIcon(QIcon(":/img/title.jpg"));
    this->setWindowTitle("贪吃蛇");
    this->setStyleSheet("border: 1px solid red;background-color:qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.05 rgba(14, 8, 73, 255), stop:0.36 rgba(28, 17, 145, 255), stop:0.6 rgba(126, 14, 81, 255), stop:0.75 rgba(234, 11, 11, 255), stop:0.79 rgba(244, 70, 5, 255), stop:0.86 rgba(255, 136, 0, 255), stop:0.935 rgba(239, 236, 55, 255));");


    title = new QLabel(this);
    title->setGeometry(150,200,250,130);
    title->setFixedSize(250,130);
    title->setStyleSheet("QLabel{font: 200 64pt 华文琥珀;color:#ffff00;}");
    title->setText("疯狂");
    title->setAttribute(Qt::WA_TranslucentBackground);

    title2 = new QLabel(this);
    title2->setGeometry(370,200,350,130);
    title2->setFixedSize(350,130);
    title2->setStyleSheet("QLabel{font: 200 64pt 华文琥珀;color:#5555ff;}");
    title2->setText("贪吃蛇");
     title2->setFrameShape(QFrame::NoFrame);
     title2->setAttribute(Qt::WA_TranslucentBackground);

     title3 = new QLabel(this);
      title3->setGeometry(750,200,90,170);
     title3->setStyleSheet("font: 200 32pt 华文隶书;color:#ffffff;border-width: 1px;border-color: rgb(255, 170, 0);");
     title3->setText("新\n版");
     title3->setAttribute(Qt::WA_TranslucentBackground);

    start = new QPushButton(this);
    start->setGeometry(350,480,300,100);
    start->installEventFilter(this);
    start->setStyleSheet("QPushButton{background-color: rgb(0, 132, 198);border:2px groove gray;border-radius:6px;padding:2px4px;font: 200 38pt 华文隶书;}");
    start->setText("开始游戏");
    connect(start,SIGNAL(clicked(bool)),this,SLOT(to_gamezone()));
    qDebug()<<"widget init\n";

       player = new QMediaPlayer;
       connect(player, SIGNAL(positionChanged(qint64)), this, SLOT(positionChanged(qint64)));
       player->setMedia(QUrl::fromLocalFile("C:\\Users\\yane1\\QT\\myprojects\\Sssnake_Game\\widget.wav"));
       player->setVolume(30);

        playlist = new QMediaPlaylist;
        playlist->addMedia(QMediaContent(QUrl::fromLocalFile("C:\\Users\\yane1\\QT\\myprojects\\Sssnake_Game\\widget.wav")));
        playlist->setPlaybackMode(QMediaPlaylist::CurrentItemInLoop);
        player->setPlaylist(playlist);
        player->play();
}

void Widget::to_gamezone()
{

    emit mainGame();
    player->stop();
    this->close();

}
  bool Widget::eventFilter(QObject *watched, QEvent *event)
  {
       qDebug()<<"event init\n";
      if(watched == start)
      {
          if(event->type() == QEvent::Enter)
          {
              start->setStyleSheet("QPushButton{background-color: rgb(0, 120, 198);border:4px groove gray;border-radius:6px;padding:4px8px;font: 200 38pt 华文隶书;}");
                return true;
          }
         else if(event->type() == QEvent::Leave)
          {
              start->setStyleSheet("QPushButton{background-color: rgb(0, 132, 198);border:2px groove gray;border-radius:6px;padding:2px4px;font: 200 38pt 华文隶书;}");
                return true;
          }
          else{
              return false;
          }
      }
      else {
          return Widget::eventFilter(watched, event);
          qDebug()<<"event error";
      }
  }

Widget::~Widget()
{
    delete title;
    delete title2;
    delete title3;
    delete start;
    delete player;
}

