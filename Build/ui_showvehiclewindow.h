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

class Ui_showVehicleWindow
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tabela_pojazdow;

    void setupUi(QDialog *showVehicleWindow)
    {
        if (showVehicleWindow->objectName().isEmpty())
            showVehicleWindow->setObjectName(QString::fromUtf8("showVehicleWindow"));
        showVehicleWindow->resize(679, 458);
        verticalLayout = new QVBoxLayout(showVehicleWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabela_pojazdow = new QTableWidget(showVehicleWindow);
        tabela_pojazdow->setObjectName(QString::fromUtf8("tabela_pojazdow"));

        verticalLayout->addWidget(tabela_pojazdow);


        retranslateUi(showVehicleWindow);

        QMetaObject::connectSlotsByName(showVehicleWindow);
    } // setupUi

    void retranslateUi(QDialog *showVehicleWindow)
    {
        showVehicleWindow->setWindowTitle(QApplication::translate("showVehicleWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class showVehicleWindow: public Ui_showVehicleWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWVEHICLEWINDOW_H
