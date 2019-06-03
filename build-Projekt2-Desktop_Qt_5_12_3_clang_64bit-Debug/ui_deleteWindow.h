/********************************************************************************
** Form generated from reading UI file 'deletewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEWINDOW_H
#define UI_DELETEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_deleteWindow
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *lista_do_usuniecia;
    QPushButton *Usun;
    QPushButton *Anuluj;

    void setupUi(QDialog *deleteWindow)
    {
        if (deleteWindow->objectName().isEmpty())
            deleteWindow->setObjectName(QString::fromUtf8("deleteWindow"));
        deleteWindow->resize(622, 449);
        verticalLayout = new QVBoxLayout(deleteWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lista_do_usuniecia = new QListWidget(deleteWindow);
        lista_do_usuniecia->setObjectName(QString::fromUtf8("lista_do_usuniecia"));

        verticalLayout->addWidget(lista_do_usuniecia);

        Usun = new QPushButton(deleteWindow);
        Usun->setObjectName(QString::fromUtf8("Usun"));

        verticalLayout->addWidget(Usun);

        Anuluj = new QPushButton(deleteWindow);
        Anuluj->setObjectName(QString::fromUtf8("Anuluj"));

        verticalLayout->addWidget(Anuluj);


        retranslateUi(deleteWindow);

        QMetaObject::connectSlotsByName(deleteWindow);
    } // setupUi

    void retranslateUi(QDialog *deleteWindow)
    {
        deleteWindow->setWindowTitle(QApplication::translate("deleteWindow", "Dialog", nullptr));
        Usun->setText(QApplication::translate("deleteWindow", "Usu\305\204", nullptr));
        Anuluj->setText(QApplication::translate("deleteWindow", "Anuluj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deleteWindow: public Ui_deleteWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEWINDOW_H
