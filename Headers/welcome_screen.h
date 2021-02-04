#pragma once
#include <QDialog>
#include "main_object_shop.h"
#include <QMessageBox>
#include <QString>
#include <QFileDialog>
#include <QTextStream>
#include <cstring>
#include <sstream>
#include "main_window.h"
#include <QCloseEvent>

namespace Ui {
class welcomeScreen;
}

class welcomeScreen : public QDialog
{
    Q_OBJECT

public:
    explicit welcomeScreen(QWidget *parent = nullptr);
    ~welcomeScreen();
    Shop pass_the_shop() const;
private slots:
    void closeEvent(QCloseEvent *);
public slots:
   bool on_zacznijOdNowa_clicked();
   void on_wczytajStan_clicked();

private:
    Shop tempShop;
    Ui::welcomeScreen *ui;
    int Check;

};


