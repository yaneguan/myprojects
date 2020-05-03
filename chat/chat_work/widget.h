#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMovie>
#include <QLabel>
#include <QPushButton>
#include <QMouseEvent>
#include <QPoint>
#include <QPainter>
#include <QStyleOption>
#include <QBitmap>
#include <QDebug>
#include <QMenu>
#include <QImage>
#include "regist.h"
#include "login.h"
#include <QPainter>
#include <QString>
#include <QSettings>
#include <QMessageBox>
#include <QDebug>
#include <QVariant>
#include "find_psd.h"
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    bool eventFilter(QObject *target, QEvent *e);
    void paintEvent(QPaintEvent *);
      bool read_init(QString usr,QString psd);
      void do_read_init();
           void do_remember();
    ~Widget();
signals:
    void exam_rady();
public slots:
    void regist_view();
    void login_view();
     void do_exam();
    void set_state();
    void set_auto_state();
    void find_pwd();
private:
    Ui::Widget *ui;
    QString _usr;
    QString _pwd;
    QString path;
    QSettings *conf;
};

#endif // WIDGET_H
