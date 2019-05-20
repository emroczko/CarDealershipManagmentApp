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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow2
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QPushButton *Posiadane_motocykle;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QVBoxLayout *verticalLayout_2;
    QPushButton *Zatrudnieni_pracownicy;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_3;
    QWidget *verticalWidget;
    QGridLayout *gridLayout_2;
    QPushButton *Dodaj_samochod;
    QPushButton *Posiadane_samochodu;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow2)
    {
        if (MainWindow2->objectName().isEmpty())
            MainWindow2->setObjectName(QString::fromUtf8("MainWindow2"));
        MainWindow2->resize(987, 478);
        centralwidget = new QWidget(MainWindow2);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        Posiadane_motocykle = new QPushButton(centralwidget);
        Posiadane_motocykle->setObjectName(QString::fromUtf8("Posiadane_motocykle"));

        verticalLayout_4->addWidget(Posiadane_motocykle);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_4->addWidget(pushButton);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout_4->addWidget(pushButton_4);


        gridLayout->addLayout(verticalLayout_4, 2, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        Zatrudnieni_pracownicy = new QPushButton(centralwidget);
        Zatrudnieni_pracownicy->setObjectName(QString::fromUtf8("Zatrudnieni_pracownicy"));

        verticalLayout_2->addWidget(Zatrudnieni_pracownicy);


        gridLayout->addLayout(verticalLayout_2, 2, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_3->addWidget(pushButton_3);


        gridLayout->addLayout(verticalLayout_3, 3, 1, 1, 1);

        verticalWidget = new QWidget(centralwidget);
        verticalWidget->setObjectName(QString::fromUtf8("verticalWidget"));
        gridLayout_2 = new QGridLayout(verticalWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        Dodaj_samochod = new QPushButton(verticalWidget);
        Dodaj_samochod->setObjectName(QString::fromUtf8("Dodaj_samochod"));

        gridLayout_2->addWidget(Dodaj_samochod, 1, 0, 1, 1);

        Posiadane_samochodu = new QPushButton(verticalWidget);
        Posiadane_samochodu->setObjectName(QString::fromUtf8("Posiadane_samochodu"));

        gridLayout_2->addWidget(Posiadane_samochodu, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(verticalWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_2->addWidget(pushButton_2, 3, 0, 1, 1);


        gridLayout->addWidget(verticalWidget, 3, 0, 1, 1);

        MainWindow2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow2);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 987, 22));
        MainWindow2->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow2);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow2->setStatusBar(statusbar);

        retranslateUi(MainWindow2);

        QMetaObject::connectSlotsByName(MainWindow2);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow2)
    {
        MainWindow2->setWindowTitle(QApplication::translate("MainWindow2", "MainWindow", nullptr));
        Posiadane_motocykle->setText(QApplication::translate("MainWindow2", "Posiadane motocykle", nullptr));
        pushButton->setText(QApplication::translate("MainWindow2", "Dodaj motocykl", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow2", "Usu\305\204 samoch\303\263d", nullptr));
        Zatrudnieni_pracownicy->setText(QApplication::translate("MainWindow2", "Zatrudnieni pracownicy", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow2", "PushButton", nullptr));
        Dodaj_samochod->setText(QApplication::translate("MainWindow2", "Dodaj Samoch\303\263d", nullptr));
        Posiadane_samochodu->setText(QApplication::translate("MainWindow2", "Posiadane samochody", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow2", "Usu\305\204 samoch\303\263d", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow2: public Ui_MainWindow2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW2_H
