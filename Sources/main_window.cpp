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
    MainWindow::income();
    this->showFullScreen();
    this->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::income()
{
    int kasa = salon.get_income();
    string kasa1 = std::to_string(kasa);
    string stan = "Stan konta: ";
    QString konto = QString::fromStdString(stan+kasa1);
    MainWindow::on_cash_level_label_main_windowIconTextChanged(konto);
    MainWindow::on_cash_level_label_cars_windowIconTextChanged(konto);
    MainWindow::on_cash_level_label_motorcycles_windowIconTextChanged(konto);
}

template< class T>void MainWindow::add()
{
    T a;
    a.setModal(true);
    a.exec();
    if(a.on_cancel_clicked()==false)
    {
        shared_ptr<Vehicle> tmp = a.on_accept_clicked();
        if(tmp->get_price()<=0 || tmp->get_ID()<0)
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

void MainWindow::add_car()
{
   add<AddVehicle>();
}

void MainWindow::add_motorcycle()
{
    add<AddMotorcycle>();
}

void MainWindow::add_income(shared_ptr<Vehicle> tmp)
{
    if(salon.get_income()-tmp->get_price()>=0)

    {
        salon.set_income(salon.get_income()-tmp->get_price());
        salon += tmp;

        MainWindow::income();
    }
    else
    QMessageBox::warning(this, "", "Nie wystarczające środki");
}

void MainWindow::add_employee()
{
    AddPersonnel addperson;
    addperson.setModal(true);
    addperson.exec();
    if(addperson.on_cancel_mechanic_clicked()==false)
    {
        salon+=addperson.on_accept_mechanic_clicked();
    }
}

template<typename T>
void MainWindow::vehicles_owned()
{
    std::vector<shared_ptr<Vehicle>> Vehicles_;
    for(auto p : salon.get_vehicles())
        if (typeid (*p) == typeid(T)) Vehicles_.push_back((p));

    showVehicleWindow show(Vehicles_);
    show.setModal(true);
    show.exec();
}
void MainWindow::motorcycles_owned()
{
   vehicles_owned<Motorcycle>();
}

void MainWindow::cars_owned()
{
   vehicles_owned<Car>();
}

template< class T>
void MainWindow::sell()
{
    std::vector<shared_ptr<Vehicle>> vehicles_;
    for(auto p : salon.get_vehicles())
    if (typeid (*p) == typeid(T)) vehicles_.push_back((p));

    sell_helper(vehicles_);
    MainWindow::income();
}
void MainWindow::sell_helper(std::vector<shared_ptr<Vehicle>> vehicles_)
{
    deleteWindow deleteVehicle_(vehicles_);
    deleteVehicle_.setModal(true);
    if(vehicles_.size()>0)
    {
    deleteVehicle_.exec();
    std::stringstream buffer;
        for(unsigned int i=0; i<salon.get_vehicles().size(); i++)
        {
           buffer << *salon.get_vehicles()[i];
           if(buffer.str()==deleteVehicle_.on_delete_2_clicked()) delete_helper(i);

           buffer.str(std::string());
        }
    }
    else
    QMessageBox::warning(this, tr("Błąd"), tr("Brak motocykli do usunięcia."));   //(*this, tr("Problem"), tr("Nie ma pojazdów do usunięcia"));
}

void MainWindow::sell_car()
{
    sell<Car>();
}
void MainWindow::sell_motorcycle()
{
    sell<Motorcycle>();
}

void MainWindow::delete_helper(int i)
{
    shared_ptr<Vehicle> tmp =salon.get_vehicles()[i];
    int val = salon.get_income()+tmp->get_price()*1.2;
    salon.set_income(val);
    salon-=i;
}

void MainWindow::salon_info()
{
    showVehicleWindow show(salon.get_vehicles());
    show.setModal(true);
    show.exec();
}
void MainWindow::on_employees_button_clicked()
{
    std::vector<shared_ptr<Person>> people;
    for(auto p : salon.get_personnel()) {people.push_back((p));}
    ShowPersonnelWindow showpersonnel(people);
    showpersonnel.setModal(true);
    showpersonnel.exec();
    showpersonnel.show_method(people);

}
void MainWindow::on_save_to_file_button_clicked()
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

void MainWindow::on_cars_owned_button_clicked() {
    cars_owned();
}
void MainWindow::on_add_car_button_clicked() {
    add_car();
}
void MainWindow::on_sell_car_button_clicked() {
    sell_car();
}

void MainWindow::on_motorcycles_owned_button_clicked() {
    motorcycles_owned();
}
void MainWindow::on_add_motorcycles_button_clicked() {
    add_motorcycle();
}
void MainWindow::on_sell_motorcycle_button_clicked() {
    sell_motorcycle();
}

void MainWindow::on_salon_info_button_clicked() {
    salon_info();
}
void MainWindow::on_add_employee_button_clicked() {
    add_employee();
}
void MainWindow::on_exit_button_clicked() {
    MainWindow::close();
}

void MainWindow::on_cash_level_label_main_windowIconTextChanged(const QString &icon_text) {
    ui->cash_level_label_main->setText(icon_text);
}

void MainWindow::on_cash_level_label_cars_windowIconTextChanged(const QString &icon_text) {
    ui->cash_level_label_cars->setText(icon_text);
}

void MainWindow::on_cash_level_label_motorcycles_windowIconTextChanged(const QString &icon_text) {
    ui->cash_level_label_motorcycles->setText(icon_text);
}
