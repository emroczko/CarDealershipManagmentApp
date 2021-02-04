/********************************************************************************
** Form generated from reading UI file 'showvehiclewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWVEHICLEWINDOW_H
#define UI_SHOWVEHICLEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_showvehiclewindow
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tabela_pojazdow;

    void setupUi(QDialog *showvehiclewindow)
    {
        if (showvehiclewindow->objectName().isEmpty())
            showvehiclewindow->setObjectName(QString::fromUtf8("showvehiclewindow"));
        showvehiclewindow->resize(679, 458);
        verticalLayout = new QVBoxLayout(showvehiclewindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabela_pojazdow = new QTableWidget(showvehiclewindow);
        tabela_pojazdow->setObjectName(QString::fromUtf8("tabela_pojazdow"));

        verticalLayout->addWidget(tabela_pojazdow);


        retranslateUi(showvehiclewindow);

        QMetaObject::connectSlotsByName(showvehiclewindow);
    } // setupUi

    void retranslateUi(QDialog *showvehiclewindow)
    {
        showvehiclewindow->setWindowTitle(QApplication::translate("showvehiclewindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class showvehiclewindow: public Ui_showvehiclewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWVEHICLEWINDOW_H
