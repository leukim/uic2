#include "sharedatadialog.h"
#include "ui_sharedatadialog.h"

ShareDataDialog::ShareDataDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShareDataDialog)
{
    ui->setupUi(this);
    ui->label_err_select->hide();
}

ShareDataDialog::~ShareDataDialog()
{
    delete ui;
}

void ShareDataDialog::on_pushButton_clicked()
{
    if (ui->listWidget->selectedItems().empty()) {
        ui->label_err_select->show();
    } else {
        ui->label_err_select->hide();
        ui->listWidget->clearSelection();
        dsd.show();
        hide();
    }
}
