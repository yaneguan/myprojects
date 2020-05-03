#ifndef LOGIN_H
#define LOGIN_H
#include <QWidget>
#include <QTimer>
#include <QProgressBar>
#include <QTimerEvent>
#include <QDebug>
#include <QTime>
#include <QSlider>
#include <QPainter>
#include "widget.h"
#include "userspace.h"
#include <QPixmap>
namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    void timerEvent(QTimerEvent *tr);
    void deal();
    ~login();

private:
    Ui::login *ui;
    QSlider *sl;
    QTimer *tim;
    QPixmap *pix;
    QPixmap *pix2;
    QPixmap *pix3;
    int angle = 15;
    static int flag;

};

#endif // LOGIN_H
