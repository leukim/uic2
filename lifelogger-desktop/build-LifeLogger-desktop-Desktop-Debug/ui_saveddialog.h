/********************************************************************************
** Form generated from reading UI file 'saveddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEDDIALOG_H
#define UI_SAVEDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_SavedDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *SavedDialog)
    {
        if (SavedDialog->objectName().isEmpty())
            SavedDialog->setObjectName(QStringLiteral("SavedDialog"));
        SavedDialog->resize(234, 129);
        buttonBox = new QDialogButtonBox(SavedDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(70, 70, 91, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        label = new QLabel(SavedDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 181, 21));

        retranslateUi(SavedDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SavedDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SavedDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SavedDialog);
    } // setupUi

    void retranslateUi(QDialog *SavedDialog)
    {
        SavedDialog->setWindowTitle(QApplication::translate("SavedDialog", "Dialog", 0));
        label->setText(QApplication::translate("SavedDialog", "Your meal has been saved", 0));
    } // retranslateUi

};

namespace Ui {
    class SavedDialog: public Ui_SavedDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEDDIALOG_H
