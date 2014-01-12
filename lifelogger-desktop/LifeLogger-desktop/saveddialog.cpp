#include "saveddialog.h"
#include "ui_saveddialog.h"

SavedDialog::SavedDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SavedDialog)
{
    ui->setupUi(this);
}

SavedDialog::~SavedDialog()
{
    delete ui;
}
