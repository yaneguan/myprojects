#ifndef REGIST_H
#define REGIST_H

#include <QWidget>
#include <QMouseEvent>
#include <QEvent>
#include <QSettings>
#include <QMessageBox>
#include <QLineEdit>
#include <QDebug>
namespace Ui {
class regist;
}

class regist : public QWidget
{
    Q_OBJECT

public:
    explicit regist(QWidget *parent = 0);
    bool eventFilter(QObject *target, QEvent *e);
    bool write_init();

    ~regist();
signals:

public slots:
void check_gist();
    void to_login();
private:
    Ui::regist *ui;
};

#endif // REGIST_H
