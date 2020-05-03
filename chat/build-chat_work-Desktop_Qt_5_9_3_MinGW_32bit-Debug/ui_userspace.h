/********************************************************************************
** Form generated from reading UI file 'userspace.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERSPACE_H
#define UI_USERSPACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userspace
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_7;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_30;
    QPushButton *pushButton_35;
    QLabel *label_34;
    QHBoxLayout *horizontalLayout_44;
    QPushButton *pushButton_49;
    QLabel *label_48;
    QHBoxLayout *horizontalLayout_43;
    QPushButton *pushButton_48;
    QLabel *label_47;
    QHBoxLayout *horizontalLayout_42;
    QPushButton *pushButton_47;
    QLabel *label_46;
    QHBoxLayout *horizontalLayout_41;
    QPushButton *pushButton_46;
    QLabel *label_45;
    QHBoxLayout *horizontalLayout_40;
    QPushButton *pushButton_45;
    QLabel *label_44;
    QHBoxLayout *horizontalLayout_39;
    QPushButton *pushButton_44;
    QLabel *label_43;
    QHBoxLayout *horizontalLayout_38;
    QPushButton *pushButton_43;
    QLabel *label_42;
    QHBoxLayout *horizontalLayout_37;
    QPushButton *pushButton_42;
    QLabel *label_41;
    QHBoxLayout *horizontalLayout_36;
    QPushButton *pushButton_41;
    QLabel *label_40;
    QHBoxLayout *horizontalLayout_35;
    QPushButton *pushButton_40;
    QLabel *label_39;
    QHBoxLayout *horizontalLayout_34;
    QPushButton *pushButton_39;
    QLabel *label_38;
    QHBoxLayout *horizontalLayout_33;
    QPushButton *pushButton_38;
    QLabel *label_37;
    QHBoxLayout *horizontalLayout_32;
    QPushButton *pushButton_37;
    QLabel *label_36;
    QHBoxLayout *horizontalLayout_31;
    QPushButton *pushButton_36;
    QLabel *label_35;
    QWidget *tab_2;
    QTabWidget *tabWidget_2;
    QWidget *tab_4;
    QToolBox *toolBox;
    QWidget *widget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_53;
    QPushButton *pushButton_54;
    QPushButton *pushButton_55;
    QWidget *page_2;
    QPushButton *pushButton_56;
    QPushButton *pushButton_57;
    QWidget *page;
    QPushButton *pushButton_58;
    QWidget *page_3;
    QWidget *page_4;
    QWidget *page_5;
    QWidget *tab_5;
    QToolBox *toolBox_2;
    QWidget *widget1;
    QWidget *page_6;
    QWidget *widget2;
    QWidget *page_8;
    QWidget *tab_3;
    QPushButton *pushButton_50;
    QPushButton *pushButton_51;
    QPushButton *pushButton_52;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;

    void setupUi(QWidget *userspace)
    {
        if (userspace->objectName().isEmpty())
            userspace->setObjectName(QStringLiteral("userspace"));
        userspace->resize(402, 798);
        label = new QLabel(userspace);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 10, 411, 171));
        label->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(28, 85, 107, 255), stop:1 rgba(255, 255, 255, 255));"));
        label_2 = new QLabel(userspace);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 180, 41, 31));
        label_2->setStyleSheet(QLatin1String("border-image: url(:/user_space/serach.ico);\n"
"background-color: rgb(255, 255, 255);"));
        lineEdit = new QLineEdit(userspace);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(40, 180, 361, 31));
        lineEdit_2 = new QLineEdit(userspace);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(110, 110, 161, 21));
        tabWidget = new QTabWidget(userspace);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 210, 401, 581));
        tabWidget->setMinimumSize(QSize(401, 0));
        tabWidget->setMaximumSize(QSize(401, 16777215));
        tabWidget->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(173, 172, 192, 255), stop:1 rgba(255, 255, 255, 255));"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        scrollArea = new QScrollArea(tab);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(0, 0, 401, 461));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setMinimumSize(QSize(401, 461));
        scrollArea->setMaximumSize(QSize(401, 461));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -811, 382, 1455));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_7 = new QPushButton(scrollAreaWidgetContents);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setMinimumSize(QSize(231, 81));
        pushButton_7->setMaximumSize(QSize(231, 81));
        QIcon icon;
        icon.addFile(QStringLiteral(":/user_space/man11.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon);
        pushButton_7->setIconSize(QSize(80, 80));
        pushButton_7->setFlat(true);

        horizontalLayout_2->addWidget(pushButton_7);

        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setMinimumSize(QSize(120, 81));
        label_6->setMaximumSize(QSize(120, 81));
        label_6->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(173, 172, 192, 255), stop:1 rgba(255, 255, 255, 255));"));

        horizontalLayout_2->addWidget(label_6);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setObjectName(QStringLiteral("horizontalLayout_30"));
        pushButton_35 = new QPushButton(scrollAreaWidgetContents);
        pushButton_35->setObjectName(QStringLiteral("pushButton_35"));
        sizePolicy.setHeightForWidth(pushButton_35->sizePolicy().hasHeightForWidth());
        pushButton_35->setSizePolicy(sizePolicy);
        pushButton_35->setMinimumSize(QSize(231, 81));
        pushButton_35->setMaximumSize(QSize(231, 81));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/user_space/man22.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_35->setIcon(icon1);
        pushButton_35->setIconSize(QSize(80, 80));
        pushButton_35->setFlat(true);

        horizontalLayout_30->addWidget(pushButton_35);

        label_34 = new QLabel(scrollAreaWidgetContents);
        label_34->setObjectName(QStringLiteral("label_34"));
        sizePolicy.setHeightForWidth(label_34->sizePolicy().hasHeightForWidth());
        label_34->setSizePolicy(sizePolicy);
        label_34->setMinimumSize(QSize(120, 81));
        label_34->setMaximumSize(QSize(120, 81));

        horizontalLayout_30->addWidget(label_34);


        verticalLayout->addLayout(horizontalLayout_30);

        horizontalLayout_44 = new QHBoxLayout();
        horizontalLayout_44->setObjectName(QStringLiteral("horizontalLayout_44"));
        pushButton_49 = new QPushButton(scrollAreaWidgetContents);
        pushButton_49->setObjectName(QStringLiteral("pushButton_49"));
        sizePolicy.setHeightForWidth(pushButton_49->sizePolicy().hasHeightForWidth());
        pushButton_49->setSizePolicy(sizePolicy);
        pushButton_49->setMinimumSize(QSize(231, 81));
        pushButton_49->setMaximumSize(QSize(231, 81));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/user_space/man33.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_49->setIcon(icon2);
        pushButton_49->setIconSize(QSize(80, 80));
        pushButton_49->setFlat(true);

        horizontalLayout_44->addWidget(pushButton_49);

        label_48 = new QLabel(scrollAreaWidgetContents);
        label_48->setObjectName(QStringLiteral("label_48"));
        sizePolicy.setHeightForWidth(label_48->sizePolicy().hasHeightForWidth());
        label_48->setSizePolicy(sizePolicy);
        label_48->setMinimumSize(QSize(120, 81));
        label_48->setMaximumSize(QSize(120, 81));

        horizontalLayout_44->addWidget(label_48);


        verticalLayout->addLayout(horizontalLayout_44);

        horizontalLayout_43 = new QHBoxLayout();
        horizontalLayout_43->setObjectName(QStringLiteral("horizontalLayout_43"));
        pushButton_48 = new QPushButton(scrollAreaWidgetContents);
        pushButton_48->setObjectName(QStringLiteral("pushButton_48"));
        sizePolicy.setHeightForWidth(pushButton_48->sizePolicy().hasHeightForWidth());
        pushButton_48->setSizePolicy(sizePolicy);
        pushButton_48->setMinimumSize(QSize(231, 81));
        pushButton_48->setMaximumSize(QSize(231, 81));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/user_space/women4.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_48->setIcon(icon3);
        pushButton_48->setIconSize(QSize(80, 80));
        pushButton_48->setFlat(true);

        horizontalLayout_43->addWidget(pushButton_48);

        label_47 = new QLabel(scrollAreaWidgetContents);
        label_47->setObjectName(QStringLiteral("label_47"));
        sizePolicy.setHeightForWidth(label_47->sizePolicy().hasHeightForWidth());
        label_47->setSizePolicy(sizePolicy);
        label_47->setMinimumSize(QSize(120, 81));
        label_47->setMaximumSize(QSize(120, 81));

        horizontalLayout_43->addWidget(label_47);


        verticalLayout->addLayout(horizontalLayout_43);

        horizontalLayout_42 = new QHBoxLayout();
        horizontalLayout_42->setObjectName(QStringLiteral("horizontalLayout_42"));
        pushButton_47 = new QPushButton(scrollAreaWidgetContents);
        pushButton_47->setObjectName(QStringLiteral("pushButton_47"));
        sizePolicy.setHeightForWidth(pushButton_47->sizePolicy().hasHeightForWidth());
        pushButton_47->setSizePolicy(sizePolicy);
        pushButton_47->setMinimumSize(QSize(231, 81));
        pushButton_47->setMaximumSize(QSize(231, 81));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/user_space/women3.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_47->setIcon(icon4);
        pushButton_47->setIconSize(QSize(80, 80));
        pushButton_47->setFlat(true);

        horizontalLayout_42->addWidget(pushButton_47);

        label_46 = new QLabel(scrollAreaWidgetContents);
        label_46->setObjectName(QStringLiteral("label_46"));
        sizePolicy.setHeightForWidth(label_46->sizePolicy().hasHeightForWidth());
        label_46->setSizePolicy(sizePolicy);
        label_46->setMinimumSize(QSize(120, 81));
        label_46->setMaximumSize(QSize(120, 81));

        horizontalLayout_42->addWidget(label_46);


        verticalLayout->addLayout(horizontalLayout_42);

        horizontalLayout_41 = new QHBoxLayout();
        horizontalLayout_41->setObjectName(QStringLiteral("horizontalLayout_41"));
        pushButton_46 = new QPushButton(scrollAreaWidgetContents);
        pushButton_46->setObjectName(QStringLiteral("pushButton_46"));
        sizePolicy.setHeightForWidth(pushButton_46->sizePolicy().hasHeightForWidth());
        pushButton_46->setSizePolicy(sizePolicy);
        pushButton_46->setMinimumSize(QSize(231, 81));
        pushButton_46->setMaximumSize(QSize(231, 81));
        pushButton_46->setIcon(icon3);
        pushButton_46->setIconSize(QSize(80, 80));
        pushButton_46->setFlat(true);

        horizontalLayout_41->addWidget(pushButton_46);

        label_45 = new QLabel(scrollAreaWidgetContents);
        label_45->setObjectName(QStringLiteral("label_45"));
        sizePolicy.setHeightForWidth(label_45->sizePolicy().hasHeightForWidth());
        label_45->setSizePolicy(sizePolicy);
        label_45->setMinimumSize(QSize(120, 81));
        label_45->setMaximumSize(QSize(120, 81));

        horizontalLayout_41->addWidget(label_45);


        verticalLayout->addLayout(horizontalLayout_41);

        horizontalLayout_40 = new QHBoxLayout();
        horizontalLayout_40->setObjectName(QStringLiteral("horizontalLayout_40"));
        pushButton_45 = new QPushButton(scrollAreaWidgetContents);
        pushButton_45->setObjectName(QStringLiteral("pushButton_45"));
        sizePolicy.setHeightForWidth(pushButton_45->sizePolicy().hasHeightForWidth());
        pushButton_45->setSizePolicy(sizePolicy);
        pushButton_45->setMinimumSize(QSize(231, 81));
        pushButton_45->setMaximumSize(QSize(231, 81));
        pushButton_45->setIcon(icon2);
        pushButton_45->setIconSize(QSize(80, 80));
        pushButton_45->setFlat(true);

        horizontalLayout_40->addWidget(pushButton_45);

        label_44 = new QLabel(scrollAreaWidgetContents);
        label_44->setObjectName(QStringLiteral("label_44"));
        sizePolicy.setHeightForWidth(label_44->sizePolicy().hasHeightForWidth());
        label_44->setSizePolicy(sizePolicy);
        label_44->setMinimumSize(QSize(120, 81));
        label_44->setMaximumSize(QSize(120, 81));

        horizontalLayout_40->addWidget(label_44);


        verticalLayout->addLayout(horizontalLayout_40);

        horizontalLayout_39 = new QHBoxLayout();
        horizontalLayout_39->setObjectName(QStringLiteral("horizontalLayout_39"));
        pushButton_44 = new QPushButton(scrollAreaWidgetContents);
        pushButton_44->setObjectName(QStringLiteral("pushButton_44"));
        sizePolicy.setHeightForWidth(pushButton_44->sizePolicy().hasHeightForWidth());
        pushButton_44->setSizePolicy(sizePolicy);
        pushButton_44->setMinimumSize(QSize(231, 81));
        pushButton_44->setMaximumSize(QSize(231, 81));
        pushButton_44->setIcon(icon1);
        pushButton_44->setIconSize(QSize(80, 80));
        pushButton_44->setFlat(true);

        horizontalLayout_39->addWidget(pushButton_44);

        label_43 = new QLabel(scrollAreaWidgetContents);
        label_43->setObjectName(QStringLiteral("label_43"));
        sizePolicy.setHeightForWidth(label_43->sizePolicy().hasHeightForWidth());
        label_43->setSizePolicy(sizePolicy);
        label_43->setMinimumSize(QSize(120, 81));
        label_43->setMaximumSize(QSize(120, 81));

        horizontalLayout_39->addWidget(label_43);


        verticalLayout->addLayout(horizontalLayout_39);

        horizontalLayout_38 = new QHBoxLayout();
        horizontalLayout_38->setObjectName(QStringLiteral("horizontalLayout_38"));
        pushButton_43 = new QPushButton(scrollAreaWidgetContents);
        pushButton_43->setObjectName(QStringLiteral("pushButton_43"));
        sizePolicy.setHeightForWidth(pushButton_43->sizePolicy().hasHeightForWidth());
        pushButton_43->setSizePolicy(sizePolicy);
        pushButton_43->setMinimumSize(QSize(231, 81));
        pushButton_43->setMaximumSize(QSize(231, 81));
        pushButton_43->setIcon(icon4);
        pushButton_43->setIconSize(QSize(80, 80));
        pushButton_43->setFlat(true);

        horizontalLayout_38->addWidget(pushButton_43);

        label_42 = new QLabel(scrollAreaWidgetContents);
        label_42->setObjectName(QStringLiteral("label_42"));
        sizePolicy.setHeightForWidth(label_42->sizePolicy().hasHeightForWidth());
        label_42->setSizePolicy(sizePolicy);
        label_42->setMinimumSize(QSize(120, 81));
        label_42->setMaximumSize(QSize(120, 81));

        horizontalLayout_38->addWidget(label_42);


        verticalLayout->addLayout(horizontalLayout_38);

        horizontalLayout_37 = new QHBoxLayout();
        horizontalLayout_37->setObjectName(QStringLiteral("horizontalLayout_37"));
        pushButton_42 = new QPushButton(scrollAreaWidgetContents);
        pushButton_42->setObjectName(QStringLiteral("pushButton_42"));
        sizePolicy.setHeightForWidth(pushButton_42->sizePolicy().hasHeightForWidth());
        pushButton_42->setSizePolicy(sizePolicy);
        pushButton_42->setMinimumSize(QSize(231, 81));
        pushButton_42->setMaximumSize(QSize(231, 81));
        pushButton_42->setIcon(icon1);
        pushButton_42->setIconSize(QSize(80, 80));
        pushButton_42->setFlat(true);

        horizontalLayout_37->addWidget(pushButton_42);

        label_41 = new QLabel(scrollAreaWidgetContents);
        label_41->setObjectName(QStringLiteral("label_41"));
        sizePolicy.setHeightForWidth(label_41->sizePolicy().hasHeightForWidth());
        label_41->setSizePolicy(sizePolicy);
        label_41->setMinimumSize(QSize(120, 81));
        label_41->setMaximumSize(QSize(120, 81));

        horizontalLayout_37->addWidget(label_41);


        verticalLayout->addLayout(horizontalLayout_37);

        horizontalLayout_36 = new QHBoxLayout();
        horizontalLayout_36->setObjectName(QStringLiteral("horizontalLayout_36"));
        pushButton_41 = new QPushButton(scrollAreaWidgetContents);
        pushButton_41->setObjectName(QStringLiteral("pushButton_41"));
        sizePolicy.setHeightForWidth(pushButton_41->sizePolicy().hasHeightForWidth());
        pushButton_41->setSizePolicy(sizePolicy);
        pushButton_41->setMinimumSize(QSize(231, 81));
        pushButton_41->setMaximumSize(QSize(231, 81));
        pushButton_41->setIcon(icon2);
        pushButton_41->setIconSize(QSize(80, 80));
        pushButton_41->setFlat(true);

        horizontalLayout_36->addWidget(pushButton_41);

        label_40 = new QLabel(scrollAreaWidgetContents);
        label_40->setObjectName(QStringLiteral("label_40"));
        sizePolicy.setHeightForWidth(label_40->sizePolicy().hasHeightForWidth());
        label_40->setSizePolicy(sizePolicy);
        label_40->setMinimumSize(QSize(120, 81));
        label_40->setMaximumSize(QSize(120, 81));

        horizontalLayout_36->addWidget(label_40);


        verticalLayout->addLayout(horizontalLayout_36);

        horizontalLayout_35 = new QHBoxLayout();
        horizontalLayout_35->setObjectName(QStringLiteral("horizontalLayout_35"));
        pushButton_40 = new QPushButton(scrollAreaWidgetContents);
        pushButton_40->setObjectName(QStringLiteral("pushButton_40"));
        sizePolicy.setHeightForWidth(pushButton_40->sizePolicy().hasHeightForWidth());
        pushButton_40->setSizePolicy(sizePolicy);
        pushButton_40->setMinimumSize(QSize(231, 81));
        pushButton_40->setMaximumSize(QSize(231, 81));
        pushButton_40->setIcon(icon);
        pushButton_40->setIconSize(QSize(80, 80));
        pushButton_40->setFlat(true);

        horizontalLayout_35->addWidget(pushButton_40);

        label_39 = new QLabel(scrollAreaWidgetContents);
        label_39->setObjectName(QStringLiteral("label_39"));
        sizePolicy.setHeightForWidth(label_39->sizePolicy().hasHeightForWidth());
        label_39->setSizePolicy(sizePolicy);
        label_39->setMinimumSize(QSize(120, 81));
        label_39->setMaximumSize(QSize(120, 81));

        horizontalLayout_35->addWidget(label_39);


        verticalLayout->addLayout(horizontalLayout_35);

        horizontalLayout_34 = new QHBoxLayout();
        horizontalLayout_34->setObjectName(QStringLiteral("horizontalLayout_34"));
        pushButton_39 = new QPushButton(scrollAreaWidgetContents);
        pushButton_39->setObjectName(QStringLiteral("pushButton_39"));
        sizePolicy.setHeightForWidth(pushButton_39->sizePolicy().hasHeightForWidth());
        pushButton_39->setSizePolicy(sizePolicy);
        pushButton_39->setMinimumSize(QSize(231, 81));
        pushButton_39->setMaximumSize(QSize(231, 81));
        pushButton_39->setIcon(icon2);
        pushButton_39->setIconSize(QSize(80, 80));
        pushButton_39->setFlat(true);

        horizontalLayout_34->addWidget(pushButton_39);

        label_38 = new QLabel(scrollAreaWidgetContents);
        label_38->setObjectName(QStringLiteral("label_38"));
        sizePolicy.setHeightForWidth(label_38->sizePolicy().hasHeightForWidth());
        label_38->setSizePolicy(sizePolicy);
        label_38->setMinimumSize(QSize(120, 81));
        label_38->setMaximumSize(QSize(120, 81));

        horizontalLayout_34->addWidget(label_38);


        verticalLayout->addLayout(horizontalLayout_34);

        horizontalLayout_33 = new QHBoxLayout();
        horizontalLayout_33->setObjectName(QStringLiteral("horizontalLayout_33"));
        pushButton_38 = new QPushButton(scrollAreaWidgetContents);
        pushButton_38->setObjectName(QStringLiteral("pushButton_38"));
        sizePolicy.setHeightForWidth(pushButton_38->sizePolicy().hasHeightForWidth());
        pushButton_38->setSizePolicy(sizePolicy);
        pushButton_38->setMinimumSize(QSize(231, 81));
        pushButton_38->setMaximumSize(QSize(231, 81));
        pushButton_38->setIcon(icon3);
        pushButton_38->setIconSize(QSize(80, 80));
        pushButton_38->setFlat(true);

        horizontalLayout_33->addWidget(pushButton_38);

        label_37 = new QLabel(scrollAreaWidgetContents);
        label_37->setObjectName(QStringLiteral("label_37"));
        sizePolicy.setHeightForWidth(label_37->sizePolicy().hasHeightForWidth());
        label_37->setSizePolicy(sizePolicy);
        label_37->setMinimumSize(QSize(120, 81));
        label_37->setMaximumSize(QSize(120, 81));

        horizontalLayout_33->addWidget(label_37);


        verticalLayout->addLayout(horizontalLayout_33);

        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setObjectName(QStringLiteral("horizontalLayout_32"));
        pushButton_37 = new QPushButton(scrollAreaWidgetContents);
        pushButton_37->setObjectName(QStringLiteral("pushButton_37"));
        sizePolicy.setHeightForWidth(pushButton_37->sizePolicy().hasHeightForWidth());
        pushButton_37->setSizePolicy(sizePolicy);
        pushButton_37->setMinimumSize(QSize(231, 81));
        pushButton_37->setMaximumSize(QSize(231, 81));
        pushButton_37->setIcon(icon4);
        pushButton_37->setIconSize(QSize(80, 80));
        pushButton_37->setFlat(true);

        horizontalLayout_32->addWidget(pushButton_37);

        label_36 = new QLabel(scrollAreaWidgetContents);
        label_36->setObjectName(QStringLiteral("label_36"));
        sizePolicy.setHeightForWidth(label_36->sizePolicy().hasHeightForWidth());
        label_36->setSizePolicy(sizePolicy);
        label_36->setMinimumSize(QSize(120, 81));
        label_36->setMaximumSize(QSize(120, 81));

        horizontalLayout_32->addWidget(label_36);


        verticalLayout->addLayout(horizontalLayout_32);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setObjectName(QStringLiteral("horizontalLayout_31"));
        pushButton_36 = new QPushButton(scrollAreaWidgetContents);
        pushButton_36->setObjectName(QStringLiteral("pushButton_36"));
        sizePolicy.setHeightForWidth(pushButton_36->sizePolicy().hasHeightForWidth());
        pushButton_36->setSizePolicy(sizePolicy);
        pushButton_36->setMinimumSize(QSize(231, 81));
        pushButton_36->setMaximumSize(QSize(231, 81));
        pushButton_36->setIcon(icon1);
        pushButton_36->setIconSize(QSize(80, 80));
        pushButton_36->setFlat(true);

        horizontalLayout_31->addWidget(pushButton_36);

        label_35 = new QLabel(scrollAreaWidgetContents);
        label_35->setObjectName(QStringLiteral("label_35"));
        sizePolicy.setHeightForWidth(label_35->sizePolicy().hasHeightForWidth());
        label_35->setSizePolicy(sizePolicy);
        label_35->setMinimumSize(QSize(120, 81));
        label_35->setMaximumSize(QSize(120, 81));

        horizontalLayout_31->addWidget(label_35);


        verticalLayout->addLayout(horizontalLayout_31);

        scrollArea->setWidget(scrollAreaWidgetContents);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget_2 = new QTabWidget(tab_2);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 401, 600));
        sizePolicy.setHeightForWidth(tabWidget_2->sizePolicy().hasHeightForWidth());
        tabWidget_2->setSizePolicy(sizePolicy);
        tabWidget_2->setMinimumSize(QSize(401, 600));
        tabWidget_2->setMaximumSize(QSize(401, 461));
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        toolBox = new QToolBox(tab_4);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setGeometry(QRect(0, 0, 401, 461));
        sizePolicy.setHeightForWidth(toolBox->sizePolicy().hasHeightForWidth());
        toolBox->setSizePolicy(sizePolicy);
        toolBox->setMinimumSize(QSize(401, 461));
        toolBox->setMaximumSize(QSize(401, 461));
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 401, 281));
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, -10, 241, 301));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_53 = new QPushButton(layoutWidget);
        pushButton_53->setObjectName(QStringLiteral("pushButton_53"));
        sizePolicy.setHeightForWidth(pushButton_53->sizePolicy().hasHeightForWidth());
        pushButton_53->setSizePolicy(sizePolicy);
        pushButton_53->setMinimumSize(QSize(231, 81));
        pushButton_53->setMaximumSize(QSize(231, 81));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/user_space/man.gif"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_53->setIcon(icon5);
        pushButton_53->setIconSize(QSize(80, 80));

        verticalLayout_2->addWidget(pushButton_53);

        pushButton_54 = new QPushButton(layoutWidget);
        pushButton_54->setObjectName(QStringLiteral("pushButton_54"));
        sizePolicy.setHeightForWidth(pushButton_54->sizePolicy().hasHeightForWidth());
        pushButton_54->setSizePolicy(sizePolicy);
        pushButton_54->setMinimumSize(QSize(231, 81));
        pushButton_54->setMaximumSize(QSize(231, 81));
        pushButton_54->setIcon(icon5);
        pushButton_54->setIconSize(QSize(80, 80));

        verticalLayout_2->addWidget(pushButton_54);

        pushButton_55 = new QPushButton(layoutWidget);
        pushButton_55->setObjectName(QStringLiteral("pushButton_55"));
        sizePolicy.setHeightForWidth(pushButton_55->sizePolicy().hasHeightForWidth());
        pushButton_55->setSizePolicy(sizePolicy);
        pushButton_55->setMinimumSize(QSize(231, 81));
        pushButton_55->setMaximumSize(QSize(231, 81));
        pushButton_55->setIcon(icon5);
        pushButton_55->setIconSize(QSize(80, 80));

        verticalLayout_2->addWidget(pushButton_55);

        toolBox->addItem(widget, QString::fromUtf8("\346\210\221\347\232\204\345\245\275\345\217\213"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 100, 30));
        pushButton_56 = new QPushButton(page_2);
        pushButton_56->setObjectName(QStringLiteral("pushButton_56"));
        pushButton_56->setGeometry(QRect(0, -10, 231, 81));
        sizePolicy.setHeightForWidth(pushButton_56->sizePolicy().hasHeightForWidth());
        pushButton_56->setSizePolicy(sizePolicy);
        pushButton_56->setMinimumSize(QSize(231, 81));
        pushButton_56->setMaximumSize(QSize(231, 81));
        pushButton_56->setIcon(icon5);
        pushButton_56->setIconSize(QSize(80, 80));
        pushButton_57 = new QPushButton(page_2);
        pushButton_57->setObjectName(QStringLiteral("pushButton_57"));
        pushButton_57->setGeometry(QRect(0, 70, 231, 81));
        sizePolicy.setHeightForWidth(pushButton_57->sizePolicy().hasHeightForWidth());
        pushButton_57->setSizePolicy(sizePolicy);
        pushButton_57->setMinimumSize(QSize(231, 81));
        pushButton_57->setMaximumSize(QSize(231, 81));
        pushButton_57->setIcon(icon5);
        pushButton_57->setIconSize(QSize(80, 80));
        toolBox->addItem(page_2, QString::fromUtf8("\345\256\266\344\272\272"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 100, 30));
        pushButton_58 = new QPushButton(page);
        pushButton_58->setObjectName(QStringLiteral("pushButton_58"));
        pushButton_58->setGeometry(QRect(0, -10, 231, 81));
        sizePolicy.setHeightForWidth(pushButton_58->sizePolicy().hasHeightForWidth());
        pushButton_58->setSizePolicy(sizePolicy);
        pushButton_58->setMinimumSize(QSize(231, 81));
        pushButton_58->setMaximumSize(QSize(231, 81));
        pushButton_58->setIcon(icon5);
        pushButton_58->setIconSize(QSize(80, 80));
        toolBox->addItem(page, QString::fromUtf8("\345\220\214\345\255\246"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 100, 30));
        toolBox->addItem(page_3, QString::fromUtf8("\345\220\214\344\272\213"));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setGeometry(QRect(0, 0, 100, 30));
        toolBox->addItem(page_4, QString::fromUtf8("\347\275\221\345\217\213"));
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        page_5->setGeometry(QRect(0, 0, 100, 30));
        toolBox->addItem(page_5, QString::fromUtf8("\351\231\214\347\224\237\344\272\272"));
        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        toolBox_2 = new QToolBox(tab_5);
        toolBox_2->setObjectName(QStringLiteral("toolBox_2"));
        toolBox_2->setGeometry(QRect(0, 0, 401, 461));
        sizePolicy.setHeightForWidth(toolBox_2->sizePolicy().hasHeightForWidth());
        toolBox_2->setSizePolicy(sizePolicy);
        toolBox_2->setMinimumSize(QSize(401, 461));
        toolBox_2->setMaximumSize(QSize(401, 461));
        widget1 = new QWidget();
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(0, 0, 100, 30));
        toolBox_2->addItem(widget1, QString::fromUtf8("\345\220\214\345\255\246\350\201\232\344\274\232\347\276\244"));
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        page_6->setGeometry(QRect(0, 0, 100, 30));
        toolBox_2->addItem(page_6, QString::fromUtf8("\345\267\245\344\275\234\347\276\244"));
        widget2 = new QWidget();
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(0, 0, 100, 30));
        toolBox_2->addItem(widget2, QString::fromUtf8("\345\215\227\347\277\224\345\267\245\344\275\234\347\276\244"));
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        page_8->setGeometry(QRect(0, 0, 401, 341));
        toolBox_2->addItem(page_8, QString::fromUtf8("\346\255\246\346\261\211 \345\244\251\345\234\260"));
        tabWidget_2->addTab(tab_5, QString());
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        pushButton_50 = new QPushButton(tab_3);
        pushButton_50->setObjectName(QStringLiteral("pushButton_50"));
        pushButton_50->setGeometry(QRect(0, 10, 401, 51));
        sizePolicy.setHeightForWidth(pushButton_50->sizePolicy().hasHeightForWidth());
        pushButton_50->setSizePolicy(sizePolicy);
        pushButton_50->setMinimumSize(QSize(401, 51));
        pushButton_50->setMaximumSize(QSize(401, 51));
        pushButton_51 = new QPushButton(tab_3);
        pushButton_51->setObjectName(QStringLiteral("pushButton_51"));
        pushButton_51->setGeometry(QRect(0, 60, 401, 51));
        sizePolicy.setHeightForWidth(pushButton_51->sizePolicy().hasHeightForWidth());
        pushButton_51->setSizePolicy(sizePolicy);
        pushButton_51->setMinimumSize(QSize(401, 51));
        pushButton_51->setMaximumSize(QSize(401, 51));
        pushButton_52 = new QPushButton(tab_3);
        pushButton_52->setObjectName(QStringLiteral("pushButton_52"));
        pushButton_52->setGeometry(QRect(0, 110, 401, 51));
        sizePolicy.setHeightForWidth(pushButton_52->sizePolicy().hasHeightForWidth());
        pushButton_52->setSizePolicy(sizePolicy);
        pushButton_52->setMinimumSize(QSize(401, 51));
        pushButton_52->setMaximumSize(QSize(401, 51));
        tabWidget->addTab(tab_3, QString());
        layoutWidget1 = new QWidget(userspace);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 10, 351, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(31, 31));
        pushButton->setMaximumSize(QSize(31, 31));
        pushButton->setStyleSheet(QStringLiteral(""));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/user_space/zone.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon6);
        pushButton->setIconSize(QSize(40, 40));
        pushButton->setFlat(true);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(31, 31));
        pushButton_2->setMaximumSize(QSize(31, 31));
        pushButton_2->setStyleSheet(QStringLiteral(""));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/user_space/dress.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon7);
        pushButton_2->setIconSize(QSize(40, 40));
        pushButton_2->setFlat(true);

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget1);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(31, 31));
        pushButton_3->setMaximumSize(QSize(31, 31));
        pushButton_3->setStyleSheet(QStringLiteral(""));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/user_space/money_bag_32px_1241094_easyicon.net.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon8);
        pushButton_3->setIconSize(QSize(40, 40));
        pushButton_3->setFlat(true);

        horizontalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget1);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(31, 31));
        pushButton_4->setMaximumSize(QSize(31, 31));
        pushButton_4->setStyleSheet(QStringLiteral(""));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/user_space/email_32px_1232375_easyicon.net.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon9);
        pushButton_4->setIconSize(QSize(40, 40));
        pushButton_4->setFlat(true);

        horizontalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(layoutWidget1);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setMinimumSize(QSize(31, 31));
        pushButton_5->setMaximumSize(QSize(31, 31));
        pushButton_5->setStyleSheet(QStringLiteral("border-image: url(:/user_space/minpic.png);"));
        pushButton_5->setFlat(true);

        horizontalLayout->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(layoutWidget1);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setMinimumSize(QSize(31, 31));
        pushButton_6->setMaximumSize(QSize(31, 31));
        pushButton_6->setStyleSheet(QStringLiteral("border-image: url(:/user_space/closepic.png);"));
        pushButton_6->setFlat(true);

        horizontalLayout->addWidget(pushButton_6);

        pushButton_8 = new QPushButton(userspace);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(10, 60, 100, 100));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        QIcon icon10;
        QString iconThemeName = QStringLiteral("0");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon10 = QIcon::fromTheme(iconThemeName);
        } else {
            icon10.addFile(QStringLiteral(":/user_space/Qq.ico"), QSize(), QIcon::Normal, QIcon::Off);
        }
        pushButton_8->setIcon(icon10);
        pushButton_8->setIconSize(QSize(100, 100));
        pushButton_8->setFlat(true);
        pushButton_9 = new QPushButton(userspace);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(290, 80, 91, 91));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/user_space/tianqi.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon11);
        pushButton_9->setIconSize(QSize(90, 90));
        pushButton_9->setFlat(true);
        pushButton_10 = new QPushButton(userspace);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(120, 80, 91, 21));
        sizePolicy.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy);
        pushButton_10->setMinimumSize(QSize(91, 21));
        pushButton_10->setMaximumSize(QSize(91, 21));
        pushButton_10->setStyleSheet(QString::fromUtf8("font: 11pt \"\346\245\267\344\275\223\";"));
        pushButton_10->setFlat(true);

        retranslateUi(userspace);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);
        toolBox->setCurrentIndex(0);
        toolBox_2->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(userspace);
    } // setupUi

    void retranslateUi(QWidget *userspace)
    {
        userspace->setWindowTitle(QApplication::translate("userspace", "Form", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
        pushButton_7->setText(QApplication::translate("userspace", "\344\272\232\345\260\274", Q_NULLPTR));
        label_6->setText(QApplication::translate("userspace", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt;\">2020-4-4</span></p></body></html>", Q_NULLPTR));
        pushButton_35->setText(QApplication::translate("userspace", "  \346\235\216\347\273\217\347\220\206", Q_NULLPTR));
        label_34->setText(QApplication::translate("userspace", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt;\">2020-4-4</span></p></body></html>", Q_NULLPTR));
        pushButton_49->setText(QApplication::translate("userspace", " \345\255\231\346\225\231\346\216\210", Q_NULLPTR));
        label_48->setText(QApplication::translate("userspace", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt;\">2020-4-4</span></p></body></html>", Q_NULLPTR));
        pushButton_48->setText(QApplication::translate("userspace", "\344\272\232\345\260\274", Q_NULLPTR));
        label_47->setText(QApplication::translate("userspace", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt;\">2020-4-4</span></p></body></html>", Q_NULLPTR));
        pushButton_47->setText(QApplication::translate("userspace", "\344\272\232\345\260\274", Q_NULLPTR));
        label_46->setText(QApplication::translate("userspace", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt;\">2020-4-4</span></p></body></html>", Q_NULLPTR));
        pushButton_46->setText(QApplication::translate("userspace", "\344\272\232\345\260\274", Q_NULLPTR));
        label_45->setText(QApplication::translate("userspace", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt;\">2020-4-4</span></p></body></html>", Q_NULLPTR));
        pushButton_45->setText(QApplication::translate("userspace", "\344\272\232\345\260\274", Q_NULLPTR));
        label_44->setText(QApplication::translate("userspace", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt;\">2020-4-4</span></p></body></html>", Q_NULLPTR));
        pushButton_44->setText(QApplication::translate("userspace", "\344\272\232\345\260\274", Q_NULLPTR));
        label_43->setText(QApplication::translate("userspace", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt;\">2020-4-4</span></p></body></html>", Q_NULLPTR));
        pushButton_43->setText(QApplication::translate("userspace", "\344\272\232\345\260\274", Q_NULLPTR));
        label_42->setText(QApplication::translate("userspace", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt;\">2020-4-4</span></p></body></html>", Q_NULLPTR));
        pushButton_42->setText(QApplication::translate("userspace", "\344\272\232\345\260\274", Q_NULLPTR));
        label_41->setText(QApplication::translate("userspace", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt;\">2020-4-4</span></p></body></html>", Q_NULLPTR));
        pushButton_41->setText(QApplication::translate("userspace", "\344\272\232\345\260\274", Q_NULLPTR));
        label_40->setText(QApplication::translate("userspace", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt;\">2020-4-4</span></p></body></html>", Q_NULLPTR));
        pushButton_40->setText(QApplication::translate("userspace", "\344\272\232\345\260\274", Q_NULLPTR));
        label_39->setText(QApplication::translate("userspace", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt;\">2020-4-4</span></p></body></html>", Q_NULLPTR));
        pushButton_39->setText(QApplication::translate("userspace", "\344\272\232\345\260\274", Q_NULLPTR));
        label_38->setText(QApplication::translate("userspace", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt;\">2020-4-4</span></p></body></html>", Q_NULLPTR));
        pushButton_38->setText(QApplication::translate("userspace", "\344\272\232\345\260\274", Q_NULLPTR));
        label_37->setText(QApplication::translate("userspace", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt;\">2020-4-4</span></p></body></html>", Q_NULLPTR));
        pushButton_37->setText(QApplication::translate("userspace", "\344\272\232\345\260\274", Q_NULLPTR));
        label_36->setText(QApplication::translate("userspace", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt;\">2020-4-4</span></p></body></html>", Q_NULLPTR));
        pushButton_36->setText(QApplication::translate("userspace", "\344\272\232\345\260\274", Q_NULLPTR));
        label_35->setText(QApplication::translate("userspace", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt;\">2020-4-4</span></p></body></html>", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("userspace", "\346\266\210\346\201\257", Q_NULLPTR));
        pushButton_53->setText(QApplication::translate("userspace", "\344\272\232\345\260\274", Q_NULLPTR));
        pushButton_54->setText(QApplication::translate("userspace", "\344\272\232\345\260\274", Q_NULLPTR));
        pushButton_55->setText(QApplication::translate("userspace", "\344\272\232\345\260\274", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(widget), QApplication::translate("userspace", "\346\210\221\347\232\204\345\245\275\345\217\213", Q_NULLPTR));
        pushButton_56->setText(QApplication::translate("userspace", "\344\272\232\345\260\274", Q_NULLPTR));
        pushButton_57->setText(QApplication::translate("userspace", "\344\272\232\345\260\274", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("userspace", "\345\256\266\344\272\272", Q_NULLPTR));
        pushButton_58->setText(QApplication::translate("userspace", "\344\272\232\345\260\274", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("userspace", "\345\220\214\345\255\246", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("userspace", "\345\220\214\344\272\213", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_4), QApplication::translate("userspace", "\347\275\221\345\217\213", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_5), QApplication::translate("userspace", "\351\231\214\347\224\237\344\272\272", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("userspace", "\345\245\275\345\217\213", Q_NULLPTR));
        toolBox_2->setItemText(toolBox_2->indexOf(widget1), QApplication::translate("userspace", "\345\220\214\345\255\246\350\201\232\344\274\232\347\276\244", Q_NULLPTR));
        toolBox_2->setItemText(toolBox_2->indexOf(page_6), QApplication::translate("userspace", "\345\267\245\344\275\234\347\276\244", Q_NULLPTR));
        toolBox_2->setItemText(toolBox_2->indexOf(widget2), QApplication::translate("userspace", "\345\215\227\347\277\224\345\267\245\344\275\234\347\276\244", Q_NULLPTR));
        toolBox_2->setItemText(toolBox_2->indexOf(page_8), QApplication::translate("userspace", "\346\255\246\346\261\211 \345\244\251\345\234\260", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("userspace", "\347\276\244\350\201\212", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("userspace", "\350\201\224\347\263\273\344\272\272", Q_NULLPTR));
        pushButton_50->setText(QApplication::translate("userspace", " \346\210\221\347\232\204\347\251\272\351\227\264", Q_NULLPTR));
        pushButton_51->setText(QApplication::translate("userspace", "  \344\272\213\345\256\236 \346\226\260\351\227\273", Q_NULLPTR));
        pushButton_52->setText(QApplication::translate("userspace", "   \346\230\216\346\230\237\345\250\261\344\271\220", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("userspace", "\347\251\272\351\227\264", Q_NULLPTR));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
        pushButton_10->setText(QApplication::translate("userspace", "\345\215\241\345\270\203\345\245\207\350\257\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class userspace: public Ui_userspace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERSPACE_H
