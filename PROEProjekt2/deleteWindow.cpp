#include "deleteWindow.h"
#include "ui_deletecar.h"
#include <sstream>
#include <mainobjectshop.h>

deleteCar::deleteCar(const std::vector<std::shared_ptr<Vehicle>>& vehicles, QWidget *parent):
    QDialog(parent),
    ui(new Ui::deleteCar)
{
  ui->setupUi(this);

  QString temp;
  std::stringstream buffer;
  string auta;
      for(auto & i : vehicles)
      {
      buffer << *i;
      auta = buffer.str();
      QString qstr = QString::fromStdString(auta);
      ui->listWidget->addItem(qstr);
      auta.clear();
      buffer.str(std::string());
      qstr.clear();
      }
}

deleteCar::~deleteCar()
{
    delete ui;
}

string deleteCar::on_listWidget_itemClicked()
{
    QString temp;
    temp += ui->listWidget->currentItem()->text();
    string ret = temp.toStdString();
    return ret;
}

void deleteCar::on_pushButton_clicked()
{
    deleteCar::close();
}


string deleteCar::on_pushButton_2_clicked()
{
    string whichToDelete = deleteCar::on_listWidget_itemClicked();
    deleteCar::reject();
    return whichToDelete;
}


