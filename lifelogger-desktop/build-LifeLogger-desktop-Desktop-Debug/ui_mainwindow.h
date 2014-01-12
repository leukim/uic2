/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_7;
    QLineEdit *lineEdit_2;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_8;
    QLineEdit *lineEdit_3;
    QSpacerItem *horizontalSpacer_6;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_15;
    QLineEdit *lineEdit_10;
    QSpacerItem *horizontalSpacer_12;
    QLineEdit *lineEdit_8;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_14;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_7;
    QLabel *label_13;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_5;
    QLabel *label_17;
    QLineEdit *lineEdit_13;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_16;
    QLineEdit *lineEdit_11;
    QSpacerItem *horizontalSpacer_14;
    QWidget *tab;
    QLabel *label_4;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *meal_name;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *spin_cal;
    QSlider *slider_cal;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *meal_veg;
    QCheckBox *meal_fat;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *meal_water;
    QRadioButton *meal_soft;
    QRadioButton *meal_alcohol;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *meal_save;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_err_drink;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(747, 472);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_2 = new QVBoxLayout(tab_3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_15);

        pushButton = new QPushButton(tab_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_8->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout_8);

        groupBox = new QGroupBox(tab_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFlat(false);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMaximumSize(QSize(45, 16777215));

        gridLayout_2->addWidget(lineEdit, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(479, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 2, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setEnabled(false);
        sizePolicy.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy);
        lineEdit_2->setMaximumSize(QSize(45, 16777215));

        gridLayout_2->addWidget(lineEdit_2, 1, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(479, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 1, 2, 2, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 2, 0, 2, 1);

        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setEnabled(false);
        sizePolicy.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy);
        lineEdit_3->setMaximumSize(QSize(45, 16777215));

        gridLayout_2->addWidget(lineEdit_3, 2, 1, 2, 1);

        horizontalSpacer_6 = new QSpacerItem(479, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 3, 2, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(tab_3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setFlat(false);
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_4->addWidget(label_12, 0, 0, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(484, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_11, 4, 2, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_7->addWidget(label_15);

        lineEdit_10 = new QLineEdit(groupBox_2);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setEnabled(false);
        sizePolicy.setHeightForWidth(lineEdit_10->sizePolicy().hasHeightForWidth());
        lineEdit_10->setSizePolicy(sizePolicy);
        lineEdit_10->setMaximumSize(QSize(45, 16777215));

        horizontalLayout_7->addWidget(lineEdit_10);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_12);


        gridLayout_4->addLayout(horizontalLayout_7, 0, 2, 2, 1);

        lineEdit_8 = new QLineEdit(groupBox_2);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setEnabled(false);
        sizePolicy.setHeightForWidth(lineEdit_8->sizePolicy().hasHeightForWidth());
        lineEdit_8->setSizePolicy(sizePolicy);
        lineEdit_8->setMaximumSize(QSize(45, 16777215));

        gridLayout_4->addWidget(lineEdit_8, 2, 1, 2, 1);

        horizontalSpacer_10 = new QSpacerItem(484, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_10, 2, 2, 2, 1);

        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_4->addWidget(label_14, 3, 0, 2, 1);

        lineEdit_9 = new QLineEdit(groupBox_2);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setEnabled(false);
        sizePolicy.setHeightForWidth(lineEdit_9->sizePolicy().hasHeightForWidth());
        lineEdit_9->setSizePolicy(sizePolicy);
        lineEdit_9->setMaximumSize(QSize(45, 16777215));

        gridLayout_4->addWidget(lineEdit_9, 4, 1, 1, 1);

        lineEdit_7 = new QLineEdit(groupBox_2);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setEnabled(false);
        sizePolicy.setHeightForWidth(lineEdit_7->sizePolicy().hasHeightForWidth());
        lineEdit_7->setSizePolicy(sizePolicy);
        lineEdit_7->setMaximumSize(QSize(45, 16777215));

        gridLayout_4->addWidget(lineEdit_7, 0, 1, 2, 1);

        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_4->addWidget(label_13, 1, 0, 2, 1);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(tab_3);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setFlat(false);
        gridLayout_5 = new QGridLayout(groupBox_3);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_17 = new QLabel(groupBox_3);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_5->addWidget(label_17, 0, 0, 1, 2);

        lineEdit_13 = new QLineEdit(groupBox_3);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));
        lineEdit_13->setEnabled(false);
        sizePolicy.setHeightForWidth(lineEdit_13->sizePolicy().hasHeightForWidth());
        lineEdit_13->setSizePolicy(sizePolicy);
        lineEdit_13->setMaximumSize(QSize(45, 16777215));

        gridLayout_5->addWidget(lineEdit_13, 0, 2, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(506, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_13, 0, 3, 2, 1);

        label_16 = new QLabel(groupBox_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setMinimumSize(QSize(0, 0));

        gridLayout_5->addWidget(label_16, 1, 0, 2, 1);

        lineEdit_11 = new QLineEdit(groupBox_3);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setEnabled(false);
        sizePolicy.setHeightForWidth(lineEdit_11->sizePolicy().hasHeightForWidth());
        lineEdit_11->setSizePolicy(sizePolicy);
        lineEdit_11->setMaximumSize(QSize(45, 16777215));

        gridLayout_5->addWidget(lineEdit_11, 1, 1, 2, 2);

        horizontalSpacer_14 = new QSpacerItem(506, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_14, 2, 3, 1, 1);


        verticalLayout_2->addWidget(groupBox_3);

        tabWidget->addTab(tab_3, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 50, 66, 21));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout = new QVBoxLayout(tab_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(tab_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        meal_name = new QLineEdit(tab_2);
        meal_name->setObjectName(QStringLiteral("meal_name"));

        gridLayout->addWidget(meal_name, 0, 1, 1, 1, Qt::AlignVCenter);

        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        spin_cal = new QSpinBox(tab_2);
        spin_cal->setObjectName(QStringLiteral("spin_cal"));
        spin_cal->setMaximum(2500);

        horizontalLayout_2->addWidget(spin_cal);

        slider_cal = new QSlider(tab_2);
        slider_cal->setObjectName(QStringLiteral("slider_cal"));
        slider_cal->setMaximum(2500);
        slider_cal->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(slider_cal);


        gridLayout->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        meal_veg = new QCheckBox(tab_2);
        meal_veg->setObjectName(QStringLiteral("meal_veg"));

        horizontalLayout_3->addWidget(meal_veg);

        meal_fat = new QCheckBox(tab_2);
        meal_fat->setObjectName(QStringLiteral("meal_fat"));

        horizontalLayout_3->addWidget(meal_fat);


        gridLayout->addLayout(horizontalLayout_3, 2, 1, 1, 1);

        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        meal_water = new QRadioButton(tab_2);
        meal_water->setObjectName(QStringLiteral("meal_water"));

        horizontalLayout_4->addWidget(meal_water);

        meal_soft = new QRadioButton(tab_2);
        meal_soft->setObjectName(QStringLiteral("meal_soft"));

        horizontalLayout_4->addWidget(meal_soft);

        meal_alcohol = new QRadioButton(tab_2);
        meal_alcohol->setObjectName(QStringLiteral("meal_alcohol"));

        horizontalLayout_4->addWidget(meal_alcohol);


        gridLayout->addLayout(horizontalLayout_4, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        meal_save = new QPushButton(tab_2);
        meal_save->setObjectName(QStringLiteral("meal_save"));

        horizontalLayout_5->addWidget(meal_save);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 178, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        label_err_drink = new QLabel(tab_2);
        label_err_drink->setObjectName(QStringLiteral("label_err_drink"));

        horizontalLayout_6->addWidget(label_err_drink);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_6);

        tabWidget->addTab(tab_2, QString());

        horizontalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(slider_cal, SIGNAL(valueChanged(int)), spin_cal, SLOT(setValue(int)));
        QObject::connect(spin_cal, SIGNAL(valueChanged(int)), slider_cal, SLOT(setValue(int)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "LifeLogger", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Share data", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Sleep", 0));
        label_5->setText(QApplication::translate("MainWindow", "Avg. hours per  night", 0));
        lineEdit->setText(QApplication::translate("MainWindow", "7.2", 0));
        label_7->setText(QApplication::translate("MainWindow", "Total hours last night", 0));
        lineEdit_2->setText(QApplication::translate("MainWindow", "8.1", 0));
        label_8->setText(QApplication::translate("MainWindow", "Sleep quality", 0));
        lineEdit_3->setText(QApplication::translate("MainWindow", "50%", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Meals", 0));
        label_12->setText(QApplication::translate("MainWindow", "Avg. meals per day", 0));
        label_15->setText(QApplication::translate("MainWindow", "Meal quality", 0));
        lineEdit_10->setText(QApplication::translate("MainWindow", "44%", 0));
        lineEdit_8->setText(QApplication::translate("MainWindow", "2769", 0));
        label_14->setText(QApplication::translate("MainWindow", "Healthy meals", 0));
        lineEdit_9->setText(QApplication::translate("MainWindow", "34%", 0));
        lineEdit_7->setText(QApplication::translate("MainWindow", "4.2", 0));
        label_13->setText(QApplication::translate("MainWindow", "Avg. calories per day", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Moves", 0));
        label_17->setText(QApplication::translate("MainWindow", "Avg. Km. per day", 0));
        lineEdit_13->setText(QApplication::translate("MainWindow", "8.1", 0));
        label_16->setText(QApplication::translate("MainWindow", "Average speed   ", 0));
        lineEdit_11->setText(QApplication::translate("MainWindow", "3.1", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Review", 0));
        label_4->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Analyze", 0));
        label->setText(QApplication::translate("MainWindow", "Meal name", 0));
        label_2->setText(QApplication::translate("MainWindow", "Calories", 0));
        meal_veg->setText(QApplication::translate("MainWindow", "Vegetarian", 0));
        meal_fat->setText(QApplication::translate("MainWindow", "Low-fat", 0));
        label_3->setText(QApplication::translate("MainWindow", "Drink", 0));
        meal_water->setText(QApplication::translate("MainWindow", "Water", 0));
        meal_soft->setText(QApplication::translate("MainWindow", "Soft Drink", 0));
        meal_alcohol->setText(QApplication::translate("MainWindow", "Alcoholic", 0));
        meal_save->setText(QApplication::translate("MainWindow", "Save", 0));
        label_err_drink->setText(QApplication::translate("MainWindow", "Please choose a drink!", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Input Meal", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
