/********************************************************************************
** Form generated from reading UI file 'deletecar.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETECAR_H
#define UI_DELETECAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_deleteCar
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *deleteCar)
    {
        if (deleteCar->objectName().isEmpty())
            deleteCar->setObjectName(QString::fromUtf8("deleteCar"));
        deleteCar->resize(623, 468);
        verticalLayout = new QVBoxLayout(deleteCar);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget = new QListWidget(deleteCar);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        pushButton_2 = new QPushButton(deleteCar);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(deleteCar);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(deleteCar);

        QMetaObject::connectSlotsByName(deleteCar);
    } // setupUi

    void retranslateUi(QDialog *deleteCar)
    {
        deleteCar->setWindowTitle(QApplication::translate("deleteCar", "Dialog", nullptr));
        pushButton_2->setText(QApplication::translate("deleteCar", "Usu\305\204", nullptr));
        pushButton->setText(QApplication::translate("deleteCar", "Anuluj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deleteCar: public Ui_deleteCar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETECAR_H
