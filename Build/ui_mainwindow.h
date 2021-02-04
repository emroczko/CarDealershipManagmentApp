/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab_5;
    QPushButton *Savetofile;
    QLabel *label_3;
    QPushButton *Wyjscie;
    QLabel *stanKontsa;
    QPushButton *SalonInfo;
    QWidget *tab_6;
    QPushButton *Sprzedaj_Auto;
    QPushButton *Posiadane_samochodu;
    QPushButton *Dodaj_samochod;
    QLabel *label;
    QLabel *stanKontsa_2;
    QWidget *tab_7;
    QPushButton *Posiadane_motocykle;
    QPushButton *pushButton;
    QPushButton *SprzedajMotocykl;
    QLabel *label_2;
    QLabel *stanKontsa_3;
    QWidget *Personnel_tab;
    QPushButton *Zatrudnieni_pracownicy;
    QPushButton *Zatrudnij_nowego;
    QPushButton *Zwolnij_pracownika;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1433, 925);
        MainWindow->setMaximumSize(QSize(1920, 1080));
        QPalette palette;
        QBrush brush(QColor(43, 98, 108, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(32, 79, 89, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        QBrush brush2(QColor(24, 63, 72, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        QBrush brush3(QColor(25, 25, 25, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        MainWindow->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Avenir Next"));
        MainWindow->setFont(font);
        MainWindow->setAutoFillBackground(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QPalette palette1;
        QBrush brush4(QColor(28, 114, 202, 171));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush4);
        QBrush brush5(QColor(31, 117, 204, 170));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush5);
        tabWidget->setPalette(palette1);
        tabWidget->setFont(font);
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(18, 18));
        tabWidget->setElideMode(Qt::ElideMiddle);
        tabWidget->setMovable(false);
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        Savetofile = new QPushButton(tab_5);
        Savetofile->setObjectName(QString::fromUtf8("Savetofile"));
        Savetofile->setGeometry(QRect(0, 720, 1411, 51));
        QPalette palette2;
        QBrush brush6(QColor(104, 96, 40, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Highlight, brush3);
        QBrush brush7(QColor(0, 0, 255, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(33, 255, 6, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::NoRole, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Highlight, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::NoRole, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Highlight, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::NoRole, brush8);
        Savetofile->setPalette(palette2);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Avenir"));
        font1.setPointSize(16);
        Savetofile->setFont(font1);
        Savetofile->setStyleSheet(QString::fromUtf8(""));
        label_3 = new QLabel(tab_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 10, 1361, 551));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/Resources/image2.jpg")));
        label_3->setScaledContents(true);
        Wyjscie = new QPushButton(tab_5);
        Wyjscie->setObjectName(QString::fromUtf8("Wyjscie"));
        Wyjscie->setGeometry(QRect(0, 770, 1411, 51));
        Wyjscie->setFont(font1);
        Wyjscie->setStyleSheet(QString::fromUtf8(""));
        stanKontsa = new QLabel(tab_5);
        stanKontsa->setObjectName(QString::fromUtf8("stanKontsa"));
        stanKontsa->setGeometry(QRect(550, 590, 301, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Avenir"));
        font2.setPointSize(18);
        font2.setBold(true);
        font2.setWeight(75);
        stanKontsa->setFont(font2);
        stanKontsa->setCursor(QCursor(Qt::ArrowCursor));
        stanKontsa->setAutoFillBackground(false);
        stanKontsa->setFrameShape(QFrame::Box);
        stanKontsa->setFrameShadow(QFrame::Plain);
        stanKontsa->setAlignment(Qt::AlignCenter);
        SalonInfo = new QPushButton(tab_5);
        SalonInfo->setObjectName(QString::fromUtf8("SalonInfo"));
        SalonInfo->setGeometry(QRect(0, 670, 1411, 51));
        SalonInfo->setFont(font1);
        SalonInfo->setStyleSheet(QString::fromUtf8(""));
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        Sprzedaj_Auto = new QPushButton(tab_6);
        Sprzedaj_Auto->setObjectName(QString::fromUtf8("Sprzedaj_Auto"));
        Sprzedaj_Auto->setGeometry(QRect(0, 770, 1391, 51));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Avenir"));
        font3.setPointSize(15);
        Sprzedaj_Auto->setFont(font3);
        Posiadane_samochodu = new QPushButton(tab_6);
        Posiadane_samochodu->setObjectName(QString::fromUtf8("Posiadane_samochodu"));
        Posiadane_samochodu->setGeometry(QRect(0, 670, 1391, 51));
        Posiadane_samochodu->setFont(font3);
        Dodaj_samochod = new QPushButton(tab_6);
        Dodaj_samochod->setObjectName(QString::fromUtf8("Dodaj_samochod"));
        Dodaj_samochod->setGeometry(QRect(0, 720, 1391, 51));
        Dodaj_samochod->setFont(font3);
        label = new QLabel(tab_6);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 10, 1201, 651));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Resources/image3.jpg")));
        label->setScaledContents(true);
        stanKontsa_2 = new QLabel(tab_6);
        stanKontsa_2->setObjectName(QString::fromUtf8("stanKontsa_2"));
        stanKontsa_2->setGeometry(QRect(980, 600, 301, 51));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Avenir"));
        font4.setPointSize(18);
        font4.setBold(false);
        font4.setWeight(50);
        stanKontsa_2->setFont(font4);
        stanKontsa_2->setCursor(QCursor(Qt::ArrowCursor));
        stanKontsa_2->setAutoFillBackground(false);
        stanKontsa_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        stanKontsa_2->setFrameShape(QFrame::Box);
        stanKontsa_2->setFrameShadow(QFrame::Plain);
        stanKontsa_2->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        Posiadane_motocykle = new QPushButton(tab_7);
        Posiadane_motocykle->setObjectName(QString::fromUtf8("Posiadane_motocykle"));
        Posiadane_motocykle->setGeometry(QRect(0, 680, 1391, 41));
        Posiadane_motocykle->setFont(font3);
        pushButton = new QPushButton(tab_7);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 720, 1391, 41));
        pushButton->setFont(font3);
        SprzedajMotocykl = new QPushButton(tab_7);
        SprzedajMotocykl->setObjectName(QString::fromUtf8("SprzedajMotocykl"));
        SprzedajMotocykl->setGeometry(QRect(0, 760, 1391, 41));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Avenir Next"));
        font5.setPointSize(15);
        SprzedajMotocykl->setFont(font5);
        label_2 = new QLabel(tab_7);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 10, 1141, 661));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Resources/image4.jpg")));
        label_2->setScaledContents(true);
        stanKontsa_3 = new QLabel(tab_7);
        stanKontsa_3->setObjectName(QString::fromUtf8("stanKontsa_3"));
        stanKontsa_3->setGeometry(QRect(140, 610, 301, 51));
        stanKontsa_3->setFont(font4);
        stanKontsa_3->setCursor(QCursor(Qt::ArrowCursor));
        stanKontsa_3->setAutoFillBackground(false);
        stanKontsa_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        stanKontsa_3->setFrameShape(QFrame::Box);
        stanKontsa_3->setFrameShadow(QFrame::Plain);
        stanKontsa_3->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tab_7, QString());
        Personnel_tab = new QWidget();
        Personnel_tab->setObjectName(QString::fromUtf8("Personnel_tab"));
        Zatrudnieni_pracownicy = new QPushButton(Personnel_tab);
        Zatrudnieni_pracownicy->setObjectName(QString::fromUtf8("Zatrudnieni_pracownicy"));
        Zatrudnieni_pracownicy->setGeometry(QRect(10, 670, 1391, 51));
        Zatrudnieni_pracownicy->setFont(font3);
        Zatrudnij_nowego = new QPushButton(Personnel_tab);
        Zatrudnij_nowego->setObjectName(QString::fromUtf8("Zatrudnij_nowego"));
        Zatrudnij_nowego->setGeometry(QRect(10, 720, 1391, 51));
        Zatrudnij_nowego->setFont(font3);
        Zwolnij_pracownika = new QPushButton(Personnel_tab);
        Zwolnij_pracownika->setObjectName(QString::fromUtf8("Zwolnij_pracownika"));
        Zwolnij_pracownika->setGeometry(QRect(9, 771, 1391, 51));
        Zwolnij_pracownika->setFont(font3);
        label_4 = new QLabel(Personnel_tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(114, 10, 1201, 533));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/Resources/image5.jpg")));
        label_4->setScaledContents(true);
        tabWidget->addTab(Personnel_tab, QString());

        verticalLayout_2->addWidget(tabWidget);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1433, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "BMW Dealer Manager", nullptr));
        Savetofile->setText(QApplication::translate("MainWindow", "Zapisz obecny stan salonu", nullptr));
        label_3->setText(QString());
        Wyjscie->setText(QApplication::translate("MainWindow", "Wyj\305\233cie", nullptr));
        stanKontsa->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        SalonInfo->setText(QApplication::translate("MainWindow", "Wy\305\233wietl informacje o salonie", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "Salon", nullptr));
        Sprzedaj_Auto->setText(QApplication::translate("MainWindow", "Sprzedaj samoch\303\263d", nullptr));
        Posiadane_samochodu->setText(QApplication::translate("MainWindow", "Posiadane samochody", nullptr));
        Dodaj_samochod->setText(QApplication::translate("MainWindow", "Kup Samoch\303\263d", nullptr));
        label->setText(QString());
        stanKontsa_2->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindow", "Samochody", nullptr));
        Posiadane_motocykle->setText(QApplication::translate("MainWindow", "Posiadane motocykle", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Kup motocykl", nullptr));
        SprzedajMotocykl->setText(QApplication::translate("MainWindow", "Sprzedaj motocykl", nullptr));
        label_2->setText(QString());
        stanKontsa_3->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("MainWindow", "Motocykle", nullptr));
        Zatrudnieni_pracownicy->setText(QApplication::translate("MainWindow", "Zatrudnieni pracownicy", nullptr));
        Zatrudnij_nowego->setText(QApplication::translate("MainWindow", "Zatrudnij nowego pracownika", nullptr));
        Zwolnij_pracownika->setText(QApplication::translate("MainWindow", "Zwolnij pracownika", nullptr));
        label_4->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(Personnel_tab), QApplication::translate("MainWindow", "Personel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
