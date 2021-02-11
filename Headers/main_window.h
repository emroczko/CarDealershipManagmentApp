#pragma once

#include <QMainWindow>
#include "main_object_shop.h"
#include "add_car.h"
#include "show_vehicle_window.h"
#include "welcome_screen.h"
#include "add_motorcycle.h"
#include "show_personnel_window.h"
#include "delete_window.h"
#include <sstream>
#include <QString>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include "add_personnel.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    Shop salon;
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    template<class T>void sell();
    void vehicles_owned(bool);
    void add_income(shared_ptr<Vehicle>);
    void delete_helper(int);
    template< class T>void add();
    template<typename T> void vehicles_owned();
    void sell_helper(std::vector<shared_ptr<Vehicle>>);

private slots:
    void on_add_car_button_clicked();
    void on_cars_owned_button_clicked();
    void on_add_motorcycles_button_clicked();
    void on_sell_car_button_clicked();
    void on_motorcycles_owned_button_clicked();
    void on_save_to_file_button_clicked();
    void on_sell_motorcycle_button_clicked();
    void on_salon_info_button_clicked();
    void on_add_employee_button_clicked();
    void on_employees_button_clicked();
    void on_exit_button_clicked();
    void on_cash_level_label_main_windowIconTextChanged(const QString &iconText);
    void on_cash_level_label_cars_windowIconTextChanged(const QString &iconText);
    void on_cash_level_label_motorcycles_windowIconTextChanged(const QString &iconText);


private:
    void income();
    void add_car();
    void add_motorcycle();
    void add_employee();
    void sell_car();
    void sell_motorcycle();
    void motorcycles_owned();
    void cars_owned();
    void salon_info();
    Ui::MainWindow *ui;

};

