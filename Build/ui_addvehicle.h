/********************************************************************************
** Form generated from reading UI file 'addvehicle.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDVEHICLE_H
#define UI_ADDVEHICLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AddVehicle
{
public:
    QGroupBox *formGroupBox;
    QGridLayout *gridLayout;
    QLabel *Model;
    QLabel *Cena;
    QComboBox *Paliw_wybierz;
    QComboBox *Stan_wybierz;
    QLabel *Paliwo;
    QComboBox *Model_wybierz;
    QLabel *Stan;
    QTextEdit *ID_pisz;
    QLabel *ID;
    QTextEdit *Cena_pisz;
    QComboBox *Skrzynia_biegow_wybierz;
    QLabel *Skrzyni_biegow;
    QGroupBox *horizontalGroupBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *Akceptuj;
    QPushButton *Anuluj;

    void setupUi(QDialog *AddVehicle)
    {
        if (AddVehicle->objectName().isEmpty())
            AddVehicle->setObjectName(QString::fromUtf8("AddVehicle"));
        AddVehicle->resize(583, 423);
        QFont font;
        font.setFamily(QString::fromUtf8("Avenir Next"));
        AddVehicle->setFont(font);
        formGroupBox = new QGroupBox(AddVehicle);
        formGroupBox->setObjectName(QString::fromUtf8("formGroupBox"));
        formGroupBox->setGeometry(QRect(9, 10, 561, 261));
        gridLayout = new QGridLayout(formGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Model = new QLabel(formGroupBox);
        Model->setObjectName(QString::fromUtf8("Model"));

        gridLayout->addWidget(Model, 0, 0, 1, 1);

        Cena = new QLabel(formGroupBox);
        Cena->setObjectName(QString::fromUtf8("Cena"));

        gridLayout->addWidget(Cena, 2, 0, 1, 1);

        Paliw_wybierz = new QComboBox(formGroupBox);
        Paliw_wybierz->setObjectName(QString::fromUtf8("Paliw_wybierz"));

        gridLayout->addWidget(Paliw_wybierz, 5, 1, 1, 1);

        Stan_wybierz = new QComboBox(formGroupBox);
        Stan_wybierz->setObjectName(QString::fromUtf8("Stan_wybierz"));

        gridLayout->addWidget(Stan_wybierz, 4, 1, 1, 1);

        Paliwo = new QLabel(formGroupBox);
        Paliwo->setObjectName(QString::fromUtf8("Paliwo"));

        gridLayout->addWidget(Paliwo, 5, 0, 1, 1);

        Model_wybierz = new QComboBox(formGroupBox);
        Model_wybierz->setObjectName(QString::fromUtf8("Model_wybierz"));

        gridLayout->addWidget(Model_wybierz, 0, 1, 1, 1);

        Stan = new QLabel(formGroupBox);
        Stan->setObjectName(QString::fromUtf8("Stan"));

        gridLayout->addWidget(Stan, 4, 0, 1, 1);

        ID_pisz = new QTextEdit(formGroupBox);
        ID_pisz->setObjectName(QString::fromUtf8("ID_pisz"));
        ID_pisz->setMaximumSize(QSize(500, 30));

        gridLayout->addWidget(ID_pisz, 3, 1, 1, 1);

        ID = new QLabel(formGroupBox);
        ID->setObjectName(QString::fromUtf8("ID"));

        gridLayout->addWidget(ID, 3, 0, 1, 1);

        Cena_pisz = new QTextEdit(formGroupBox);
        Cena_pisz->setObjectName(QString::fromUtf8("Cena_pisz"));
        Cena_pisz->setMaximumSize(QSize(16777215, 30));

        gridLayout->addWidget(Cena_pisz, 2, 1, 1, 1);

        Skrzynia_biegow_wybierz = new QComboBox(formGroupBox);
        Skrzynia_biegow_wybierz->setObjectName(QString::fromUtf8("Skrzynia_biegow_wybierz"));

        gridLayout->addWidget(Skrzynia_biegow_wybierz, 6, 1, 1, 1);

        Skrzyni_biegow = new QLabel(formGroupBox);
        Skrzyni_biegow->setObjectName(QString::fromUtf8("Skrzyni_biegow"));

        gridLayout->addWidget(Skrzyni_biegow, 6, 0, 1, 1);

        horizontalGroupBox = new QGroupBox(AddVehicle);
        horizontalGroupBox->setObjectName(QString::fromUtf8("horizontalGroupBox"));
        horizontalGroupBox->setGeometry(QRect(30, 330, 501, 71));
        horizontalLayout = new QHBoxLayout(horizontalGroupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Akceptuj = new QPushButton(horizontalGroupBox);
        Akceptuj->setObjectName(QString::fromUtf8("Akceptuj"));

        horizontalLayout->addWidget(Akceptuj);

        Anuluj = new QPushButton(horizontalGroupBox);
        Anuluj->setObjectName(QString::fromUtf8("Anuluj"));

        horizontalLayout->addWidget(Anuluj);


        retranslateUi(AddVehicle);

        QMetaObject::connectSlotsByName(AddVehicle);
    } // setupUi

    void retranslateUi(QDialog *AddVehicle)
    {
        AddVehicle->setWindowTitle(QApplication::translate("AddVehicle", "Kup samoch\303\263d", nullptr));
        Model->setText(QApplication::translate("AddVehicle", "Model:", nullptr));
        Cena->setText(QApplication::translate("AddVehicle", "Cena:", nullptr));
        Paliwo->setText(QApplication::translate("AddVehicle", "Silnik:", nullptr));
        Stan->setText(QApplication::translate("AddVehicle", "Stan:", nullptr));
        ID->setText(QApplication::translate("AddVehicle", "ID:", nullptr));
        Skrzyni_biegow->setText(QApplication::translate("AddVehicle", "Skrzynia bieg\303\263w:", nullptr));
        Akceptuj->setText(QApplication::translate("AddVehicle", "Akceptuj", nullptr));
        Anuluj->setText(QApplication::translate("AddVehicle", "Anuluj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddVehicle: public Ui_AddVehicle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDVEHICLE_H
