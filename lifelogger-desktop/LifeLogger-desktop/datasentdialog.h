#ifndef DATASENTDIALOG_H
#define DATASENTDIALOG_H

#include <QDialog>

namespace Ui {
class DataSentDialog;
}

class DataSentDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit DataSentDialog(QWidget *parent = 0);
    ~DataSentDialog();
    
private:
    Ui::DataSentDialog *ui;
};

#endif // DATASENTDIALOG_H
