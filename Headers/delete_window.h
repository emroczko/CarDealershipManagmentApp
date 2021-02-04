#pragma once

#include <QDialog>
#include "main_object_shop.h"
#include <QListWidgetItem>
#include <sstream>

namespace Ui {
class deleteWindow;
}

class deleteWindow : public QDialog
{
    Q_OBJECT
private:
    Ui::deleteWindow *ui;
    int Check;

public:
    explicit deleteWindow(const std::vector<std::shared_ptr<Vehicle>>&, QWidget *parent = nullptr);
    ~deleteWindow();

public slots:
    string on_Usun_clicked();

    bool on_Anuluj_clicked();

    string on_lista_do_usuniecia_itemClicked();


};
