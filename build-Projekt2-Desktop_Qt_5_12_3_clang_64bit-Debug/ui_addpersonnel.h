/********************************************************************************
** Form generated from reading UI file 'addpersonnel.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPERSONNEL_H
#define UI_ADDPERSONNEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddPersonnel
{
public:
    QTabWidget *tabWidget;
    QWidget *Sprzedawca_tab;
    QGroupBox *horizontalGroupBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *Akceptuj;
    QPushButton *Anuluj_sprzedawca;
    QGroupBox *formGroupBox;
    QGridLayout *gridLayout;
    QTextEdit *Nazwisko_sprzedawca_pisz;
    QLabel *Nazwisko_sprzedawca;
    QLabel *Wynagrodzenie_sprzedawca;
    QLabel *Imie_sprzedawca;
    QTextEdit *Wynagrodzenie_sprzedawca_pisz;
    QTextEdit *Imie_sprzedawca_pisz;
    QTextEdit *Doswiadczenie_sprzedawca_pisz;
    QLabel *Doswiadczenie_sprzedawca;
    QWidget *Mechanik_tab;
    QGroupBox *horizontalGroupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *Akceptuj_mechanik;
    QPushButton *Anuluj_mechanik;
    QGroupBox *formGroupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *Specjalizacja_mechanik;
    QTextEdit *Nazwisko_mechanik_pisz;
    QLabel *Nazwisko_mechanik;
    QLabel *Wynagrodzenie_mechanik;
    QComboBox *Spacjalizacja_mechanik_wybierz;
    QTextEdit *Imie_mechanik_pisz;
    QLabel *Imie_mechanik;
    QTextEdit *Wynagrodzenie_mechanik_pisz;

    void setupUi(QDialog *AddPersonnel)
    {
        if (AddPersonnel->objectName().isEmpty())
            AddPersonnel->setObjectName(QString::fromUtf8("AddPersonnel"));
        AddPersonnel->resize(583, 423);
        tabWidget = new QTabWidget(AddPersonnel);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 581, 421));
        QFont font;
        font.setFamily(QString::fromUtf8("Avenir Next"));
        tabWidget->setFont(font);
        Sprzedawca_tab = new QWidget();
        Sprzedawca_tab->setObjectName(QString::fromUtf8("Sprzedawca_tab"));
        horizontalGroupBox = new QGroupBox(Sprzedawca_tab);
        horizontalGroupBox->setObjectName(QString::fromUtf8("horizontalGroupBox"));
        horizontalGroupBox->setGeometry(QRect(30, 290, 501, 71));
        horizontalLayout = new QHBoxLayout(horizontalGroupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Akceptuj = new QPushButton(horizontalGroupBox);
        Akceptuj->setObjectName(QString::fromUtf8("Akceptuj"));

        horizontalLayout->addWidget(Akceptuj);

        Anuluj_sprzedawca = new QPushButton(horizontalGroupBox);
        Anuluj_sprzedawca->setObjectName(QString::fromUtf8("Anuluj_sprzedawca"));

        horizontalLayout->addWidget(Anuluj_sprzedawca);

        formGroupBox = new QGroupBox(Sprzedawca_tab);
        formGroupBox->setObjectName(QString::fromUtf8("formGroupBox"));
        formGroupBox->setGeometry(QRect(0, 0, 561, 171));
        gridLayout = new QGridLayout(formGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Nazwisko_sprzedawca_pisz = new QTextEdit(formGroupBox);
        Nazwisko_sprzedawca_pisz->setObjectName(QString::fromUtf8("Nazwisko_sprzedawca_pisz"));
        Nazwisko_sprzedawca_pisz->setMaximumSize(QSize(500, 30));

        gridLayout->addWidget(Nazwisko_sprzedawca_pisz, 2, 1, 1, 1);

        Nazwisko_sprzedawca = new QLabel(formGroupBox);
        Nazwisko_sprzedawca->setObjectName(QString::fromUtf8("Nazwisko_sprzedawca"));

        gridLayout->addWidget(Nazwisko_sprzedawca, 2, 0, 1, 1);

        Wynagrodzenie_sprzedawca = new QLabel(formGroupBox);
        Wynagrodzenie_sprzedawca->setObjectName(QString::fromUtf8("Wynagrodzenie_sprzedawca"));

        gridLayout->addWidget(Wynagrodzenie_sprzedawca, 3, 0, 1, 1);

        Imie_sprzedawca = new QLabel(formGroupBox);
        Imie_sprzedawca->setObjectName(QString::fromUtf8("Imie_sprzedawca"));

        gridLayout->addWidget(Imie_sprzedawca, 1, 0, 1, 1);

        Wynagrodzenie_sprzedawca_pisz = new QTextEdit(formGroupBox);
        Wynagrodzenie_sprzedawca_pisz->setObjectName(QString::fromUtf8("Wynagrodzenie_sprzedawca_pisz"));
        Wynagrodzenie_sprzedawca_pisz->setMaximumSize(QSize(500, 30));

        gridLayout->addWidget(Wynagrodzenie_sprzedawca_pisz, 3, 1, 1, 1);

        Imie_sprzedawca_pisz = new QTextEdit(formGroupBox);
        Imie_sprzedawca_pisz->setObjectName(QString::fromUtf8("Imie_sprzedawca_pisz"));
        Imie_sprzedawca_pisz->setMinimumSize(QSize(100, 0));
        Imie_sprzedawca_pisz->setMaximumSize(QSize(500, 30));
        Imie_sprzedawca_pisz->setFrameShape(QFrame::StyledPanel);
        Imie_sprzedawca_pisz->setLineWrapMode(QTextEdit::WidgetWidth);

        gridLayout->addWidget(Imie_sprzedawca_pisz, 1, 1, 1, 1);

        Doswiadczenie_sprzedawca_pisz = new QTextEdit(formGroupBox);
        Doswiadczenie_sprzedawca_pisz->setObjectName(QString::fromUtf8("Doswiadczenie_sprzedawca_pisz"));
        Doswiadczenie_sprzedawca_pisz->setMinimumSize(QSize(100, 0));
        Doswiadczenie_sprzedawca_pisz->setMaximumSize(QSize(500, 30));

        gridLayout->addWidget(Doswiadczenie_sprzedawca_pisz, 4, 1, 1, 1);

        Doswiadczenie_sprzedawca = new QLabel(formGroupBox);
        Doswiadczenie_sprzedawca->setObjectName(QString::fromUtf8("Doswiadczenie_sprzedawca"));

        gridLayout->addWidget(Doswiadczenie_sprzedawca, 4, 0, 1, 1);

        tabWidget->addTab(Sprzedawca_tab, QString());
        Mechanik_tab = new QWidget();
        Mechanik_tab->setObjectName(QString::fromUtf8("Mechanik_tab"));
        horizontalGroupBox_2 = new QGroupBox(Mechanik_tab);
        horizontalGroupBox_2->setObjectName(QString::fromUtf8("horizontalGroupBox_2"));
        horizontalGroupBox_2->setGeometry(QRect(30, 290, 501, 71));
        horizontalLayout_2 = new QHBoxLayout(horizontalGroupBox_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        Akceptuj_mechanik = new QPushButton(horizontalGroupBox_2);
        Akceptuj_mechanik->setObjectName(QString::fromUtf8("Akceptuj_mechanik"));

        horizontalLayout_2->addWidget(Akceptuj_mechanik);

        Anuluj_mechanik = new QPushButton(horizontalGroupBox_2);
        Anuluj_mechanik->setObjectName(QString::fromUtf8("Anuluj_mechanik"));

        horizontalLayout_2->addWidget(Anuluj_mechanik);

        formGroupBox_2 = new QGroupBox(Mechanik_tab);
        formGroupBox_2->setObjectName(QString::fromUtf8("formGroupBox_2"));
        formGroupBox_2->setGeometry(QRect(0, 0, 561, 171));
        gridLayout_2 = new QGridLayout(formGroupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        Specjalizacja_mechanik = new QLabel(formGroupBox_2);
        Specjalizacja_mechanik->setObjectName(QString::fromUtf8("Specjalizacja_mechanik"));
        Specjalizacja_mechanik->setFont(font);

        gridLayout_2->addWidget(Specjalizacja_mechanik, 0, 0, 1, 1);

        Nazwisko_mechanik_pisz = new QTextEdit(formGroupBox_2);
        Nazwisko_mechanik_pisz->setObjectName(QString::fromUtf8("Nazwisko_mechanik_pisz"));
        Nazwisko_mechanik_pisz->setMaximumSize(QSize(500, 30));
        Nazwisko_mechanik_pisz->setFrameShape(QFrame::StyledPanel);

        gridLayout_2->addWidget(Nazwisko_mechanik_pisz, 3, 1, 1, 1);

        Nazwisko_mechanik = new QLabel(formGroupBox_2);
        Nazwisko_mechanik->setObjectName(QString::fromUtf8("Nazwisko_mechanik"));

        gridLayout_2->addWidget(Nazwisko_mechanik, 3, 0, 1, 1);

        Wynagrodzenie_mechanik = new QLabel(formGroupBox_2);
        Wynagrodzenie_mechanik->setObjectName(QString::fromUtf8("Wynagrodzenie_mechanik"));

        gridLayout_2->addWidget(Wynagrodzenie_mechanik, 4, 0, 1, 1);

        Spacjalizacja_mechanik_wybierz = new QComboBox(formGroupBox_2);
        Spacjalizacja_mechanik_wybierz->setObjectName(QString::fromUtf8("Spacjalizacja_mechanik_wybierz"));

        gridLayout_2->addWidget(Spacjalizacja_mechanik_wybierz, 0, 1, 1, 1);

        Imie_mechanik_pisz = new QTextEdit(formGroupBox_2);
        Imie_mechanik_pisz->setObjectName(QString::fromUtf8("Imie_mechanik_pisz"));
        Imie_mechanik_pisz->setMinimumSize(QSize(100, 0));
        Imie_mechanik_pisz->setMaximumSize(QSize(500, 30));

        gridLayout_2->addWidget(Imie_mechanik_pisz, 2, 1, 1, 1);

        Imie_mechanik = new QLabel(formGroupBox_2);
        Imie_mechanik->setObjectName(QString::fromUtf8("Imie_mechanik"));

        gridLayout_2->addWidget(Imie_mechanik, 2, 0, 1, 1);

        Wynagrodzenie_mechanik_pisz = new QTextEdit(formGroupBox_2);
        Wynagrodzenie_mechanik_pisz->setObjectName(QString::fromUtf8("Wynagrodzenie_mechanik_pisz"));
        Wynagrodzenie_mechanik_pisz->setMaximumSize(QSize(500, 30));

        gridLayout_2->addWidget(Wynagrodzenie_mechanik_pisz, 4, 1, 1, 1);

        tabWidget->addTab(Mechanik_tab, QString());

        retranslateUi(AddPersonnel);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(AddPersonnel);
    } // setupUi

    void retranslateUi(QDialog *AddPersonnel)
    {
        AddPersonnel->setWindowTitle(QApplication::translate("AddPersonnel", "Dialog", nullptr));
        Akceptuj->setText(QApplication::translate("AddPersonnel", "Akceptuj", nullptr));
        Anuluj_sprzedawca->setText(QApplication::translate("AddPersonnel", "Anuluj", nullptr));
        Nazwisko_sprzedawca->setText(QApplication::translate("AddPersonnel", "Nazwisko:", nullptr));
        Wynagrodzenie_sprzedawca->setText(QApplication::translate("AddPersonnel", "Warto\305\233\304\207 wynagrodzenia: ", nullptr));
        Imie_sprzedawca->setText(QApplication::translate("AddPersonnel", "Imie: ", nullptr));
        Doswiadczenie_sprzedawca->setText(QApplication::translate("AddPersonnel", "Do\305\233wiadczenie w latach: ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Sprzedawca_tab), QApplication::translate("AddPersonnel", "Sprzedawca", nullptr));
        Akceptuj_mechanik->setText(QApplication::translate("AddPersonnel", "Akceptuj", nullptr));
        Anuluj_mechanik->setText(QApplication::translate("AddPersonnel", "Anuluj", nullptr));
        Specjalizacja_mechanik->setText(QApplication::translate("AddPersonnel", "Specjalizacja: ", nullptr));
        Nazwisko_mechanik->setText(QApplication::translate("AddPersonnel", "Nazwisko: ", nullptr));
        Wynagrodzenie_mechanik->setText(QApplication::translate("AddPersonnel", "Warto\305\233\304\207 wynagrodzenia: ", nullptr));
        Imie_mechanik->setText(QApplication::translate("AddPersonnel", "Imie:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Mechanik_tab), QApplication::translate("AddPersonnel", "Mechanik", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddPersonnel: public Ui_AddPersonnel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPERSONNEL_H
