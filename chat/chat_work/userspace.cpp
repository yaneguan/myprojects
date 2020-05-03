#include "userspace.h"
#include "ui_userspace.h"

userspace::userspace(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::userspace)
{
    ui->setupUi(this);
    this->setFixedSize(402,798);
    this->setGeometry(1400,100,402,798);
    connect(ui->pushButton_7,SIGNAL(clicked(bool)),this,SLOT(dig_show()));
    ui->pushButton_7->setFlat(true);
    ui->pushButton_7->installEventFilter(this);
    ui->pushButton_35->setFlat(true);
     ui->pushButton_35->installEventFilter(this);
    ui->pushButton_36->setFlat(true);
     ui->pushButton_36->installEventFilter(this);
     ui->pushButton_49->setFlat(true);
      ui->pushButton_49->installEventFilter(this);
      ui->pushButton_48->setFlat(true);
       ui->pushButton_48->installEventFilter(this);
       ui->pushButton_47->setFlat(true);
        ui->pushButton_47->installEventFilter(this);
        ui->pushButton_8->installEventFilter(this);
        ui->pushButton_9->installEventFilter(this);
        ui->pushButton->installEventFilter(this);
        ui->pushButton_2->installEventFilter(this);
        ui->pushButton_3->installEventFilter(this);
        ui->pushButton_4->installEventFilter(this);
        ui->pushButton_5->installEventFilter(this);
        ui->pushButton_6->installEventFilter(this);
    ui->label_6->setAttribute(Qt::WA_TranslucentBackground);
//    ui->label_6->installEventFilter(this);
    ui->label_34->setAttribute(Qt::WA_TranslucentBackground);
//     ui->label_34->installEventFilter(this);
     ui->label_35->setAttribute(Qt::WA_TranslucentBackground);
//      ui->label_35->installEventFilter(this);
     ui->label_48->setAttribute(Qt::WA_TranslucentBackground);
      ui->label_47->setAttribute(Qt::WA_TranslucentBackground);
      ui->label_46->setAttribute(Qt::WA_TranslucentBackground);
      ui->label_36->setAttribute(Qt::WA_TranslucentBackground);
      ui->label_37->setAttribute(Qt::WA_TranslucentBackground);
      ui->label_38->setAttribute(Qt::WA_TranslucentBackground);
     ui->label_39->setAttribute(Qt::WA_TranslucentBackground);
     ui->label_40->setAttribute(Qt::WA_TranslucentBackground);
     ui->label_41->setAttribute(Qt::WA_TranslucentBackground);
     ui->label_42->setAttribute(Qt::WA_TranslucentBackground);
     ui->label_43->setAttribute(Qt::WA_TranslucentBackground);
     ui->label_44->setAttribute(Qt::WA_TranslucentBackground);
     ui->label_45->setAttribute(Qt::WA_TranslucentBackground);
//      ui->label_48->installEventFilter(this);

      ui->pushButton_7->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(173, 172, 192, 255), stop:1 rgba(255, 255, 255, 255));");
      ui->pushButton_35->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(173, 172, 192, 255), stop:1 rgba(255, 255, 255, 255));");
      ui->pushButton_36->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(173, 172, 192, 255), stop:1 rgba(255, 255, 255, 255));");
      ui->pushButton_39->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(173, 172, 192, 255), stop:1 rgba(255, 255, 255, 255));");
      ui->pushButton_8->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(28, 85, 107, 255), stop:1 rgba(255, 255, 255, 255));");
      ui->pushButton_9->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(28, 85, 107, 255), stop:1 rgba(255, 255, 255, 255));");
      ui->pushButton_2->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(28, 85, 107, 255), stop:1 rgba(255, 255, 255, 255));");
      ui->pushButton_3->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(28, 85, 107, 255), stop:1 rgba(255, 255, 255, 255));");
      ui->pushButton_4->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(28, 85, 107, 255), stop:1 rgba(255, 255, 255, 255));");
      ui->pushButton_5->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(28, 85, 107, 255), stop:1 rgba(255, 255, 255, 255));");
      ui->pushButton_6->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(28, 85, 107, 255), stop:1 rgba(255, 255, 255, 255));");
      ui->pushButton->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(28, 85, 107, 255), stop:1 rgba(255, 255, 255, 255));");

      ui->label_6->setStyleSheet(""
                                 " background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(173, 172, 192, 255), stop:1 rgba(255, 255, 255, 255));");

}
void userspace::chat_widget(QPushButton *btn)
{
    ct = new chat_windows;
    ct->setGeometry(100,100,591,705);
    ct->setFixedSize(591,705);
    ct->setWindowTitle(btn->text());
    ct->setWindowIcon(QIcon(btn->icon()));
    ct->show();
    ct->nm = ui->pushButton_10->text();
}

userspace::~userspace()
{
    delete ui;
}

bool userspace::eventFilter(QObject *target, QEvent *e)
{
    if(target == ui->pushButton_7)
    {
        if(e->type() == QEvent::Enter)
        {

           ui->pushButton_7->setStyleSheet("border:1px;border-color: rgb(182,171,174);background-color: rgb(180,180,250)");
//           ui->label_6->setStyleSheet("border:1px;border-color: rgb(182,171,174);background-color: rgb(180,180,250)");
        }
        else if(e->type() == QEvent::Leave)
        {

            ui->pushButton_7->setStyleSheet(""
                                            " background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(173, 172, 192, 255), stop:1 rgba(255, 255, 255, 255));");
        }
        else if(e->type() == QEvent::MouseButtonDblClick)
        {
             chat_widget(ui->pushButton_7);
        }
    }

    else if(target == ui->pushButton_35)
    {
        if(e->type() == QEvent::Enter)
        {

           ui->pushButton_35->setStyleSheet("border:1px;border-color: rgb(182,171,174);background-color: rgb(180,180,250)");
        }
        else if(e->type() == QEvent::Leave)
        {

            ui->pushButton_35->setStyleSheet(""
                                            " background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(173, 172, 192, 255), stop:1 rgba(255, 255, 255, 255));");
        }
        else if(e->type() == QEvent::MouseButtonDblClick)
        {
             chat_widget(ui->pushButton_35);
        }
    }
    else if(target == ui->pushButton_36)
    {
        if(e->type() == QEvent::Enter)
        {

           ui->pushButton_36->setStyleSheet("border:1px;border-color: rgb(182,171,174);background-color: rgb(180,180,250)");
 //          ui->label_6->setStyleSheet("border:1px;border-color: rgb(182,171,174);background-color: rgb(180,180,250)");
        }
        else if(e->type() == QEvent::Leave)
        {

            ui->pushButton_36->setStyleSheet(""
                                            " background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(173, 172, 192, 255), stop:1 rgba(255, 255, 255, 255));");
        }else if(e->type() == QEvent::MouseButtonDblClick)
        {
             chat_widget(ui->pushButton_36);
        }
    }
    else if(target == ui->pushButton_49)
    {
        if(e->type() == QEvent::Enter)
        {

           ui->pushButton_49->setStyleSheet("border:1px;border-color: rgb(182,171,174);background-color: rgb(180,180,250)");
 //          ui->label_6->setStyleSheet("border:1px;border-color: rgb(182,171,174);background-color: rgb(180,180,250)");
        }
        else if(e->type() == QEvent::Leave)
        {

            ui->pushButton_49->setStyleSheet(""
                                            " background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(173, 172, 192, 255), stop:1 rgba(255, 255, 255, 255));");

        }else if(e->type() == QEvent::MouseButtonDblClick)
        {
             chat_widget(ui->pushButton_49);
        }
    }
    else if(target == ui->pushButton_48)
    {
        if(e->type() == QEvent::Enter)
        {

           ui->pushButton_48->setStyleSheet("border:1px;border-color: rgb(182,171,174);background-color: rgb(180,180,250)");
         }
        else if(e->type() == QEvent::Leave)
        {

            ui->pushButton_48->setStyleSheet(""
                                            " background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(173, 172, 192, 255), stop:1 rgba(255, 255, 255, 255));");

        }else if(e->type() == QEvent::MouseButtonDblClick)
        {
             chat_widget(ui->pushButton_48);
        }
    }
    else if(target == ui->pushButton_47)
    {
        if(e->type() == QEvent::Enter)
        {

           ui->pushButton_47->setStyleSheet("border:1px;border-color: rgb(182,171,174);background-color: rgb(180,180,250)");
         }
        else if(e->type() == QEvent::Leave)
        {

            ui->pushButton_47->setStyleSheet(""
                                            " background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(173, 172, 192, 255), stop:1 rgba(255, 255, 255, 255));");

        }else if(e->type() == QEvent::MouseButtonDblClick)
        {
             chat_widget(ui->pushButton_47);
        }
    }
    else if(target == ui->pushButton_46)
    {
        if(e->type() == QEvent::Enter)
        {

           ui->pushButton_46->setStyleSheet("border:1px;border-color: rgb(182,171,174);background-color: rgb(180,180,250)");
         }
        else if(e->type() == QEvent::Leave)
        {

            ui->pushButton_46->setStyleSheet(""
                                            " background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(173, 172, 192, 255), stop:1 rgba(255, 255, 255, 255));");

        }else if(e->type() == QEvent::MouseButtonDblClick)
        {
             chat_widget(ui->pushButton_46);
        }
    }
    else if(target == ui->pushButton_45)
    {
        if(e->type() == QEvent::Enter)
        {

           ui->pushButton_45->setStyleSheet("border:1px;border-color: rgb(182,171,174);background-color: rgb(180,180,250)");
         }
        else if(e->type() == QEvent::Leave)
        {

            ui->pushButton_45->setStyleSheet(""
                                            " background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(173, 172, 192, 255), stop:1 rgba(255, 255, 255, 255));");

        }else if(e->type() == QEvent::MouseButtonDblClick)
        {
             chat_widget(ui->pushButton_45);
        }
    }
    else if(target == ui->pushButton_44)
    {
        if(e->type() == QEvent::Enter)
        {

           ui->pushButton_44->setStyleSheet("border:1px;border-color: rgb(182,171,174);background-color: rgb(180,180,250)");
         }
        else if(e->type() == QEvent::Leave)
        {

            ui->pushButton_44->setStyleSheet(""
                                            " background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(173, 172, 192, 255), stop:1 rgba(255, 255, 255, 255));");

        }else if(e->type() == QEvent::MouseButtonDblClick)
        {
             chat_widget(ui->pushButton_44);
        }
    }
    else if(target == ui->pushButton_43)
    {
        if(e->type() == QEvent::Enter)
        {

           ui->pushButton_43->setStyleSheet("border:1px;border-color: rgb(182,171,174);background-color: rgb(180,180,250)");
         }
        else if(e->type() == QEvent::Leave)
        {

            ui->pushButton_43->setStyleSheet(""
                                            " background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(173, 172, 192, 255), stop:1 rgba(255, 255, 255, 255));");

        }else if(e->type() == QEvent::MouseButtonDblClick)
        {
             chat_widget(ui->pushButton_43);
        }
    }
    else if(target == ui->pushButton_8)
    {
        if(e->type() == QEvent::Enter)
        {

           ui->pushButton_8->setStyleSheet("border:1px;border-color: rgb(182,171,174);background-color: rgba(38, 85, 107, 255)");
         }
        else if(e->type() == QEvent::Leave)
        {

            ui->pushButton_8->setStyleSheet(""
                                            " background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(28, 85, 107, 255), stop:1 rgba(255, 255, 255, 255));");

        }
    }
    else if(target == ui->pushButton_9)
    {
        if(e->type() == QEvent::Enter)
        {

           ui->pushButton_9->setStyleSheet("border:1px;border-color: rgb(182,171,174);background-color: rgb(31,252,238)");
         }
        else if(e->type() == QEvent::Leave)
        {

            ui->pushButton_9->setStyleSheet(""
                                            " background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(28, 85, 107, 255), stop:1 rgba(255, 255, 255, 255));");

        }
    }
    else if(target == ui->pushButton_2)
    {
        if(e->type() == QEvent::Enter)
        {

           ui->pushButton_2->setStyleSheet("border:1px;border-color: rgb(182,171,174);background-color: rgba(38, 85, 107, 255)");
         }
        else if(e->type() == QEvent::Leave)
        {

            ui->pushButton_2->setStyleSheet(""
                                            " background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(28, 85, 107, 255), stop:1 rgba(255, 255, 255, 255));");

        }
    }
    else if(target == ui->pushButton_3)
    {
        if(e->type() == QEvent::Enter)
        {

           ui->pushButton_3->setStyleSheet("border:1px;border-color: rgb(182,171,174);background-color: rgba(38, 85, 107, 255)");
         }
        else if(e->type() == QEvent::Leave)
        {

            ui->pushButton_3->setStyleSheet(""
                                            " background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(28, 85, 107, 255), stop:1 rgba(255, 255, 255, 255));");

        }
    }
    else if(target == ui->pushButton_4)
    {
        if(e->type() == QEvent::Enter)
        {

           ui->pushButton_4->setStyleSheet("border:1px;border-color: rgb(182,171,174);background-color: rgba(38, 85, 107, 255)");
         }
        else if(e->type() == QEvent::Leave)
        {

            ui->pushButton_4->setStyleSheet(""
                                            " background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(28, 85, 107, 255), stop:1 rgba(255, 255, 255, 255));");

        }
    }
    else if(target == ui->pushButton_5)
    {
        if(e->type() == QEvent::Enter)
        {

           ui->pushButton_5->setStyleSheet("border:1px;border-color: rgb(182,171,174);background-color: rgba(38, 85, 107, 255)");
         }
        else if(e->type() == QEvent::Leave)
        {

            ui->pushButton_5->setStyleSheet(""
                                            " background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(28, 85, 107, 255), stop:1 rgba(255, 255, 255, 255));");

        }
    }
    else if(target == ui->pushButton)
    {
        if(e->type() == QEvent::Enter)
        {

           ui->pushButton->setStyleSheet("border:1px;border-color: rgb(182,171,174);background-color: rgba(38, 85, 107, 255)");
         }
        else if(e->type() == QEvent::Leave)
        {

            ui->pushButton->setStyleSheet(""
                                            " background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(28, 85, 107, 255), stop:1 rgba(255, 255, 255, 255));");

        }
    }

}
