#include "deletewindow.h"
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
      ui->lista_do_usuniecia->addItem(qstr);
      buffer.str(std::string());
      qstr.clear();
      }
  Check=1;
}

deleteWindow::~deleteWindow()
{
    delete ui;
}

string deleteWindow::on_Usun_clicked()
{
    string whichToDelete = deleteWindow::on_lista_do_usuniecia_itemClicked();
    deleteWindow::reject();
    Check--;
    return whichToDelete;
}

bool deleteWindow::on_Anuluj_clicked()
{
    deleteWindow::close();
    return Check;
}

string deleteWindow::on_lista_do_usuniecia_itemClicked()
{
    QString temp;
    temp += ui->lista_do_usuniecia->currentItem()->text();
    return temp.toStdString();
}
