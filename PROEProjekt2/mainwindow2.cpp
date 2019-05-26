#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include <QMessageBox>

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
    MainWindow2::Income();
    this->showFullScreen();
    this->show();
}

MainWindow2::~MainWindow2()
{
    delete ui;
}
void MainWindow2::Add_car()
{
    AddVehicle addCar;
    addCar.setModal(true);
    addCar.exec();
    if(addCar.on_Anuluj_clicked()==false)
    {
        shared_ptr<Vehicle> tmp = addCar.on_Akceptuj_clicked();
        if(tmp->Get_Price()<=0 || tmp->Get_ID()<0)
        {
            QMessageBox::StandardButton resBtn = QMessageBox::question( this, " ", "Podana cena lub ID moga być nieprawidłowe. Czy jesteś pewien że chcesz dodać samochód?", QMessageBox::No | QMessageBox::Yes);
            if(resBtn==QMessageBox::No)
            {
                addCar.reject();
            }
            else
            {
                addCar.accept();
                salon += tmp;
            }
        }
        else
        {

            if(salon.getIncome()-tmp->Get_Price()>=0)
            {
                salon.Set_income(salon.getIncome()-tmp->Get_Price());
                salon += tmp;
            }
            else
            {
                QMessageBox::warning(this, "", "Nie wystarczające środki");
            }
        }
     }
    MainWindow2::Income();
}
void MainWindow2::Income()
{
    int kasa = salon.getIncome();
    string kasa1 = std::to_string(kasa);
    string stan = "Stan konta:\n";
    QString konto = QString::fromStdString(stan+kasa1);
    MainWindow2::on_stanKontsa_windowIconTextChanged(konto);
}
void MainWindow2::Add_motorcycle()
{
    AddMotorcycle addMotor;
    addMotor.setModal(true);
    addMotor.exec();
    if(addMotor.on_Anuluj_clicked()==false)
    {
        shared_ptr<Vehicle> tmp = addMotor.on_Akceptuj_clicked();
        if(tmp->Get_Price()<=0 || tmp->Get_ID()<0)
        {
            QMessageBox::StandardButton resBtn = QMessageBox::question( this, " ", "Podana cena lub ID moga być nieprawidłowe. Czy jesteś pewien że chcesz dodać samochód?", QMessageBox::No | QMessageBox::Yes);
            if(resBtn==QMessageBox::No)
            {
                addMotor.reject();
            }
            else
            {
                addMotor.accept();
                salon += tmp;
            }
        }
        else
        {

            if(salon.getIncome()-tmp->Get_Price()>=0)
            {
                salon.Set_income(salon.getIncome()-tmp->Get_Price());
                salon += tmp;
            }
            else
            {
                QMessageBox::warning(this, "", "Nie wystarczające środki");
            }
        }
    }
    MainWindow2::Income();

}
void MainWindow2::Add_employee()
{
    AddPersonnel addperson;
    addperson.setModal(true);
    addperson.exec();
    if(addperson.on_Anuluj_mechanik_clicked()==false)
    {
        salon+=addperson.on_Akceptuj_mechanik_clicked();
    }
}
void MainWindow2::Sell_car()
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
                    shared_ptr<Vehicle> tmp =salon.getVehicles()[i];
                    int val =salon.getIncome()+tmp->Get_Price()*1.2;
                    salon.Set_income(val);
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
    MainWindow2::Income();
}
void MainWindow2::Motorcycles_owned()
{
    std::vector<shared_ptr<Vehicle>> motory;
    for(auto p : salon.getVehicles())
    if (typeid (*p) == typeid(Motorcycle)) motory.push_back((p));

    Dialog1 show(motory);
    show.setModal(true);
    show.exec();
}
void MainWindow2::Cars_owned()
{
    std::vector<shared_ptr<Vehicle>> samochody;
    for(auto p : salon.getVehicles())
    if (typeid (*p) == typeid(Car)) samochody.push_back((p));
    Dialog1 dial(samochody);
    dial.setModal(true);
    dial.exec();
}
void MainWindow2::Sell_motorcycle()
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
                    shared_ptr<Vehicle> tmp =salon.getVehicles()[i];
                    int val =salon.getIncome()+tmp->Get_Price()*1.2;
                    salon.Set_income(val);
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
    MainWindow2::Income();
}
void MainWindow2::Salon_info()
{
    Dialog1 dial(salon.getVehicles());
    dial.setModal(true);
    dial.exec();
}
void MainWindow2::on_Dodaj_samochod_clicked() {Add_car();}
void MainWindow2::on_Posiadane_samochodu_clicked() {Cars_owned();}
void MainWindow2::on_pushButton_clicked() {Add_motorcycle();}
void MainWindow2::on_Wyjcie_clicked() {MainWindow2::close();}
void MainWindow2::on_Sprzedaj_Auto_clicked() {Sell_car();}
void MainWindow2::on_Posiadane_motocykle_clicked() {Motorcycles_owned();}
void MainWindow2::on_stanKontsa_windowIconTextChanged(const QString &iconText) {ui->stanKontsa->setText(iconText);}
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
            QString qstr = QString::fromStdString(auta);
            out << qstr;

}
}

void MainWindow2::on_SprzedajMotocykl_clicked() {Sell_motorcycle();}
void MainWindow2::on_SalonInfo_clicked() {Salon_info();}
void MainWindow2::on_Zatrudnij_nowego_clicked() {Add_employee();}
void MainWindow2::on_Zatrudnieni_pracownicy_clicked()
{
    std::vector<shared_ptr<Person>> people;
    for(auto p : salon.getPersonnel()) {people.push_back((p));}
    ShowPersonnelWindow showpersonnel(people);
    showpersonnel.setModal(true);
    showpersonnel.exec();
    if(showpersonnel.on_radioMechanik_clicked()==true)
    {
        people.clear();
        for(auto m: salon.getPersonnel())
        {
            if(typeid(m)==typeid(Mechanic))
            {
               people.emplace_back(m);
            }
        }
        showpersonnel.showMethod(people);
    }


}
