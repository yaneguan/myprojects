/********************************************************************************
** Form generated from reading UI file 'regist.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGIST_H
#define UI_REGIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_regist
{
public:
    QPushButton *pushButton;
    QCheckBox *checkBox;
    QTextBrowser *textBrowser;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_5;
    QWidget *widget;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_6;
    QComboBox *comboBox;
    QLabel *label_3;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_8;
    QPushButton *pushButton_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QWidget *regist)
    {
        if (regist->objectName().isEmpty())
            regist->setObjectName(QStringLiteral("regist"));
        regist->resize(715, 551);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(regist->sizePolicy().hasHeightForWidth());
        regist->setSizePolicy(sizePolicy);
        regist->setMinimumSize(QSize(715, 551));
        regist->setMaximumSize(QSize(715, 551));
        regist->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(regist);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(220, 350, 270, 38));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(270, 38));
        pushButton->setMaximumSize(QSize(270, 38));
        checkBox = new QCheckBox(regist);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(220, 390, 270, 38));
        sizePolicy.setHeightForWidth(checkBox->sizePolicy().hasHeightForWidth());
        checkBox->setSizePolicy(sizePolicy);
        checkBox->setMinimumSize(QSize(270, 38));
        checkBox->setMaximumSize(QSize(270, 38));
        textBrowser = new QTextBrowser(regist);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(5, 10, 711, 121));
        textBrowser->setStyleSheet(QLatin1String("border-image: url(:/image/1002194.jpg);\n"
"color: rgb(0, 0, 255);"));
        layoutWidget = new QWidget(regist);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(220, 140, 272, 211));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        lineEdit->setMinimumSize(QSize(270, 38));
        lineEdit->setMaximumSize(QSize(191, 38));

        verticalLayout->addWidget(lineEdit);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        sizePolicy1.setHeightForWidth(lineEdit_5->sizePolicy().hasHeightForWidth());
        lineEdit_5->setSizePolicy(sizePolicy1);
        lineEdit_5->setMinimumSize(QSize(270, 38));
        lineEdit_5->setMaximumSize(QSize(191, 31));

        verticalLayout->addWidget(lineEdit_5);

        widget = new QWidget(layoutWidget);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy2);
        lineEdit_7 = new QLineEdit(widget);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(90, 30, 181, 38));
        sizePolicy.setHeightForWidth(lineEdit_7->sizePolicy().hasHeightForWidth());
        lineEdit_7->setSizePolicy(sizePolicy);
        lineEdit_7->setMinimumSize(QSize(181, 38));
        lineEdit_7->setMaximumSize(QSize(181, 38));
        lineEdit_6 = new QLineEdit(widget);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(0, 30, 50, 38));
        sizePolicy.setHeightForWidth(lineEdit_6->sizePolicy().hasHeightForWidth());
        lineEdit_6->setSizePolicy(sizePolicy);
        lineEdit_6->setMinimumSize(QSize(50, 38));
        lineEdit_6->setMaximumSize(QSize(50, 38));
        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(40, 30, 15, 38));
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);
        comboBox->setMinimumSize(QSize(15, 38));
        comboBox->setMaximumSize(QSize(15, 38));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 80, 171, 21));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(171, 21));
        label_3->setMaximumSize(QSize(171, 21));

        verticalLayout->addWidget(widget);

        layoutWidget1 = new QWidget(regist);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(212, 441, 289, 40));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_8 = new QLineEdit(layoutWidget1);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        sizePolicy.setHeightForWidth(lineEdit_8->sizePolicy().hasHeightForWidth());
        lineEdit_8->setSizePolicy(sizePolicy);
        lineEdit_8->setMinimumSize(QSize(110, 38));
        lineEdit_8->setMaximumSize(QSize(110, 38));
        lineEdit_8->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(lineEdit_8);

        pushButton_3 = new QPushButton(layoutWidget1);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(170, 38));
        pushButton_3->setMaximumSize(QSize(170, 38));

        horizontalLayout->addWidget(pushButton_3);

        label = new QLabel(regist);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 140, 81, 38));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(81, 38));
        label->setMaximumSize(QSize(81, 38));
        label->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));
        label_2 = new QLabel(regist);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 190, 81, 38));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(81, 38));
        label_2->setMaximumSize(QSize(81, 38));
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));
        label_4 = new QLabel(regist);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(130, 260, 81, 38));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(81, 38));
        label_4->setMaximumSize(QSize(81, 38));
        label_4->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));
        label_5 = new QLabel(regist);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(130, 440, 81, 38));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setMinimumSize(QSize(81, 38));
        label_5->setMaximumSize(QSize(81, 38));
        label_5->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));

        retranslateUi(regist);

        QMetaObject::connectSlotsByName(regist);
    } // setupUi

    void retranslateUi(QWidget *regist)
    {
        regist->setWindowTitle(QApplication::translate("regist", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("regist", "\347\253\213\345\215\263\346\263\250\345\206\214", Q_NULLPTR));
        checkBox->setText(QApplication::translate("regist", "\346\210\221\345\267\262\351\230\205\350\257\273\345\271\266\345\220\214\346\204\217\347\233\270\345\205\263\346\234\215\345\212\241\345\222\214\351\232\220\347\247\201\346\224\277\347\255\226", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("regist", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:26pt; font-weight:600;\">\346\254\242\350\277\216\346\263\250\345\206\214QQ</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">		</span><span style=\" font-size:16pt; font-style:italic; text-decoration: underline;\">\346\257\217\344\270"
                        "\200\345\244\251\344\271\220\345\234\250\346\262\237\351\200\232</span></p></body></html>", Q_NULLPTR));
        lineEdit_6->setText(QApplication::translate("regist", "86", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("regist", "86", Q_NULLPTR)
         << QApplication::translate("regist", "128", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("regist", "\345\217\257\351\200\232\350\277\207\350\257\245\346\211\213\346\234\272\345\217\267\346\211\276\345\233\236\345\257\206\347\240\201", Q_NULLPTR));
        lineEdit_8->setText(QString());
        pushButton_3->setText(QApplication::translate("regist", "\345\217\221\351\200\201\347\237\255\344\277\241\351\252\214\350\257\201\347\240\201", Q_NULLPTR));
        label->setText(QApplication::translate("regist", "<html><head/><body><p align=\"right\">\347\224\250\346\210\267\345\220\215</p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("regist", "<html><head/><body><p align=\"right\">\345\257\206 \347\240\201</p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("regist", "<html><head/><body><p align=\"right\">\346\211\213\346\234\272\345\217\267</p></body></html>", Q_NULLPTR));
        label_5->setText(QApplication::translate("regist", "<html><head/><body><p align=\"center\">\351\252\214\350\257\201\347\240\201</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class regist: public Ui_regist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGIST_H
