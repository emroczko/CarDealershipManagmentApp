/********************************************************************************
** Form generated from reading UI file 'showpersonnelwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWPERSONNELWINDOW_H
#define UI_SHOWPERSONNELWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_ShowPersonnelWindow
{
public:
    QListWidget *listaPersonnel;
    QRadioButton *radioWszyscy;
    QRadioButton *radioSprzedawca;
    QRadioButton *radioMechanik;

    void setupUi(QDialog *ShowPersonnelWindow)
    {
        if (ShowPersonnelWindow->objectName().isEmpty())
            ShowPersonnelWindow->setObjectName(QString::fromUtf8("ShowPersonnelWindow"));
        ShowPersonnelWindow->resize(600, 407);
        QFont font;
        font.setFamily(QString::fromUtf8("Avenir Next"));
        ShowPersonnelWindow->setFont(font);
        listaPersonnel = new QListWidget(ShowPersonnelWindow);
        listaPersonnel->setObjectName(QString::fromUtf8("listaPersonnel"));
        listaPersonnel->setGeometry(QRect(40, 60, 511, 301));
        radioWszyscy = new QRadioButton(ShowPersonnelWindow);
        radioWszyscy->setObjectName(QString::fromUtf8("radioWszyscy"));
        radioWszyscy->setGeometry(QRect(40, 20, 100, 22));
        radioSprzedawca = new QRadioButton(ShowPersonnelWindow);
        radioSprzedawca->setObjectName(QString::fromUtf8("radioSprzedawca"));
        radioSprzedawca->setGeometry(QRect(160, 20, 100, 22));
        radioMechanik = new QRadioButton(ShowPersonnelWindow);
        radioMechanik->setObjectName(QString::fromUtf8("radioMechanik"));
        radioMechanik->setGeometry(QRect(280, 20, 100, 22));

        retranslateUi(ShowPersonnelWindow);

        QMetaObject::connectSlotsByName(ShowPersonnelWindow);
    } // setupUi

    void retranslateUi(QDialog *ShowPersonnelWindow)
    {
        ShowPersonnelWindow->setWindowTitle(QApplication::translate("ShowPersonnelWindow", "Dialog", nullptr));
        radioWszyscy->setText(QApplication::translate("ShowPersonnelWindow", "Wszyscy", nullptr));
        radioSprzedawca->setText(QApplication::translate("ShowPersonnelWindow", "Sprzedawcy", nullptr));
        radioMechanik->setText(QApplication::translate("ShowPersonnelWindow", "Mechanicy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowPersonnelWindow: public Ui_ShowPersonnelWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWPERSONNELWINDOW_H
