#ifndef WELCOMESCREEN_H
#define WELCOMESCREEN_H

#include <QDialog>

namespace Ui {
class welcomeScreen;
}

class welcomeScreen : public QDialog
{
    Q_OBJECT

public:
    explicit welcomeScreen(QWidget *parent = nullptr);
    ~welcomeScreen();

private slots:

   void  on_zacznijOdNowa_clicked();


   void on_wczytajStan_clicked();

private:
    Ui::welcomeScreen *ui;
};

#endif // WELCOMESCREEN_H
