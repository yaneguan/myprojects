/********************************************************************************
** Form generated from reading UI file 'user_mian.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_MIAN_H
#define UI_USER_MIAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user_mian
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *user_mian)
    {
        if (user_mian->objectName().isEmpty())
            user_mian->setObjectName(QStringLiteral("user_mian"));
        user_mian->resize(451, 836);
        centralwidget = new QWidget(user_mian);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 431, 191));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(50, 210, 401, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 210, 41, 31));
        user_mian->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(user_mian);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        user_mian->setStatusBar(statusbar);

        retranslateUi(user_mian);

        QMetaObject::connectSlotsByName(user_mian);
    } // setupUi

    void retranslateUi(QMainWindow *user_mian)
    {
        user_mian->setWindowTitle(QApplication::translate("user_mian", "MainWindow", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class user_mian: public Ui_user_mian {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_MIAN_H
