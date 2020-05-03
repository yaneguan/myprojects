#include "gamezone.h"

#ifndef COL
#define COL 30
#endif

#ifndef ROW
#define ROW 21
#endif

#ifndef RectWidth
#define RectWidth 40
#endif

#ifndef RectHeight
#define RectHeight 40
#endif

#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3

#define first_songs "C:\\Users\\yane1\\QT\\myprojects\\Sssnake_Game\\AniFace - 夜、萤火虫和你.mp3"
#define second_songs "C:\\Users\\yane1\\QT\\myprojects\\Sssnake_Game\\Game53.wav"
#define third_songs "C:\\Users\\yane1\\QT\\myprojects\\Sssnake_Game\\gameover.wav"
int Gamezone::score = 0;
int Gamezone::hight_socre = 0;
Gamezone::Gamezone(QWidget *parent) : QWidget(parent),m_foodCount(1),m_direction(0),sec(500),y(3),flag(0)
{
    this->resize(1200,900);
    this->setFixedSize(1200,900);
    this->setWindowIcon(QIcon(":/img/title.jpg"));
    this->setWindowTitle("贪吃蛇");

        QPalette palette;
        palette.setBrush(QPalette::Background,QBrush(QPixmap(":/img/ganmewidget.jpg").scaled(this->size())));	//图片自适应主窗口大小
        this->setPalette(palette);
        this->setFocusPolicy(Qt::StrongFocus);

        l_score = new QLabel(this);
        l_score->setGeometry(160,20,80,50);
        l_score->setStyleSheet("font: 200 32pt 华文隶书;color:#5555ff;");
        l_score->setAttribute(Qt::WA_TranslucentBackground);
        l_score->setText("0");
        view_score = new QLabel(this);
        view_score->setGeometry(20,20,120,50);
        view_score->setStyleSheet("font: 200 32pt 华文隶书;color:#ffffff;");
        view_score->setText("得分");
        view_score->setAttribute(Qt::WA_TranslucentBackground);

        h_score = new QLabel(this);
        h_score->setGeometry(700,20,80,50);
        h_score->setStyleSheet("font: 200 32pt 华文隶书;color:#5555ff;");
        h_score->setAttribute(Qt::WA_TranslucentBackground);



        hview_score = new QLabel(this);
        hview_score->setGeometry(500,20,150,50);
        hview_score->setStyleSheet("font: 200 32pt 华文隶书;color:#ffffff;");
        hview_score->setText("最高分");
        hview_score->setAttribute(Qt::WA_TranslucentBackground);

        init();
        qDebug()<<"game init over\n";
        tim = new QTimer(this);
        connect(tim,SIGNAL(timeout()),this,SLOT(snake_move()));
          #if 0
 #endif
}

#if 1
void Gamezone::recvwidget()
{
    this->show();
    player = new QMediaPlayer;
    player2 = new QMediaPlayer;
    player2->setVolume(30);
    player3 = new QMediaPlayer;
    player3->setVolume(40);
    connect(player, SIGNAL(positionChanged(qint64)), this, SLOT(positionChanged(qint64)));
    //player->setMedia(QUrl::fromLocalFile(second_songs));
    player->setVolume(10);

    playlist = new QMediaPlaylist;
    playlist->addMedia(QMediaContent(QUrl::fromLocalFile(first_songs)));
    playlist->addMedia(QMediaContent(QUrl::fromLocalFile(second_songs)));

    playlist->setPlaybackMode(QMediaPlaylist::CurrentItemInLoop);
    player->setPlaylist(playlist);
    player->play();
    tim->start(sec);

}
#endif


void Gamezone::paintEvent(QPaintEvent *)
{
QPainter painter(this);
painter.setPen(QPen(QColor(255, 255, 255),5));
painter.drawRect(0,80,1200,900);

painter.setPen(Qt::NoPen);
painter.setBrush(Qt::NoBrush);

pix2 = new QPixmap(":/img/apple3.jpg");
for(int x = 0; x < COL; ++x) {
 for(y = 3; y < ROW; ++y) {
     painter.drawRect(QRect(x*RectWidth, y*RectHeight, RectWidth, RectHeight));

 }
}

painter.drawPixmap(QRect(foodPosition[0]*RectWidth, foodPosition[1]*RectHeight, RectWidth, RectHeight), *pix2);
//画蛇头
//画蛇身
switch(flag)
{
case 0:
   painter.fillRect(QRect(snake[0][0]*RectWidth, snake[0][1]*RectHeight, RectWidth, RectHeight),Qt::red);
   break;
case 1:
   painter.fillRect(QRect(snake[0][0]*RectWidth, snake[0][1]*RectHeight, RectWidth, RectHeight),Qt::green);
   break;
case 2:
   painter.fillRect(QRect(snake[0][0]*RectWidth, snake[0][1]*RectHeight, RectWidth, RectHeight),Qt::yellow);
   break;
case 3:
   painter.fillRect(QRect(snake[0][0]*RectWidth, snake[0][1]*RectHeight, RectWidth, RectHeight),Qt::black);
   break;
default:
   break;
}
for(int snakeBoy = 1; snakeBoy <= m_foodCount; ++snakeBoy) {
   painter.fillRect(QRect(snake[snakeBoy][0]*RectWidth, snake[snakeBoy][1]*RectHeight, RectWidth, RectHeight), Qt::blue);
}

}


void Gamezone::init()
{
drawSnakeHead();
qDebug()<<"drawSnakeHead\n";
create_new_food();
qDebug()<<"create_new_food\n";
init_database();
qDebug()<<"init_database\n";
serach_sqlite();
}

void Gamezone::drawSnakeHead()
{

//画蛇头
snake[0][0] = qrand() % COL;
snake[0][1] = qrand() % ROW;

//方向
m_direction = qrand() % 4;

}

void Gamezone::create_new_food()
{

foodPosition[0] = qrand() % COL;
int fod = qrand() % ROW;
while(fod <= 2)
{
fod = qrand() % ROW;
}
foodPosition[1] = fod;
//防止产生的食物在蛇的身上
for(int bodyId = 0; bodyId <= m_foodCount; ++ bodyId) {
    if(foodPosition[0] == snake[bodyId][0] && foodPosition[1] == snake[bodyId][1]) {
        foodPosition[0] = qrand() % COL - 1;
        fod = qrand() % ROW - 1;
        while(fod <= 2)
        {
            fod = qrand() % ROW;
        }
        foodPosition[1] = fod;
    }
}

}
void Gamezone::snake_move()
{
if(overedge())
{
if(!query->prepare("INSERT INTO scor(id, score) VALUES (:id, :score)")) //准备执行SQL查询
{
      qDebug()<<"插入失败";
       //return db->lastError();
}
 //在这定占位符上确定绑定的值
query->bindValue(":score", 2);

qDebug()<<"得分"<<score;
query->bindValue(":score",score);
qDebug()<<"绑值";
query->exec();
qDebug()<<"exec";
query->exec("SELECT *FROM scor");
qDebug()<<"next："<<query->next();
query->seek(-1);

serach_sqlite();
    emit over();
   player->stop();
   player2->stop();
   player3->stop();
   this->close();
 return;
}

eatfood();
update();
if(score > hight_socre)
{
    QString sv = QString::number(score, 10);
    h_score->setText(sv);
}
}
void Gamezone::serach_sqlite()
{
    query->exec("SELECT *FROM scor");
    qDebug()<<"next："<<query->next();
    query->seek(-1);
    while (query->next())
    {
        qDebug()<<"遍历数据库";
        QString getscore = query->value(0).toString(); //取第i条记录第1个字段(从0开始计数)的结果
        qDebug()<<"value0:"<<getscore;
        QString getsco = query->value(1).toString();
         qDebug()<<"value1:"<<getsco;
         int gets = query->value(0).toInt();
          qDebug()<<"value_int:"<<gets;
          int get = query->value(1).toInt();
           qDebug()<<"value_int1:"<<get;
           int buf[1024] = {0};
          int i;
           hight_socre = buf[0];
           qDebug()<<"11>>>   "<<buf[0];
          for(i = 0;query->next()!=false;i++)
          {
            buf[i] = query->value(1).toInt();
            qDebug()<<"buf"<<buf[i];
            if(hight_socre < buf[i])
            {
                hight_socre = buf[i];
            }
          }

    }
    QString s = QString::number(hight_socre, 10);
    h_score->setText(s);
}
QSqlError Gamezone::init_database()
{
db = new QSqlDatabase;
if(QSqlDatabase::contains("qt_sql_default_connection"))
  *db = QSqlDatabase::database("qt_sql_default_connection");
else
  *db = QSqlDatabase::addDatabase("QSQLITE");
   db->setDatabaseName("qt"); //使用内存数据库
qDebug()<<"数据库进来了";
if(!db->open())
{
   //打开失败
   qDebug()<<"打开失败";
   return db->lastError();
}
qDebug()<<"打开数据库";
query = new QSqlQuery;

//if(!query->exec("create table scor(id INTEGER PRIMARY KEY autoincrement, score int )"))
if(!query->exec("create table scor(id INTEGER PRIMARY KEY autoincrement,score int )"))
{
   //qDebug()<<"表创建失败";
    return db->lastError();
}

}


void Gamezone::keyPressEvent(QKeyEvent *event)
{
qDebug()<<"conme  2in";

if(event->key() == Qt::Key_Up)
{
if(event->isAutoRepeat())
    return;
on_upButton_clicked();
}
else if(event->key() == Qt::Key_Down)
{
if(event->isAutoRepeat())
    return;
on_downButton_clicked();
}

else if(event->key() == Qt::Key_Left)
{
if(event->isAutoRepeat())
    return;
on_leftButton_clicked();
}

else if(event->key() == Qt::Key_Right)
{
if(event->isAutoRepeat())
    return;
on_rightButton_clicked();
}

}

void Gamezone::keyReleaseEvent(QKeyEvent *event)
{
if(event->key() == Qt::Key_Up)
{     if(event->isAutoRepeat())
     return;
}
else if(event->key() == Qt::Key_Down)
{
if(event->isAutoRepeat())
             return;
}
else if(event->key() == Qt::Key_Left)
{
    if(event->isAutoRepeat())
                 return;
}
else if(event->key() == Qt::Key_Right)
{
        if(event->isAutoRepeat())
                     return;
}
}

void Gamezone::gameover()
{
   // player->currentMediaChanged(QMediaContent(QUrl::fromLocalFile(second_songs)));
    player3->setMedia(QUrl::fromLocalFile(third_songs));
    player3->play();

tim->stop();
// QMessageBox::information(this, QString::fromUtf8("Waring"), QString::fromUtf8("Game Over"));
}


void Gamezone::eatfood()
{
//如果蛇头的X坐标等于食物的X坐标，并且蛇头的Y坐标等于食物的Y坐标 表示吃到食物，否则表示没有吃到。
if(y > 2)
{
if(snake[0][0] == foodPosition[0] && snake[0][1] == foodPosition[1]){
   m_foodCount++;

   score_update();

   create_new_food(); //产生一个新的食物
}

//蛇的身子添加
for(int snId = m_foodCount; snId > 0; --snId){
  snake[snId][0] = snake[snId - 1][0];
  snake[snId][1] = snake[snId - 1][1];
}
}

snakeheadmove();
}

void Gamezone::score_update()
{
    player2->setMedia(QUrl::fromLocalFile(second_songs));
    player2->setVolume(30);
    player2->play();
score = m_foodCount*5-5;
l_score->setText(QString::number(score));
}

void Gamezone::on_upButton_clicked()
{
m_direction = UP;
flag = 1;
qDebug()<<"上走";
}

void Gamezone::on_leftButton_clicked()
{
m_direction = LEFT;
qDebug()<<"左走";
flag = 2;
}

void Gamezone::on_downButton_clicked()
{
m_direction = DOWN;
qDebug()<<"下走";
flag = 0;
}

void Gamezone::on_rightButton_clicked()
{
m_direction = RIGHT;
qDebug()<<"右走";
flag = 3;
}

bool Gamezone::overedge()
{

if(snake[0][0] > (COL - 2) || snake[0][0] <= 0 || snake[0][1] > (ROW - 1) || snake[0][1] <= 2) {
qDebug()<<"蛇的x坐标"<<snake[0][0];
qDebug()<<"蛇的y坐标"<<snake[0][1];

gameover();
qDebug()<<"越界";
return true;
}

for(int i = 1; i <= m_foodCount; ++i) {
if(snake[0][0] == snake[i][0] && snake[0][1] == snake[i][1]) {
   qDebug()<<"蛇的x坐标"<<snake[i][0];
   gameover();
   return true;
    qDebug()<<"越界2";
}
}

return false;

}


void Gamezone::snakeheadmove()
{
switch(m_direction){
case UP:
    -- snake[0][1];
    break;

case DOWN:
    ++ snake[0][1];
    break;

case LEFT:
    -- snake[0][0];
    break;

case RIGHT:
    ++ snake[0][0];
    break;

default:
    break;
}
}

#if 1
Gamezone::~Gamezone()
{
delete this;
   delete pix2;
   delete tim;
   delete db;
   delete query;
   delete player;
   delete l_score;
   delete view_score;
}
#endif
