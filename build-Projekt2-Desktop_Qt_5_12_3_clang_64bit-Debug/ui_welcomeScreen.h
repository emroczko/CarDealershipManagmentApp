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
        QPalette palette;
        QBrush brush(QColor(231, 231, 231, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(25, 25, 25, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush2(QColor(87, 149, 171, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush3(QColor(16, 128, 128, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush3);
        QBrush brush4(QColor(231, 231, 231, 128));
        brush4.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush4);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush4);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush5(QColor(31, 117, 204, 170));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush5);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        welcomeScreen->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Avenir Next"));
        welcomeScreen->setFont(font);
        welcomeScreen->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(25, 25, 25);"));
        gridLayout_2 = new QGridLayout(welcomeScreen);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(welcomeScreen);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Avenir Next"));
        font1.setPointSize(18);
        label->setFont(font1);
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
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush6(QColor(153, 153, 153, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush6);
        QBrush brush7(QColor(25, 25, 25, 128));
        brush7.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        QBrush brush8(QColor(25, 25, 25, 128));
        brush8.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        QBrush brush9(QColor(25, 25, 25, 128));
        brush9.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        wczytajStan->setPalette(palette1);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Avenir"));
        wczytajStan->setFont(font2);
        wczytajStan->setAutoFillBackground(false);
        wczytajStan->setStyleSheet(QString::fromUtf8("color: rgb(25, 25, 25);\n"
"background-color: rgb(153, 153, 153);"));

        gridLayout_2->addWidget(wczytajStan, 5, 0, 1, 1);

        zacznijOdNowa = new QPushButton(welcomeScreen);
        zacznijOdNowa->setObjectName(QString::fromUtf8("zacznijOdNowa"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush6);
        QBrush brush10(QColor(25, 25, 25, 128));
        brush10.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        QBrush brush11(QColor(25, 25, 25, 128));
        brush11.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush11);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        QBrush brush12(QColor(25, 25, 25, 128));
        brush12.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        zacznijOdNowa->setPalette(palette2);
        zacznijOdNowa->setFont(font2);
        zacznijOdNowa->setAutoFillBackground(false);
        zacznijOdNowa->setStyleSheet(QString::fromUtf8("background-color: rgb(153, 153, 153);\n"
"color: rgb(25, 25, 25);"));

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
