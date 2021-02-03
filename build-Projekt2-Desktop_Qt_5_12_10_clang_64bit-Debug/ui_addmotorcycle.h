/********************************************************************************
** Form generated from reading UI file 'addmotorcycle.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMOTORCYCLE_H
#define UI_ADDMOTORCYCLE_H

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

class Ui_AddMotorcycle
{
public:
    QGroupBox *formGroupBox;
    QGridLayout *gridLayout;
    QComboBox *Stan_wybierz;
    QLabel *Model;
    QTextEdit *ID_pisz;
    QLabel *ID;
    QLabel *Stan;
    QComboBox *Model_wybierz;
    QTextEdit *Cena_pisz;
    QLabel *Cena;
    QComboBox *Paliw_wybierz;
    QLabel *Paliwo;
    QComboBox *Typ_silnika_wybierz;
    QLabel *Typ_silnika;
    QGroupBox *horizontalGroupBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *Akceptuj;
    QPushButton *Anuluj;

    void setupUi(QDialog *AddMotorcycle)
    {
        if (AddMotorcycle->objectName().isEmpty())
            AddMotorcycle->setObjectName(QString::fromUtf8("AddMotorcycle"));
        AddMotorcycle->resize(583, 423);
        formGroupBox = new QGroupBox(AddMotorcycle);
        formGroupBox->setObjectName(QString::fromUtf8("formGroupBox"));
        formGroupBox->setGeometry(QRect(9, 10, 561, 261));
        gridLayout = new QGridLayout(formGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Stan_wybierz = new QComboBox(formGroupBox);
        Stan_wybierz->setObjectName(QString::fromUtf8("Stan_wybierz"));
        QFont font;
        font.setFamily(QString::fromUtf8("Avenir Next"));
        Stan_wybierz->setFont(font);

        gridLayout->addWidget(Stan_wybierz, 4, 1, 1, 1);

        Model = new QLabel(formGroupBox);
        Model->setObjectName(QString::fromUtf8("Model"));
        Model->setFont(font);

        gridLayout->addWidget(Model, 0, 0, 1, 1);

        ID_pisz = new QTextEdit(formGroupBox);
        ID_pisz->setObjectName(QString::fromUtf8("ID_pisz"));
        ID_pisz->setMaximumSize(QSize(500, 30));
        ID_pisz->setFont(font);

        gridLayout->addWidget(ID_pisz, 3, 1, 1, 1);

        ID = new QLabel(formGroupBox);
        ID->setObjectName(QString::fromUtf8("ID"));
        ID->setFont(font);

        gridLayout->addWidget(ID, 3, 0, 1, 1);

        Stan = new QLabel(formGroupBox);
        Stan->setObjectName(QString::fromUtf8("Stan"));
        Stan->setFont(font);

        gridLayout->addWidget(Stan, 4, 0, 1, 1);

        Model_wybierz = new QComboBox(formGroupBox);
        Model_wybierz->setObjectName(QString::fromUtf8("Model_wybierz"));
        Model_wybierz->setFont(font);

        gridLayout->addWidget(Model_wybierz, 0, 1, 1, 1);

        Cena_pisz = new QTextEdit(formGroupBox);
        Cena_pisz->setObjectName(QString::fromUtf8("Cena_pisz"));
        Cena_pisz->setMinimumSize(QSize(100, 0));
        Cena_pisz->setMaximumSize(QSize(500, 30));
        Cena_pisz->setFont(font);

        gridLayout->addWidget(Cena_pisz, 2, 1, 1, 1);

        Cena = new QLabel(formGroupBox);
        Cena->setObjectName(QString::fromUtf8("Cena"));
        Cena->setFont(font);

        gridLayout->addWidget(Cena, 2, 0, 1, 1);

        Paliw_wybierz = new QComboBox(formGroupBox);
        Paliw_wybierz->setObjectName(QString::fromUtf8("Paliw_wybierz"));
        Paliw_wybierz->setFont(font);

        gridLayout->addWidget(Paliw_wybierz, 5, 1, 1, 1);

        Paliwo = new QLabel(formGroupBox);
        Paliwo->setObjectName(QString::fromUtf8("Paliwo"));
        Paliwo->setFont(font);

        gridLayout->addWidget(Paliwo, 5, 0, 1, 1);

        Typ_silnika_wybierz = new QComboBox(formGroupBox);
        Typ_silnika_wybierz->setObjectName(QString::fromUtf8("Typ_silnika_wybierz"));
        Typ_silnika_wybierz->setMaximumSize(QSize(500, 16777215));
        Typ_silnika_wybierz->setFont(font);

        gridLayout->addWidget(Typ_silnika_wybierz, 6, 1, 1, 1);

        Typ_silnika = new QLabel(formGroupBox);
        Typ_silnika->setObjectName(QString::fromUtf8("Typ_silnika"));
        Typ_silnika->setFont(font);

        gridLayout->addWidget(Typ_silnika, 6, 0, 1, 1);

        horizontalGroupBox = new QGroupBox(AddMotorcycle);
        horizontalGroupBox->setObjectName(QString::fromUtf8("horizontalGroupBox"));
        horizontalGroupBox->setGeometry(QRect(30, 330, 501, 71));
        horizontalLayout = new QHBoxLayout(horizontalGroupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Akceptuj = new QPushButton(horizontalGroupBox);
        Akceptuj->setObjectName(QString::fromUtf8("Akceptuj"));
        Akceptuj->setFont(font);

        horizontalLayout->addWidget(Akceptuj);

        Anuluj = new QPushButton(horizontalGroupBox);
        Anuluj->setObjectName(QString::fromUtf8("Anuluj"));
        Anuluj->setFont(font);

        horizontalLayout->addWidget(Anuluj);


        retranslateUi(AddMotorcycle);

        QMetaObject::connectSlotsByName(AddMotorcycle);
    } // setupUi

    void retranslateUi(QDialog *AddMotorcycle)
    {
        AddMotorcycle->setWindowTitle(QApplication::translate("AddMotorcycle", "Dialog", nullptr));
        Model->setText(QApplication::translate("AddMotorcycle", "Model:", nullptr));
        ID->setText(QApplication::translate("AddMotorcycle", "ID:", nullptr));
        Stan->setText(QApplication::translate("AddMotorcycle", "Stan:", nullptr));
        Cena->setText(QApplication::translate("AddMotorcycle", "Cena:", nullptr));
        Paliwo->setText(QApplication::translate("AddMotorcycle", "Silnik:", nullptr));
        Typ_silnika->setText(QApplication::translate("AddMotorcycle", "Typ silnika", nullptr));
        Akceptuj->setText(QApplication::translate("AddMotorcycle", "Akceptuj", nullptr));
        Anuluj->setText(QApplication::translate("AddMotorcycle", "Anuluj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddMotorcycle: public Ui_AddMotorcycle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMOTORCYCLE_H
