/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_2;
    QLCDNumber *LCDHour;
    QLCDNumber *LCDMin;
    QLCDNumber *LCDSec;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *setLevel;
    QSpinBox *level;
    QPushButton *btnStart;
    QPushButton *submitBtn;
    QPushButton *displayAns;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(871, 506);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName("tableWidget");

        gridLayout->addWidget(tableWidget, 0, 0, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        textBrowser = new QTextBrowser(groupBox);
        textBrowser->setObjectName("textBrowser");

        verticalLayout->addWidget(textBrowser);

        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName("groupBox_3");
        horizontalLayout_2 = new QHBoxLayout(groupBox_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        LCDHour = new QLCDNumber(groupBox_3);
        LCDHour->setObjectName("LCDHour");
        QFont font;
        font.setUnderline(false);
        LCDHour->setFont(font);

        horizontalLayout_2->addWidget(LCDHour);

        LCDMin = new QLCDNumber(groupBox_3);
        LCDMin->setObjectName("LCDMin");

        horizontalLayout_2->addWidget(LCDMin);

        LCDSec = new QLCDNumber(groupBox_3);
        LCDSec->setObjectName("LCDSec");

        horizontalLayout_2->addWidget(LCDSec);


        verticalLayout->addWidget(groupBox_3);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName("groupBox_2");
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName("horizontalLayout");
        setLevel = new QPushButton(groupBox_2);
        setLevel->setObjectName("setLevel");

        horizontalLayout->addWidget(setLevel);

        level = new QSpinBox(groupBox_2);
        level->setObjectName("level");
        level->setMinimum(1);
        level->setMaximum(10);

        horizontalLayout->addWidget(level);


        verticalLayout->addWidget(groupBox_2);

        btnStart = new QPushButton(groupBox);
        btnStart->setObjectName("btnStart");

        verticalLayout->addWidget(btnStart);

        submitBtn = new QPushButton(groupBox);
        submitBtn->setObjectName("submitBtn");

        verticalLayout->addWidget(submitBtn);

        displayAns = new QPushButton(groupBox);
        displayAns->setObjectName("displayAns");

        verticalLayout->addWidget(displayAns);


        gridLayout->addWidget(groupBox, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">\350\247\204\345\210\231\357\274\232</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">1: \346\225\260\345\255\227\347\232\204\350\214\203\345\233\264\346\230\2571~9</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0p"
                        "x; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">2: \345\220\214\344\270\200\350\241\214\346\210\226\345\220\214\344\270\200\345\210\227\344\270\215\345\276\227\346\234\211\347\233\270\345\220\214\346\225\260\345\255\227</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">3: \346\243\213\347\233\230\345\235\207\345\214\200\345\210\222\345\210\206\344\270\2729\344\270\2523*3\347\232\204\345\260\217\346\226\271\346\240\274\357\274\214\346\257\217\344\270\252\346\226\271\346\240\274\345\206\205\344\270\215\345\276\227\346\234\211\347\233\270\345\220\214\346\225\260\345\255\227</span></p></body></html>", nullptr));
        groupBox_3->setTitle(QString());
        groupBox_2->setTitle(QString());
        setLevel->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\351\232\276\345\272\246", nullptr));
        btnStart->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\350\256\241\346\227\266", nullptr));
        submitBtn->setText(QCoreApplication::translate("MainWindow", "\346\217\220\344\272\244", nullptr));
        displayAns->setText(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213\347\255\224\346\241\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
