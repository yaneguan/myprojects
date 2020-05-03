#ifndef USERSPACE_H
#define USERSPACE_H

#include <QWidget>
#include <QDialog>
#include <QMouseEvent>
#include <QEvent>
#include "chat_windows.h"
#include <QString>
namespace Ui {
class userspace;
}

class userspace : public QWidget
{
    Q_OBJECT

public:
    explicit userspace(QWidget *parent = 0);
    bool eventFilter(QObject *target, QEvent *e);
        void chat_widget(QPushButton *btn);
    ~userspace();

private:
    Ui::userspace *ui;
    QDialog *dg;
    chat_windows *ct;
};

#endif // USERSPACE_H
