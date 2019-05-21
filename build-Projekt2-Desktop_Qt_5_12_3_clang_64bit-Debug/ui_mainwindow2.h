/********************************************************************************
** Form generated from reading UI file 'mainwindow2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW2_H
#define UI_MAINWINDOW2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow2
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QWidget *verticalWidget;
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab_5;
    QPushButton *Zatrudnieni_pracownicy;
    QPushButton *pushButton_3;
    QLabel *label_3;
    QPushButton *Wyjcie;
    QWidget *tab_6;
    QPushButton *Sprzedaj_Auto;
    QPushButton *Posiadane_samochodu;
    QPushButton *Dodaj_samochod;
    QLabel *label;
    QWidget *tab_7;
    QPushButton *Posiadane_motocykle;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow2)
    {
        if (MainWindow2->objectName().isEmpty())
            MainWindow2->setObjectName(QString::fromUtf8("MainWindow2"));
        MainWindow2->resize(1433, 925);
        MainWindow2->setMaximumSize(QSize(1920, 1080));
        MainWindow2->setAutoFillBackground(true);
        centralwidget = new QWidget(MainWindow2);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));

        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        verticalWidget = new QWidget(centralwidget);
        verticalWidget->setObjectName(QString::fromUtf8("verticalWidget"));
        gridLayout_2 = new QGridLayout(verticalWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tabWidget = new QTabWidget(verticalWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMovable(false);
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        Zatrudnieni_pracownicy = new QPushButton(tab_5);
        Zatrudnieni_pracownicy->setObjectName(QString::fromUtf8("Zatrudnieni_pracownicy"));
        Zatrudnieni_pracownicy->setGeometry(QRect(0, 680, 1391, 41));
        pushButton_3 = new QPushButton(tab_5);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(0, 720, 1391, 41));
        label_3 = new QLabel(tab_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 10, 1361, 551));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/pics/Downloads/bps_store_front.jpg")));
        label_3->setScaledContents(true);
        Wyjcie = new QPushButton(tab_5);
        Wyjcie->setObjectName(QString::fromUtf8("Wyjcie"));
        Wyjcie->setGeometry(QRect(0, 760, 1391, 41));
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        Sprzedaj_Auto = new QPushButton(tab_6);
        Sprzedaj_Auto->setObjectName(QString::fromUtf8("Sprzedaj_Auto"));
        Sprzedaj_Auto->setGeometry(QRect(0, 760, 1391, 41));
        Posiadane_samochodu = new QPushButton(tab_6);
        Posiadane_samochodu->setObjectName(QString::fromUtf8("Posiadane_samochodu"));
        Posiadane_samochodu->setGeometry(QRect(0, 680, 1391, 41));
        Dodaj_samochod = new QPushButton(tab_6);
        Dodaj_samochod->setObjectName(QString::fromUtf8("Dodaj_samochod"));
        Dodaj_samochod->setGeometry(QRect(0, 720, 1391, 41));
        label = new QLabel(tab_6);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 10, 1201, 661));
        label->setPixmap(QPixmap(QString::fromUtf8(":/pics/Downloads/2018-bmw-m2-competition-99gallery-1526572314.jpg")));
        label->setScaledContents(true);
        tabWidget->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        Posiadane_motocykle = new QPushButton(tab_7);
        Posiadane_motocykle->setObjectName(QString::fromUtf8("Posiadane_motocykle"));
        Posiadane_motocykle->setGeometry(QRect(0, 680, 1391, 41));
        pushButton = new QPushButton(tab_7);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 720, 1391, 41));
        pushButton_2 = new QPushButton(tab_7);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 760, 1391, 41));
        label_2 = new QLabel(tab_7);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 10, 1141, 661));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/pics/Downloads/BMW-motorcycles-on-road-racing.jpg")));
        label_2->setScaledContents(true);
        tabWidget->addTab(tab_7, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);


        gridLayout->addWidget(verticalWidget, 1, 0, 1, 1);

        MainWindow2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow2);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1433, 22));
        MainWindow2->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow2);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow2->setStatusBar(statusbar);

        retranslateUi(MainWindow2);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow2);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow2)
    {
        MainWindow2->setWindowTitle(QApplication::translate("MainWindow2", "BMW Dealer Manager", nullptr));
        Zatrudnieni_pracownicy->setText(QApplication::translate("MainWindow2", "Zatrudnieni pracownicy", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow2", "Wy\305\233wietl informacje o salonie", nullptr));
        label_3->setText(QString());
        Wyjcie->setText(QApplication::translate("MainWindow2", "Wyj\305\233cie", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow2", "Salon", nullptr));
        Sprzedaj_Auto->setText(QApplication::translate("MainWindow2", "Sprzedaj samoch\303\263d", nullptr));
        Posiadane_samochodu->setText(QApplication::translate("MainWindow2", "Posiadane samochody", nullptr));
        Dodaj_samochod->setText(QApplication::translate("MainWindow2", "Kup Samoch\303\263d", nullptr));
        label->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindow2", "Samochody", nullptr));
        Posiadane_motocykle->setText(QApplication::translate("MainWindow2", "Posiadane motocykle", nullptr));
        pushButton->setText(QApplication::translate("MainWindow2", "Dodaj motocykl", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow2", "Usu\305\204 motocykl", nullptr));
        label_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("MainWindow2", "Motocykle", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow2: public Ui_MainWindow2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW2_H
