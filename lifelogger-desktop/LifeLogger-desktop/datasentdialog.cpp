#include "datasentdialog.h"
#include "ui_datasentdialog.h"

DataSentDialog::DataSentDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DataSentDialog)
{
    ui->setupUi(this);
}

DataSentDialog::~DataSentDialog()
{
    delete ui;
}
