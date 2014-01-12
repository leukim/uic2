#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label_err_drink->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_meal_save_clicked()
{
    if (ui->meal_name->text().toStdString() == "") {
        ui->label_err_drink->setText("Enter a meal name");
        ui->label_err_drink->show();
    } else if (!(ui->meal_alcohol->isChecked() || ui->meal_soft->isChecked() || ui->meal_water->isChecked())) {
        ui->label_err_drink->setText("Choose a drink");
        ui->label_err_drink->show();
    } else {
        ui->label_err_drink->hide();
        d.show();
        ui->meal_name->setText("");

        ui->meal_alcohol->setAutoExclusive(false);
        ui->meal_soft->setAutoExclusive(false);
        ui->meal_water->setAutoExclusive(false);

        ui->meal_alcohol->setChecked(false);
        ui->meal_soft->setChecked(false);
        ui->meal_water->setChecked(false);

        ui->meal_alcohol->setAutoExclusive(true);
        ui->meal_soft->setAutoExclusive(true);
        ui->meal_water->setAutoExclusive(true);

        ui->meal_fat->setChecked(false);
        ui->meal_veg->setChecked(false);

        ui->slider_cal->setValue(0);
    }
}
