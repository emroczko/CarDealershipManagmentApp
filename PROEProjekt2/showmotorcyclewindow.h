#ifndef SHOWMOTORCYCLEWINDOW_H
#define SHOWMOTORCYCLEWINDOW_H

#include <QDialog>

namespace Ui {
class ShowMotorcycleWindow;
}

class ShowMotorcycleWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ShowMotorcycleWindow(QWidget *parent = 0);
    ~ShowMotorcycleWindow();

private:
    Ui::ShowMotorcycleWindow *ui;
};

#endif // SHOWMOTORCYCLEWINDOW_H
