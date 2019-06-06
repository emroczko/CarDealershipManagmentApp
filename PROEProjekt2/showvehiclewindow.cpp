#include "showvehiclewindow.h"
#include "ui_showvehiclewindow.h"

showvehiclewindow::showvehiclewindow(const std::vector<std::shared_ptr<Vehicle>>& vehicles, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::showvehiclewindow)
{
    ui->setupUi(this);
    ui->tabela_pojazdow->setColumnCount(7); // ustawiam liczbę kolumn
    ui->tabela_pojazdow->setRowCount(vehicles.size());

        QStringList headerList; // tworzę listę nagłówków kolumny
        headerList << "Marka"<< "Model" << "Cena"<< "Stan" << "ID"<<"Skrzynia biegów"<<"Rodzaj silnika";// dodaję nagłówki
        ui->tabela_pojazdow->setHorizontalHeaderLabels(headerList); // ustawiam nazwy kolumn w nagłówku
        ui->tabela_pojazdow->setEditTriggers(QAbstractItemView::NoEditTriggers); // ustawiam tryb bez możliwości edytowania pól tabeli
        show(vehicles);
}


showvehiclewindow::~showvehiclewindow()
{
    delete ui;
}
void showvehiclewindow::show(const std::vector<std::shared_ptr<Vehicle>>& vehicles)
{  QString temp;
    int row =0;

       std::stringstream buffer;
    for(auto & i : vehicles)
    {
        buffer << *i;
        parser(row, buffer.str());
        buffer.str(std::string());
        row++;
    }
}

void showvehiclewindow::parser(int row, std::string buffer)
{
    std::istringstream iss( buffer );
    int column=0;

    while( iss >> buffer )
    {
        QString qstr = QString::fromStdString(buffer);
        ui->tabela_pojazdow->setItem(row, column, new QTableWidgetItem(qstr));
        column++;
    }
}
void showvehiclewindow::resizeEvent(QResizeEvent *event){
    QWidget::resizeEvent(event);

    QRect size= ui->tabela_pojazdow->geometry();
    ui->tabela_pojazdow->setGeometry(0, 0, size.width(), size.height()); // dostosowuję rozmiar kontrolki do okna gdy jego rozmiar się zmienia
}


