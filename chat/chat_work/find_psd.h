#ifndef FIND_PSD_H
#define FIND_PSD_H

#include <QWidget>
#include <QSettings>
#include <QMessageBox>
#include <QDebug>
namespace Ui {
class find_psd;
}

class find_psd : public QWidget
{
    Q_OBJECT

public:
    QString path;
    QSettings *conf;
    explicit find_psd(QWidget *parent = 0);
    ~find_psd();
public slots:
    void this_close();
private:
    Ui::find_psd *ui;
    QString user;
    QString tel;
    QString psd;

};

#endif // FIND_PSD_H
