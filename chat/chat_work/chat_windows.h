#ifndef CHAT_WINDOWS_H
#define CHAT_WINDOWS_H

#include <QWidget>
#include <QPainter>
#include <QLabel>
#include <QPushButton>
#include <QDebug>
#include <QDateTime>
#include <QString>
#include <QPlainTextEdit>
#include <QTextEdit>
#include <QVBoxLayout>
namespace Ui {
class chat_windows;
}

class chat_windows : public QWidget
{
    Q_OBJECT

public:
    explicit chat_windows(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
    static QString nm;
    ~chat_windows();

private:
    Ui::chat_windows *ui;
    QLabel *user;
    QPlainTextEdit *gettext;
//    QTextEdit *gettext;
    QVBoxLayout*layout;

public slots:
    void send_message();
};

#endif // CHAT_WINDOWS_H
