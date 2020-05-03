#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QMessageBox>
#include <QPainter>
#include <QComboBox>
#include <QLabel>
#include <QPalette>
#include <QEvent>
#include <QMouseEvent>
#include <QDebug>
#include <QMediaPlayer>
#include <QUrl>
#include <QMediaPlaylist>

#include "gamezone.h"
#include "gameover.h"
class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    bool eventFilter(QObject *watched, QEvent *event);
    ~Widget();
public slots:
    void to_gamezone();
signals:
    void mainGame();
private:
    QLabel *title;
    QLabel *title2;
    QLabel *title3;
    QPushButton *start;
    QMediaPlayer *player;
    QMediaPlaylist *playlist;
};

#endif // WIDGET_H
