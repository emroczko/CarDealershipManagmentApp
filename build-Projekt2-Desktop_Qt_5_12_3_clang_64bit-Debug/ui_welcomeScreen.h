/********************************************************************************
** Form generated from reading UI file 'welcomeScreen.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMESCREEN_H
#define UI_WELCOMESCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_welcomeScreen
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *wczytajStan;
    QPushButton *zacznijOdNowa;

    void setupUi(QDialog *welcomeScreen)
    {
        if (welcomeScreen->objectName().isEmpty())
            welcomeScreen->setObjectName(QString::fromUtf8("welcomeScreen"));
        welcomeScreen->resize(1054, 784);
        gridLayout_2 = new QGridLayout(welcomeScreen);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(welcomeScreen);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Avenir Next"));
        font.setPointSize(18);
        label->setFont(font);
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(welcomeScreen);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/pics/117682899_37k1L8Im.jpg")));
        label_2->setScaledContents(true);
        label_2->setWordWrap(false);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        wczytajStan = new QPushButton(welcomeScreen);
        wczytajStan->setObjectName(QString::fromUtf8("wczytajStan"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Avenir"));
        wczytajStan->setFont(font1);

        gridLayout_2->addWidget(wczytajStan, 5, 0, 1, 1);

        zacznijOdNowa = new QPushButton(welcomeScreen);
        zacznijOdNowa->setObjectName(QString::fromUtf8("zacznijOdNowa"));
        zacznijOdNowa->setFont(font1);

        gridLayout_2->addWidget(zacznijOdNowa, 2, 0, 1, 1);


        retranslateUi(welcomeScreen);

        QMetaObject::connectSlotsByName(welcomeScreen);
    } // setupUi

    void retranslateUi(QDialog *welcomeScreen)
    {
        welcomeScreen->setWindowTitle(QApplication::translate("welcomeScreen", "BMW Dealer Manager", nullptr));
        label->setText(QApplication::translate("welcomeScreen", "Witamy w programie BMW Dealer Manager!", nullptr));
        label_2->setText(QString());
        wczytajStan->setText(QApplication::translate("welcomeScreen", "Wczytaj stan z pliku...", nullptr));
        zacznijOdNowa->setText(QApplication::translate("welcomeScreen", "Zacznij od nowa...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class welcomeScreen: public Ui_welcomeScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMESCREEN_H
