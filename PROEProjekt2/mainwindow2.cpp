#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include "addvehicle.h"
#include "showVehicleWindow.h"
#include "welcomescreen.h"
#include "mainobjectshop.h"
#include "deleteWindow.h"
#include <sstream>
#include <QString>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include "addpersonnel.h"

MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent), salon(1000000),
    ui(new Ui::MainWindow2)
{
    this->hide();
    ui->setupUi(this);
    welcomeScreen welcome;
    welcome.setModal(true);
    welcome.exec();
    if(welcome.on_zacznijOdNowa_clicked()==false)
    {
       Shop tempsalon = welcome.pass_the_shop();
       salon = tempsalon;
    }

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
    Dialog1 dial(samochody);
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
    std::vector<shared_ptr<Vehicle>> samochody;
    for(auto p : salon.getVehicles())
    if (typeid (*p) == typeid(Car)) samochody.push_back((p));
    deleteCar deletecar(samochody);
    deletecar.setModal(true);
    if(samochody.size()>0)
    {
        deletecar.exec();
        std::stringstream buffer;
            if(salon.getVehicles().size()!= 0)
            {
                for(unsigned int i=0; i<salon.getVehicles().size(); i++)
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
    else
    {
        QMessageBox::warning(this, tr("Błąd"), tr("Brak samochodów do usunięcia."));
    }
}
void MainWindow2::on_Posiadane_motocykle_clicked()
{   
    std::vector<shared_ptr<Vehicle>> motory;
    for(auto p : salon.getVehicles())
    if (typeid (*p) == typeid(Motorcycle)) motory.push_back((p));

    Dialog1 show(motory);
    show.setModal(true);
    show.exec();
}

void MainWindow2::on_stanKontsa_windowIconTextChanged(const QString &iconText)
{
    ui->stanKontsa->setText(iconText);
}

void MainWindow2::on_Savetofile_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this,
            tr("Zapisz stan"), "",
            tr("Obecny_stan (*.txt);;All Files (*)"));

        if (fileName.isEmpty())
            return;
        else {
            QFile file(fileName);
            if (!file.open(QIODevice::WriteOnly)) {
                QMessageBox::information(this, tr("Unable to open file"),
                    file.errorString());
                return;
            }
            std::stringstream buffer;
            buffer << salon;
            string auta = buffer.str();
            QTextStream out(&file);
            //out.setVersion(QTextStream::Qt_4_5);
            QString qstr = QString::fromStdString(auta);
            out << qstr;

}
}

void MainWindow2::on_SprzedajMotocykl_clicked()
{

    std::vector<shared_ptr<Vehicle>> motory;
    for(auto p : salon.getVehicles())
    if (typeid (*p) == typeid(Motorcycle)) motory.push_back((p));
    deleteCar deletecar(motory);
    deletecar.setModal(true);
    if(motory.size()>0)
    {
        deletecar.exec();
        std::stringstream buffer;
        if(salon.getVehicles().size()!= 0)
        {
            for(unsigned int i=0; i<salon.getVehicles().size(); i++)
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
    else
    {
        QMessageBox::warning(this, tr("Błąd"), tr("Brak motocykli do usunięcia."));   //(*this, tr("Problem"), tr("Nie ma pojazdów do usunięcia"));
    }
}

void MainWindow2::on_SalonInfo_clicked()
{
    Dialog1 dial(salon.getVehicles());
    dial.setModal(true);
    dial.exec();
}


void MainWindow2::on_Zatrudnij_nowego_clicked()
{
    AddPersonnel addperson;
    addperson.setModal(true);
    addperson.exec();
    if(addperson.on_Anuluj_mechanik_clicked()==false)
    {
        salon+=addperson.on_Akceptuj_mechanik_clicked();
    }
}

void MainWindow2::on_Zatrudnieni_pracownicy_clicked()
{
    std::vector<shared_ptr<Person>> people;
    for(auto p : salon.getPersonnel())
    {people.push_back((p));}

    ShowPersonnelWindow win(people);
    win.setModal(true);
    win.exec();
    if(win.on_radioMechanik_clicked()==true)
    {
        people.clear();
        for(auto a : salon.getPersonnel())
        {
            if(typeid(a)==typeid(Mechanic))
            {
                    people.emplace_back(a);
            }
        }
    }
}
