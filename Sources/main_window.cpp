#include "../Headers/main_window.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent), salon(1000000),
    ui(new Ui::MainWindow)
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
    MainWindow::Income();
    this->showFullScreen();
    this->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::Income()
{
    int kasa = salon.getIncome();
    string kasa1 = std::to_string(kasa);
    string stan = "Stan konta: ";
    QString konto = QString::fromStdString(stan+kasa1);
    MainWindow::on_stanKontsa_windowIconTextChanged(konto);
    MainWindow::on_stanKontsa_2_windowIconTextChanged(konto);
    MainWindow::on_stanKontsa_3_windowIconTextChanged(konto);
}

template< class T>void MainWindow::Add()
{
    T a;
    a.setModal(true);
    a.exec();
    if(a.on_Anuluj_clicked()==false)
    {
        shared_ptr<Vehicle> tmp = a.on_Akceptuj_clicked();
        if(tmp->Get_Price()<=0 || tmp->Get_ID()<0)
        {
            QMessageBox::StandardButton resBtn = QMessageBox::question( this, " ", "Podana cena lub ID moga być nieprawidłowe. Czy jesteś pewien że chcesz dodać pojazd?", QMessageBox::No | QMessageBox::Yes);
            if(resBtn==QMessageBox::No)  {a.reject();}
            else
            {
                a.accept();
                salon += tmp;
            }
        }
        else {add_income(tmp);}
     }
}

void MainWindow::Add_car()
{
   Add<AddVehicle>();
}

void MainWindow::Add_motorcycle()
{
    Add<AddMotorcycle>();
}

void MainWindow::add_income(shared_ptr<Vehicle> tmp)
{
    if(salon.getIncome()-tmp->Get_Price()>=0)

    {
        salon.Set_income(salon.getIncome()-tmp->Get_Price());
        salon += tmp;

        MainWindow::Income();
    }
    else
    QMessageBox::warning(this, "", "Nie wystarczające środki");
}

void MainWindow::Add_employee()
{
    AddPersonnel addperson;
    addperson.setModal(true);
    addperson.exec();
    if(addperson.on_Anuluj_mechanik_clicked()==false)
    {
        salon+=addperson.on_Akceptuj_mechanik_clicked();
    }
}

template<typename T>
void MainWindow::Vehicles_owned()
{
    std::vector<shared_ptr<Vehicle>> Vehicles_;
    for(auto p : salon.getVehicles())
        if (typeid (*p) == typeid(T)) Vehicles_.push_back((p));

    showvehiclewindow show(Vehicles_);
    show.setModal(true);
    show.exec();
}
void MainWindow::Motorcycles_owned()
{
   Vehicles_owned<Motorcycle>();
}

void MainWindow::Cars_owned()
{
   Vehicles_owned<Car>();
}

template< class T>
void MainWindow::sell()
{
    std::vector<shared_ptr<Vehicle>> vehicles_;
    for(auto p : salon.getVehicles())
    if (typeid (*p) == typeid(T)) vehicles_.push_back((p));

    sell_helper(vehicles_);
    MainWindow::Income();
}
void MainWindow::sell_helper(std::vector<shared_ptr<Vehicle>> vehicles_)
{
    deleteWindow deleteVehicle_(vehicles_);
    deleteVehicle_.setModal(true);
    if(vehicles_.size()>0)
    {
    deleteVehicle_.exec();
    std::stringstream buffer;
        for(unsigned int i=0; i<salon.getVehicles().size(); i++)
        {
           buffer << *salon.getVehicles()[i];
           if(buffer.str()==deleteVehicle_.on_Usun_clicked()) deleteHelper(i);

           buffer.str(std::string());
        }
    }
    else
    QMessageBox::warning(this, tr("Błąd"), tr("Brak motocykli do usunięcia."));   //(*this, tr("Problem"), tr("Nie ma pojazdów do usunięcia"));
}

void MainWindow::Sell_car()
{
    sell<Car>();
}
void MainWindow::Sell_motorcycle()
{
    sell<Motorcycle>();
}

void MainWindow::deleteHelper(int i)
{
    shared_ptr<Vehicle> tmp =salon.getVehicles()[i];
    int val = salon.getIncome()+tmp->Get_Price()*1.2;
    salon.Set_income(val);
    salon-=i;
}

void MainWindow::Salon_info()
{
    showvehiclewindow show(salon.getVehicles());
    show.setModal(true);
    show.exec();
}
void MainWindow::on_Zatrudnieni_pracownicy_clicked()
{
    std::vector<shared_ptr<Person>> people;
    for(auto p : salon.getPersonnel()) {people.push_back((p));}
    ShowPersonnelWindow showpersonnel(people);
    showpersonnel.setModal(true);
    showpersonnel.exec();
    showpersonnel.showMethod(people);

}
void MainWindow::on_Savetofile_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this,
            tr("Zapisz stan"), "",
            tr("Obecny_stan (*.txt);;All Files (*)"));

        if (fileName.isEmpty())
            return;

    ofstream myfile;
    myfile.open(fileName.toStdString());
    myfile << salon;
    myfile.close();
            /*
            QFile file(fileName);
            if (!file.open(QIODevice::WriteOnly)) {
                QMessageBox::information(this, tr("Unable to open file"),
                    file.errorString());
                return;
            }

            name << salon;
            QTextStream out(&file);
            QString qstr = QString::fromStdString(name.str());
            out << salon;
            */
}

void MainWindow::on_Dodaj_samochod_clicked() {Add_car();}
void MainWindow::on_Posiadane_samochodu_clicked() {Cars_owned();}
void MainWindow::on_pushButton_clicked() {Add_motorcycle();}
void MainWindow::on_Sprzedaj_Auto_clicked() {Sell_car();}
void MainWindow::on_Posiadane_motocykle_clicked() {Motorcycles_owned();}
void MainWindow::on_stanKontsa_windowIconTextChanged(const QString &iconText) {ui->stanKontsa->setText(iconText);}
void MainWindow::on_stanKontsa_2_windowIconTextChanged(const QString &iconText) {ui->stanKontsa_2->setText(iconText);}
void MainWindow::on_stanKontsa_3_windowIconTextChanged(const QString &iconText) {ui->stanKontsa_3->setText(iconText);}
void MainWindow::on_SprzedajMotocykl_clicked() {Sell_motorcycle();}
void MainWindow::on_SalonInfo_clicked() {Salon_info();}
void MainWindow::on_Zatrudnij_nowego_clicked() {Add_employee();}
void MainWindow::on_Wyjscie_clicked() {MainWindow::close();}
