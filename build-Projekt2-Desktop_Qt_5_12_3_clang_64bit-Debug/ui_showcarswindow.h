/********************************************************************************
** Form generated from reading UI file 'showcarswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWCARSWINDOW_H
#define UI_SHOWCARSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowCarsWindow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ShowCarsWindow)
    {
        if (ShowCarsWindow->objectName().isEmpty())
            ShowCarsWindow->setObjectName(QString::fromUtf8("ShowCarsWindow"));
        ShowCarsWindow->resize(800, 600);
        centralwidget = new QWidget(ShowCarsWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        ShowCarsWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ShowCarsWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        ShowCarsWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ShowCarsWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ShowCarsWindow->setStatusBar(statusbar);

        retranslateUi(ShowCarsWindow);

        QMetaObject::connectSlotsByName(ShowCarsWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ShowCarsWindow)
    {
        ShowCarsWindow->setWindowTitle(QApplication::translate("ShowCarsWindow", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowCarsWindow: public Ui_ShowCarsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWCARSWINDOW_H
