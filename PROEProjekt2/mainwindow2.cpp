#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include "addvehicle.h"
#include "showVehicleWindow.h"
#include "welcomeScreen.h"
#include "mainobjectshop.h"
#include "deleteWindow.h"
#include <sstream>
#include <QString>
#include <QFileDialog>

MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent), salon(1000000),
    ui(new Ui::MainWindow2)
{
    this->hide();
    ui->setupUi(this);
    welcomeScreen welcome;
    welcome.setModal(true);
    welcome.exec();
    this->showFullScreen();
    this->show();
    //MainWindow2::on_stanKontsa_windowIconTextChanged(salon.getIncome());
}

MainWindow2::~MainWindow2()
{
    delete ui;
}

void MainWindow2::on_Dodaj_samochod_clicked()
{
    AddVehicle addCar;
    addCar.setModal(true);
    addCar.exec();
    if(addCar.on_Anuluj_clicked()==false)
    {
        salon+=addCar.on_Akceptuj_clicked();
    }
    int kasa = salon.getIncome();
    string kasa1 = std::to_string(kasa);
    string stan = "Stan konta:\n";
    QString konto = QString::fromStdString(stan+kasa1);
    MainWindow2::on_stanKontsa_windowIconTextChanged(konto);
}

void MainWindow2::on_Posiadane_samochodu_clicked()
{
    std::vector<shared_ptr<Vehicle>> samochody;
    for(auto p : salon.getVehicles())
    if (typeid (*p) == typeid(Car)) samochody.push_back((p));
    Dialog1 dial(salon.getVehicles());
    dial.setModal(true);
    dial.exec();
}
void MainWindow2::on_pushButton_clicked()
{
    AddMotorcycle addMotor;
    addMotor.setModal(true);
    addMotor.exec();
    if(addMotor.on_Anuluj_clicked()==false)
    {
        salon+=addMotor.on_Akceptuj_clicked();
    }
}

void MainWindow2::on_Wyjcie_clicked()
{
    MainWindow2::close();
}
void MainWindow2::on_Sprzedaj_Auto_clicked()
{
    deleteCar deletecar(salon.getVehicles());
    deletecar.setModal(true);
    deletecar.exec();
    std::stringstream buffer;
    if(salon.getVehicles().size()!= 0)
        for(int i=0; i<salon.getVehicles().size(); i++)
        {
        buffer << *salon.getVehicles()[i];
        {
        if(buffer.str()==deletecar.on_pushButton_2_clicked())
        {
        salon-=i;
        }
        buffer.str(std::string());
        }
    }
}

void MainWindow2::on_Posiadane_motocykle_clicked()
{   
    Dialog1 show(salon.getVehicles());
    show.setModal(true);
    show.exec();
}



void MainWindow2::on_pushButton_3_clicked()
{
    Dialog1 dial(salon.getVehicles());
    dial.setModal(true);
    dial.exec();
}


void MainWindow2::on_stanKontsa_windowIconTextChanged(const QString &iconText)
{
    ui->stanKontsa->setText(iconText);
}

void MainWindow2::on_Savetofile_clicked()
{
    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                     "/home",
                                                     QFileDialog::ShowDirsOnly
                                                     | QFileDialog::DontResolveSymlinks);
   // QString file_name = QFileDialog::getOpenFileName(this, "Open a file", );
}

void MainWindow2::on_SprzedajMotocykl_clicked()
{
    deleteCar deletecar(salon.getVehicles());
    deletecar.setModal(true);
    deletecar.exec();
    std::stringstream buffer;
        if(salon.getVehicles().size()!= 0)
        {

        //for(auto & i : samochody)
        for(int i=0; i<salon.getVehicles().size(); i++)
        {
        buffer << *salon.getVehicles()[i];
        if(buffer.str()==deletecar.on_pushButton_2_clicked())
        {
        salon-=i;
        }
        buffer.str(std::string());
        }
    }
}
