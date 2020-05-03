#ifndef GAMEZONE_H
#define GAMEZONE_H

#include <QWidget>
#include <QWidget>
#include<QPalette>
#include <QIcon>
#include <QMouseEvent>
#include <QPixmap>
#include <QPainter>
#include <QLabel>
#include <QTimer>
#include <QMessageBox>
#include <QDebug>
#include <QKeyEvent>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMediaPlayer>
#include <QUrl>
#include <QMediaPlaylist>
class Gamezone : public QWidget
{
    Q_OBJECT
public:
    explicit Gamezone(QWidget *parent = nullptr);
    static int score;
    static int hight_socre;

    static Gamezone *score_trans()
    {
        static Gamezone sc;
        return &sc;
    }
    void paintEvent(QPaintEvent *);
    void init();
    QSqlError init_database();

    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);
    void serach_sqlite();
    void gameover();
    void eatfood();
    void score_update();
    void create_new_food();
    bool overedge();
    void drawSnakeHead();
    void snakeheadmove();
    void on_upButton_clicked();

    void on_leftButton_clicked();

    void on_downButton_clicked();

    void on_rightButton_clicked();
       ~ Gamezone();
signals:
        void over();
public slots:
            void snake_move();
            void recvwidget();
private:
    QLabel *l_score;
    QLabel *view_score;

    QLabel *h_score;
    QLabel *hview_score;

    int foodPosition[2];
    int snake[100][2];
    int m_foodCount;
    int m_direction;
    int m_currentSpeed;
    int sec;
    int y;
    int flag;
       qint64  real;
    QPixmap *pix2;
        QTimer *tim;
   QSqlDatabase *db;
   QSqlQuery *query;
   QMediaPlayer *player;
   QMediaPlayer *player2;
   QMediaPlayer *player3;

   QMediaPlaylist *playlist;
};

#endif // GAMEZONE_H
