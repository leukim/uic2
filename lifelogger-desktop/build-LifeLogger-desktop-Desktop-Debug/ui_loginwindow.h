/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QPushButton *pushButton;
    QLabel *label_error;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *text_username;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *text_password;

    void setupUi(QDialog *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QStringLiteral("LoginWindow"));
        LoginWindow->resize(281, 157);
        pushButton = new QPushButton(LoginWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(90, 120, 98, 31));
        label_error = new QLabel(LoginWindow);
        label_error->setObjectName(QStringLiteral("label_error"));
        label_error->setEnabled(true);
        label_error->setGeometry(QRect(55, 90, 191, 21));
        widget = new QWidget(LoginWindow);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 10, 220, 74));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        text_username = new QLineEdit(widget);
        text_username->setObjectName(QStringLiteral("text_username"));

        gridLayout->addWidget(text_username, 0, 1, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        text_password = new QLineEdit(widget);
        text_password->setObjectName(QStringLiteral("text_password"));

        gridLayout->addWidget(text_password, 1, 1, 1, 1);


        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QDialog *LoginWindow)
    {
        LoginWindow->setWindowTitle(QApplication::translate("LoginWindow", "Dialog", 0));
        pushButton->setText(QApplication::translate("LoginWindow", "Login", 0));
        label_error->setText(QApplication::translate("LoginWindow", "Please enter your username", 0));
        label->setText(QApplication::translate("LoginWindow", "Username", 0));
        label_2->setText(QApplication::translate("LoginWindow", "Password", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
