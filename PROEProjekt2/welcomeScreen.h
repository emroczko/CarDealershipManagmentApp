#ifndef WELCOMESCREEN_H
#define WELCOMESCREEN_H

#include <QDialog>
#include "mainobjectshop.h"

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
   // void RemoveLine(std::string& source, std::string& to_remove);

public slots:
   bool on_zacznijOdNowa_clicked();
   void on_wczytajStan_clicked();

private:
    Ui::welcomeScreen *ui;
    int Check;
    Shop temp;
};

#endif // WELCOMESCREEN_H
