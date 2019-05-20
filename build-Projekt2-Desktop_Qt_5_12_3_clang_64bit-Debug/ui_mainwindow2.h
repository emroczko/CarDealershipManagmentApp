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
    QTabWidget *tabWidget;
    QWidget *tab_5;
    QPushButton *Zatrudnieni_pracownicy;
    QPushButton *pushButton_3;
    QWidget *tab_6;
    QPushButton *pushButton_4;
    QPushButton *Posiadane_samochodu;
    QPushButton *Dodaj_samochod;
    QWidget *tab_7;
    QPushButton *Posiadane_motocykle;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *verticalWidget;
    QGridLayout *gridLayout_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow2)
    {
        if (MainWindow2->objectName().isEmpty())
            MainWindow2->setObjectName(QString::fromUtf8("MainWindow2"));
        MainWindow2->resize(987, 478);
        MainWindow2->setAutoFillBackground(true);
        centralwidget = new QWidget(MainWindow2);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        Zatrudnieni_pracownicy = new QPushButton(tab_5);
        Zatrudnieni_pracownicy->setObjectName(QString::fromUtf8("Zatrudnieni_pracownicy"));
        Zatrudnieni_pracownicy->setGeometry(QRect(0, 150, 967, 101));
        pushButton_3 = new QPushButton(tab_5);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(0, 250, 961, 111));
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        pushButton_4 = new QPushButton(tab_6);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 280, 961, 81));
        Posiadane_samochodu = new QPushButton(tab_6);
        Posiadane_samochodu->setObjectName(QString::fromUtf8("Posiadane_samochodu"));
        Posiadane_samochodu->setGeometry(QRect(0, 120, 961, 81));
        Dodaj_samochod = new QPushButton(tab_6);
        Dodaj_samochod->setObjectName(QString::fromUtf8("Dodaj_samochod"));
        Dodaj_samochod->setGeometry(QRect(0, 200, 961, 81));
        tabWidget->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        Posiadane_motocykle = new QPushButton(tab_7);
        Posiadane_motocykle->setObjectName(QString::fromUtf8("Posiadane_motocykle"));
        Posiadane_motocykle->setGeometry(QRect(0, 120, 961, 81));
        pushButton = new QPushButton(tab_7);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 200, 961, 81));
        pushButton_2 = new QPushButton(tab_7);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 280, 961, 81));
        tabWidget->addTab(tab_7, QString());

        verticalLayout_2->addWidget(tabWidget);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        verticalWidget = new QWidget(centralwidget);
        verticalWidget->setObjectName(QString::fromUtf8("verticalWidget"));
        gridLayout_2 = new QGridLayout(verticalWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));

        gridLayout->addWidget(verticalWidget, 1, 0, 1, 1);

        MainWindow2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow2);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 987, 22));
        MainWindow2->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow2);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow2->setStatusBar(statusbar);

        retranslateUi(MainWindow2);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow2);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow2)
    {
        MainWindow2->setWindowTitle(QApplication::translate("MainWindow2", "MainWindow", nullptr));
        Zatrudnieni_pracownicy->setText(QApplication::translate("MainWindow2", "Zatrudnieni pracownicy", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow2", "PushButton", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow2", "Salon", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow2", "Usu\305\204 samoch\303\263d", nullptr));
        Posiadane_samochodu->setText(QApplication::translate("MainWindow2", "Posiadane samochody", nullptr));
        Dodaj_samochod->setText(QApplication::translate("MainWindow2", "Dodaj Samoch\303\263d", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindow2", "Samochody", nullptr));
        Posiadane_motocykle->setText(QApplication::translate("MainWindow2", "Posiadane motocykle", nullptr));
        pushButton->setText(QApplication::translate("MainWindow2", "Dodaj motocykl", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow2", "Usu\305\204 motocykl", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("MainWindow2", "Motocykle", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow2: public Ui_MainWindow2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW2_H
