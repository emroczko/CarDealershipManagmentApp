/********************************************************************************
** Form generated from reading UI file 'deletewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
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
    QListWidget *list_to_delete;
    QPushButton *delete_2;
    QPushButton *cancel;

    void setupUi(QDialog *deleteWindow)
    {
        if (deleteWindow->objectName().isEmpty())
            deleteWindow->setObjectName(QString::fromUtf8("deleteWindow"));
        deleteWindow->resize(622, 449);
        verticalLayout = new QVBoxLayout(deleteWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        list_to_delete = new QListWidget(deleteWindow);
        list_to_delete->setObjectName(QString::fromUtf8("list_to_delete"));

        verticalLayout->addWidget(list_to_delete);

        delete_2 = new QPushButton(deleteWindow);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));

        verticalLayout->addWidget(delete_2);

        cancel = new QPushButton(deleteWindow);
        cancel->setObjectName(QString::fromUtf8("cancel"));

        verticalLayout->addWidget(cancel);


        retranslateUi(deleteWindow);

        QMetaObject::connectSlotsByName(deleteWindow);
    } // setupUi

    void retranslateUi(QDialog *deleteWindow)
    {
        deleteWindow->setWindowTitle(QApplication::translate("deleteWindow", "Dialog", nullptr));
        delete_2->setText(QApplication::translate("deleteWindow", "Usu\305\204", nullptr));
        cancel->setText(QApplication::translate("deleteWindow", "Anuluj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deleteWindow: public Ui_deleteWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEWINDOW_H
