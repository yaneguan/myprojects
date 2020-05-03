#include "chat_windows.h"
#include "ui_chat_windows.h"

QString chat_windows::nm = "";
chat_windows::chat_windows(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::chat_windows)
{
    ui->setupUi(this);
    this->setGeometry(900,100,588,708);
    layout = new QVBoxLayout;

        gettext = new QPlainTextEdit;

        //gettext->resize(150,20);

    connect(ui->pushButton_11,SIGNAL(clicked(bool)),this,SLOT(send_message()));
}
void chat_windows::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setPen(QPen(QColor(0,255,255),3));
    painter.drawLine(0,495,680,495);
}

void chat_windows::send_message()
{
    QString str = ui->plainTextEdit->toPlainText();
    qDebug()<<"text = "<<str;
    ui->plainTextEdit->clear();
    int length = str.length();
    layout->addWidget(gettext);
    QDateTime current_date_time =QDateTime::currentDateTime();
    QString current_date = current_date_time.toString("yyyy.MM.dd hh:mm:ss");

    QString sp = "          ";
    QString spr = "          \n\n";
    QString trv = " :                  \n\n";
    QString tvt = "    ";
    QString trr = "\n";
    gettext->appendPlainText(sp + current_date + spr + nm + trv +tvt+ str+trr);

    ui->scrollArea->setLayout(layout);
}
chat_windows::~chat_windows()
{
    delete ui;
}
