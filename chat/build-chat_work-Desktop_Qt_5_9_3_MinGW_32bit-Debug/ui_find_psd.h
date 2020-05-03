/********************************************************************************
** Form generated from reading UI file 'find_psd.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIND_PSD_H
#define UI_FIND_PSD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_find_psd
{
public:
    QLabel *label;
    QLabel *label_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_6;
    QComboBox *comboBox;
    QLineEdit *lineEdit_7;
    QLabel *label_3;
    QPushButton *pushButton;

    void setupUi(QWidget *find_psd)
    {
        if (find_psd->objectName().isEmpty())
            find_psd->setObjectName(QStringLiteral("find_psd"));
        find_psd->resize(861, 556);
        label = new QLabel(find_psd);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 180, 81, 38));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(81, 38));
        label->setMaximumSize(QSize(81, 38));
        label_2 = new QLabel(find_psd);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(180, 290, 81, 38));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(81, 38));
        label_2->setMaximumSize(QSize(81, 38));
        widget = new QWidget(find_psd);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(270, 130, 291, 301));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMinimumSize(QSize(278, 38));
        lineEdit->setMaximumSize(QSize(278, 38));

        verticalLayout->addWidget(lineEdit);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit_6 = new QLineEdit(widget);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        sizePolicy.setHeightForWidth(lineEdit_6->sizePolicy().hasHeightForWidth());
        lineEdit_6->setSizePolicy(sizePolicy);
        lineEdit_6->setMinimumSize(QSize(68, 38));
        lineEdit_6->setMaximumSize(QSize(68, 38));

        horizontalLayout->addWidget(lineEdit_6);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);
        comboBox->setMinimumSize(QSize(15, 38));
        comboBox->setMaximumSize(QSize(15, 38));

        horizontalLayout->addWidget(comboBox);


        horizontalLayout_2->addLayout(horizontalLayout);

        lineEdit_7 = new QLineEdit(widget);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        sizePolicy.setHeightForWidth(lineEdit_7->sizePolicy().hasHeightForWidth());
        lineEdit_7->setSizePolicy(sizePolicy);
        lineEdit_7->setMinimumSize(QSize(181, 38));
        lineEdit_7->setMaximumSize(QSize(181, 38));

        horizontalLayout_2->addWidget(lineEdit_7);


        verticalLayout_2->addLayout(horizontalLayout_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(171, 21));
        label_3->setMaximumSize(QSize(171, 21));

        verticalLayout_2->addWidget(label_3);


        verticalLayout_3->addLayout(verticalLayout_2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(285, 38));
        pushButton->setMaximumSize(QSize(285, 38));

        verticalLayout_3->addWidget(pushButton);


        retranslateUi(find_psd);

        QMetaObject::connectSlotsByName(find_psd);
    } // setupUi

    void retranslateUi(QWidget *find_psd)
    {
        find_psd->setWindowTitle(QApplication::translate("find_psd", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("find_psd", "<html><head/><body><p align=\"right\"><span style=\" font-size:11pt;\">\347\224\250\346\210\267\345\220\215</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("find_psd", "<html><head/><body><p align=\"right\"><span style=\" font-size:11pt;\">\346\211\213\346\234\272\345\217\267</span></p></body></html>", Q_NULLPTR));
        lineEdit_6->setText(QApplication::translate("find_psd", "86", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("find_psd", "86", Q_NULLPTR)
         << QApplication::translate("find_psd", "128", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("find_psd", "\345\217\257\351\200\232\350\277\207\350\257\245\346\211\213\346\234\272\345\217\267\346\211\276\345\233\236\345\257\206\347\240\201", Q_NULLPTR));
        pushButton->setText(QApplication::translate("find_psd", "\347\241\256  \350\256\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class find_psd: public Ui_find_psd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIND_PSD_H
