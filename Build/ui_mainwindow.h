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
    QPushButton *save_to_file_button;
    QLabel *label_3;
    QPushButton *exit_button;
    QLabel *cash_level_label_main;
    QPushButton *salon_info_button;
    QWidget *tab_6;
    QPushButton *sell_car_button;
    QPushButton *cars_owned_button;
    QPushButton *add_car_button;
    QLabel *label;
    QLabel *cash_level_label_cars;
    QWidget *tab_7;
    QPushButton *motorcycles_owned_button;
    QPushButton *add_motorcycle_button;
    QPushButton *sell_motorcycle_button;
    QLabel *label_2;
    QLabel *cash_level_label_motorcycles;
    QWidget *Personnel_tab;
    QPushButton *show_employees_button;
    QPushButton *add_employe_button;
    QPushButton *delete_employee_button;
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
        save_to_file_button = new QPushButton(tab_5);
        save_to_file_button->setObjectName(QString::fromUtf8("save_to_file_button"));
        save_to_file_button->setGeometry(QRect(0, 720, 1411, 51));
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
        save_to_file_button->setPalette(palette2);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Avenir"));
        font1.setPointSize(16);
        save_to_file_button->setFont(font1);
        save_to_file_button->setStyleSheet(QString::fromUtf8(""));
        label_3 = new QLabel(tab_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 10, 1361, 551));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/Resources/image2.jpg")));
        label_3->setScaledContents(true);
        exit_button = new QPushButton(tab_5);
        exit_button->setObjectName(QString::fromUtf8("exit_button"));
        exit_button->setGeometry(QRect(0, 770, 1411, 51));
        exit_button->setFont(font1);
        exit_button->setStyleSheet(QString::fromUtf8(""));
        cash_level_label_main = new QLabel(tab_5);
        cash_level_label_main->setObjectName(QString::fromUtf8("cash_level_label_main"));
        cash_level_label_main->setGeometry(QRect(550, 590, 301, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Avenir"));
        font2.setPointSize(18);
        font2.setBold(true);
        font2.setWeight(75);
        cash_level_label_main->setFont(font2);
        cash_level_label_main->setCursor(QCursor(Qt::ArrowCursor));
        cash_level_label_main->setAutoFillBackground(false);
        cash_level_label_main->setFrameShape(QFrame::Box);
        cash_level_label_main->setFrameShadow(QFrame::Plain);
        cash_level_label_main->setAlignment(Qt::AlignCenter);
        salon_info_button = new QPushButton(tab_5);
        salon_info_button->setObjectName(QString::fromUtf8("salon_info_button"));
        salon_info_button->setGeometry(QRect(0, 670, 1411, 51));
        salon_info_button->setFont(font1);
        salon_info_button->setStyleSheet(QString::fromUtf8(""));
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        sell_car_button = new QPushButton(tab_6);
        sell_car_button->setObjectName(QString::fromUtf8("sell_car_button"));
        sell_car_button->setGeometry(QRect(0, 770, 1391, 51));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Avenir"));
        font3.setPointSize(15);
        sell_car_button->setFont(font3);
        cars_owned_button = new QPushButton(tab_6);
        cars_owned_button->setObjectName(QString::fromUtf8("cars_owned_button"));
        cars_owned_button->setGeometry(QRect(0, 670, 1391, 51));
        cars_owned_button->setFont(font3);
        add_car_button = new QPushButton(tab_6);
        add_car_button->setObjectName(QString::fromUtf8("add_car_button"));
        add_car_button->setGeometry(QRect(0, 720, 1391, 51));
        add_car_button->setFont(font3);
        label = new QLabel(tab_6);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 10, 1201, 651));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Resources/image3.jpg")));
        label->setScaledContents(true);
        cash_level_label_cars = new QLabel(tab_6);
        cash_level_label_cars->setObjectName(QString::fromUtf8("cash_level_label_cars"));
        cash_level_label_cars->setGeometry(QRect(980, 600, 301, 51));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Avenir"));
        font4.setPointSize(18);
        font4.setBold(false);
        font4.setWeight(50);
        cash_level_label_cars->setFont(font4);
        cash_level_label_cars->setCursor(QCursor(Qt::ArrowCursor));
        cash_level_label_cars->setAutoFillBackground(false);
        cash_level_label_cars->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        cash_level_label_cars->setFrameShape(QFrame::Box);
        cash_level_label_cars->setFrameShadow(QFrame::Plain);
        cash_level_label_cars->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        motorcycles_owned_button = new QPushButton(tab_7);
        motorcycles_owned_button->setObjectName(QString::fromUtf8("motorcycles_owned_button"));
        motorcycles_owned_button->setGeometry(QRect(0, 680, 1391, 41));
        motorcycles_owned_button->setFont(font3);
        add_motorcycle_button = new QPushButton(tab_7);
        add_motorcycle_button->setObjectName(QString::fromUtf8("add_motorcycle_button"));
        add_motorcycle_button->setGeometry(QRect(0, 720, 1391, 41));
        add_motorcycle_button->setFont(font3);
        sell_motorcycle_button = new QPushButton(tab_7);
        sell_motorcycle_button->setObjectName(QString::fromUtf8("sell_motorcycle_button"));
        sell_motorcycle_button->setGeometry(QRect(0, 760, 1391, 41));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Avenir Next"));
        font5.setPointSize(15);
        sell_motorcycle_button->setFont(font5);
        label_2 = new QLabel(tab_7);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 10, 1141, 661));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Resources/image4.jpg")));
        label_2->setScaledContents(true);
        cash_level_label_motorcycles = new QLabel(tab_7);
        cash_level_label_motorcycles->setObjectName(QString::fromUtf8("cash_level_label_motorcycles"));
        cash_level_label_motorcycles->setGeometry(QRect(140, 610, 301, 51));
        cash_level_label_motorcycles->setFont(font4);
        cash_level_label_motorcycles->setCursor(QCursor(Qt::ArrowCursor));
        cash_level_label_motorcycles->setAutoFillBackground(false);
        cash_level_label_motorcycles->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        cash_level_label_motorcycles->setFrameShape(QFrame::Box);
        cash_level_label_motorcycles->setFrameShadow(QFrame::Plain);
        cash_level_label_motorcycles->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tab_7, QString());
        Personnel_tab = new QWidget();
        Personnel_tab->setObjectName(QString::fromUtf8("Personnel_tab"));
        show_employees_button = new QPushButton(Personnel_tab);
        show_employees_button->setObjectName(QString::fromUtf8("show_employees_button"));
        show_employees_button->setGeometry(QRect(10, 670, 1391, 51));
        show_employees_button->setFont(font3);
        add_employe_button = new QPushButton(Personnel_tab);
        add_employe_button->setObjectName(QString::fromUtf8("add_employe_button"));
        add_employe_button->setGeometry(QRect(10, 720, 1391, 51));
        add_employe_button->setFont(font3);
        delete_employee_button = new QPushButton(Personnel_tab);
        delete_employee_button->setObjectName(QString::fromUtf8("delete_employee_button"));
        delete_employee_button->setGeometry(QRect(9, 771, 1391, 51));
        delete_employee_button->setFont(font3);
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
        save_to_file_button->setText(QApplication::translate("MainWindow", "Zapisz obecny stan salonu", nullptr));
        label_3->setText(QString());
        exit_button->setText(QApplication::translate("MainWindow", "Wyj\305\233cie", nullptr));
        cash_level_label_main->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        salon_info_button->setText(QApplication::translate("MainWindow", "Wy\305\233wietl informacje o salonie", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "Salon", nullptr));
        sell_car_button->setText(QApplication::translate("MainWindow", "Sprzedaj samoch\303\263d", nullptr));
        cars_owned_button->setText(QApplication::translate("MainWindow", "Posiadane samochody", nullptr));
        add_car_button->setText(QApplication::translate("MainWindow", "Kup Samoch\303\263d", nullptr));
        label->setText(QString());
        cash_level_label_cars->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindow", "Samochody", nullptr));
        motorcycles_owned_button->setText(QApplication::translate("MainWindow", "Posiadane motocykle", nullptr));
        add_motorcycle_button->setText(QApplication::translate("MainWindow", "Kup motocykl", nullptr));
        sell_motorcycle_button->setText(QApplication::translate("MainWindow", "Sprzedaj motocykl", nullptr));
        label_2->setText(QString());
        cash_level_label_motorcycles->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("MainWindow", "Motocykle", nullptr));
        show_employees_button->setText(QApplication::translate("MainWindow", "Zatrudnieni pracownicy", nullptr));
        add_employe_button->setText(QApplication::translate("MainWindow", "Zatrudnij nowego pracownika", nullptr));
        delete_employee_button->setText(QApplication::translate("MainWindow", "Zwolnij pracownika", nullptr));
        label_4->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(Personnel_tab), QApplication::translate("MainWindow", "Personel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
