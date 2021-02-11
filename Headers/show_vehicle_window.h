#pragma once

#include <QDialog>
#include <QTableWidget>
#include "main_object_shop.h"
#include <sstream>
#include "vehicle.h"

namespace Ui {
class showVehicleWindow;
}

class showVehicleWindow : public QDialog
{
    Q_OBJECT
    void resizeEvent(QResizeEvent *event) override;
public:
    explicit showVehicleWindow(const std::vector<std::shared_ptr<Vehicle>>& vehicles, QWidget *parent=nullptr);
    ~showVehicleWindow();
    void show(const std::vector<std::shared_ptr<Vehicle>>&);
    void parser(int,std::string);


private:
    Ui::showVehicleWindow *ui;
};
