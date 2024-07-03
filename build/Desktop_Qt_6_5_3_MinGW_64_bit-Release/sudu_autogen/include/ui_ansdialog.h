/********************************************************************************
** Form generated from reading UI file 'ansdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANSDIALOG_H
#define UI_ANSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AnsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;

    void setupUi(QDialog *AnsDialog)
    {
        if (AnsDialog->objectName().isEmpty())
            AnsDialog->setObjectName("AnsDialog");
        AnsDialog->resize(584, 431);
        verticalLayout = new QVBoxLayout(AnsDialog);
        verticalLayout->setObjectName("verticalLayout");
        tableWidget = new QTableWidget(AnsDialog);
        tableWidget->setObjectName("tableWidget");

        verticalLayout->addWidget(tableWidget);


        retranslateUi(AnsDialog);

        QMetaObject::connectSlotsByName(AnsDialog);
    } // setupUi

    void retranslateUi(QDialog *AnsDialog)
    {
        AnsDialog->setWindowTitle(QCoreApplication::translate("AnsDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AnsDialog: public Ui_AnsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANSDIALOG_H
