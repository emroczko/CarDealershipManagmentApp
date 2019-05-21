/********************************************************************************
** Form generated from reading UI file 'showmotorcyclewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWMOTORCYCLEWINDOW_H
#define UI_SHOWMOTORCYCLEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowMotorcycleWindow
{
public:
    QListWidget *listWidget;

    void setupUi(QDialog *ShowMotorcycleWindow)
    {
        if (ShowMotorcycleWindow->objectName().isEmpty())
            ShowMotorcycleWindow->setObjectName(QString::fromUtf8("ShowMotorcycleWindow"));
        ShowMotorcycleWindow->resize(600, 407);
        listWidget = new QListWidget(ShowMotorcycleWindow);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(40, 60, 511, 301));

        retranslateUi(ShowMotorcycleWindow);

        QMetaObject::connectSlotsByName(ShowMotorcycleWindow);
    } // setupUi

    void retranslateUi(QDialog *ShowMotorcycleWindow)
    {
        ShowMotorcycleWindow->setWindowTitle(QApplication::translate("ShowMotorcycleWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowMotorcycleWindow: public Ui_ShowMotorcycleWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWMOTORCYCLEWINDOW_H
