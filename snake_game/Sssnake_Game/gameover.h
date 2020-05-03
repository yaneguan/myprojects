#ifndef GAMEOVER_H
#define GAMEOVER_H

#include <QWidget>
#include "gamezone.h"
#include <QMovie>
#include <QLabel>
#include <QDebug>
#include <QPainter>
#include <QTimer>
#include <QPushButton>
class Gameover : public QWidget
{
    Q_OBJECT
public:
    explicit Gameover(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *);
    static int i;
    static int j;
    static int x;
    static int y;
signals:
public slots:
    void recv();
    void snake_move();
private:
    QLabel *one;
    QLabel *two;
    QLabel *three;
    QLabel *four;
    QLabel *score;
    QLabel *high_score;
    QLabel *logo;
    QTimer *tim;
    QPixmap *pix;

};

#endif // GAMEOVER_H
