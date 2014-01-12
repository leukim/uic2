#ifndef SHAREDATADIALOG_H
#define SHAREDATADIALOG_H

#include <QDialog>
#include "datasentdialog.h"

namespace Ui {
class ShareDataDialog;
}

class ShareDataDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit ShareDataDialog(QWidget *parent = 0);
    ~ShareDataDialog();
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::ShareDataDialog *ui;
    DataSentDialog dsd;
};

#endif // SHAREDATADIALOG_H
