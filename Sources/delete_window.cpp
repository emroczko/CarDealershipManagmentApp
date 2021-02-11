#include "../Headers/delete_window.h"
#include "ui_deletewindow.h"

deleteWindow::deleteWindow(const std::vector<std::shared_ptr<Vehicle>>& vehicles, QWidget *parent):
    QDialog(parent),
    ui(new Ui::deleteWindow)
{
  ui->setupUi(this);

  QString temp;
  std::stringstream buffer;
      for(auto & i : vehicles)
      {
      buffer << *i;
      QString qstr = QString::fromStdString(buffer.str());
      ui->list_to_delete->addItem(qstr);
      buffer.str(std::string());
      qstr.clear();
      }
  Check=1;
}

deleteWindow::~deleteWindow()
{
    delete ui;
}

string deleteWindow::on_delete_2_clicked()
{
    string whichToDelete = deleteWindow::on_list_to_delete_itemClicked();
    deleteWindow::reject();
    Check--;
    return whichToDelete;
}

bool deleteWindow::on_cancel_clicked()
{
    deleteWindow::close();
    return Check;
}

string deleteWindow::on_list_to_delete_itemClicked()
{
    QString temp;
    temp += ui->list_to_delete->currentItem()->text();
    return temp.toStdString();
}
