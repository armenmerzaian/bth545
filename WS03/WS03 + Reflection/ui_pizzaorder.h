/********************************************************************************
** Form generated from reading UI file 'pizzaorder.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PIZZAORDER_H
#define UI_PIZZAORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PizzaOrder
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *lbl_header;
    QGroupBox *group_info;
    QGridLayout *gridLayout;
    QLineEdit *txt_street;
    QLabel *lbl_name;
    QLineEdit *txt_name;
    QLineEdit *txt_city;
    QLabel *lbl_postal;
    QLabel *lbl_city;
    QLineEdit *txt_apt;
    QLineEdit *txt_postal;
    QLabel *lbl_apt;
    QLabel *lbl_street;
    QLabel *label;
    QGroupBox *group_size;
    QVBoxLayout *verticalLayout;
    QRadioButton *rd_small;
    QRadioButton *rd_medium;
    QRadioButton *rd_large;
    QGroupBox *group_toppings;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *ck_ham;
    QCheckBox *ck_pepperoni;
    QCheckBox *ck_peppers;
    QCheckBox *ck_mushroom;
    QCheckBox *ck_pineapple;
    QCheckBox *ck_onion;
    QCheckBox *ck_artichoke;
    QCheckBox *ck_olive;
    QCheckBox *ck_cheese;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_order;
    QPushButton *btn_cancel;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_reset;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PizzaOrder)
    {
        if (PizzaOrder->objectName().isEmpty())
            PizzaOrder->setObjectName(QString::fromUtf8("PizzaOrder"));
        PizzaOrder->resize(503, 818);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PizzaOrder->sizePolicy().hasHeightForWidth());
        PizzaOrder->setSizePolicy(sizePolicy);
        PizzaOrder->setStyleSheet(QString::fromUtf8("#{\n"
"	background-color: white;\n"
"}"));
        centralwidget = new QWidget(PizzaOrder);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lbl_header = new QLabel(centralwidget);
        lbl_header->setObjectName(QString::fromUtf8("lbl_header"));
        QFont font;
        font.setPointSize(28);
        font.setBold(true);
        lbl_header->setFont(font);

        verticalLayout_2->addWidget(lbl_header);

        group_info = new QGroupBox(centralwidget);
        group_info->setObjectName(QString::fromUtf8("group_info"));
        QFont font1;
        font1.setPointSize(21);
        group_info->setFont(font1);
        group_info->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(group_info);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        txt_street = new QLineEdit(group_info);
        txt_street->setObjectName(QString::fromUtf8("txt_street"));
        QFont font2;
        font2.setBold(false);
        font2.setItalic(false);
        txt_street->setFont(font2);
        txt_street->setStyleSheet(QString::fromUtf8("#txt_street{\n"
"	padding: 6px 0px;\n"
"	height: 20px;\n"
"	border: 1px solid #CCCCCC;\n"
"	font: 13px;\n"
"	border-style: solid;\n"
"	border-radius: 5px;\n"
"}"));

        gridLayout->addWidget(txt_street, 1, 1, 1, 1);

        lbl_name = new QLabel(group_info);
        lbl_name->setObjectName(QString::fromUtf8("lbl_name"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lbl_name->sizePolicy().hasHeightForWidth());
        lbl_name->setSizePolicy(sizePolicy2);
        QFont font3;
        font3.setPointSize(13);
        lbl_name->setFont(font3);

        gridLayout->addWidget(lbl_name, 0, 0, 1, 1);

        txt_name = new QLineEdit(group_info);
        txt_name->setObjectName(QString::fromUtf8("txt_name"));
        txt_name->setStyleSheet(QString::fromUtf8("#txt_name{\n"
"	padding: 6px 0px;\n"
"	height: 20px;\n"
"	border: 1px solid #CCCCCC;\n"
"	font: 13px;\n"
"	border-style: solid;\n"
"	border-radius: 5px;\n"
"}"));

        gridLayout->addWidget(txt_name, 0, 1, 1, 3);

        txt_city = new QLineEdit(group_info);
        txt_city->setObjectName(QString::fromUtf8("txt_city"));
        txt_city->setStyleSheet(QString::fromUtf8("#txt_city{\n"
"	padding: 6px 0px;\n"
"	height: 20px;\n"
"	border: 1px solid #CCCCCC;\n"
"	font: 13px;\n"
"	border-style: solid;\n"
"	border-radius: 5px;\n"
"}"));

        gridLayout->addWidget(txt_city, 2, 1, 1, 1);

        lbl_postal = new QLabel(group_info);
        lbl_postal->setObjectName(QString::fromUtf8("lbl_postal"));
        lbl_postal->setFont(font3);

        gridLayout->addWidget(lbl_postal, 2, 2, 1, 1);

        lbl_city = new QLabel(group_info);
        lbl_city->setObjectName(QString::fromUtf8("lbl_city"));
        lbl_city->setFont(font3);

        gridLayout->addWidget(lbl_city, 2, 0, 1, 1);

        txt_apt = new QLineEdit(group_info);
        txt_apt->setObjectName(QString::fromUtf8("txt_apt"));
        txt_apt->setStyleSheet(QString::fromUtf8("#txt_apt{\n"
"	padding: 6px 0px;\n"
"	height: 20px;\n"
"	border: 1px solid #CCCCCC;\n"
"	font: 13px;\n"
"	border-style: solid;\n"
"	border-radius: 5px;\n"
"}"));

        gridLayout->addWidget(txt_apt, 1, 3, 1, 1);

        txt_postal = new QLineEdit(group_info);
        txt_postal->setObjectName(QString::fromUtf8("txt_postal"));
        txt_postal->setStyleSheet(QString::fromUtf8("#txt_postal{\n"
"	padding: 6px 0px;\n"
"	height: 20px;\n"
"	border: 1px solid #CCCCCC;\n"
"	font: 13px;\n"
"	border-style: solid;\n"
"	border-radius: 5px;\n"
"}"));

        gridLayout->addWidget(txt_postal, 2, 3, 1, 1);

        lbl_apt = new QLabel(group_info);
        lbl_apt->setObjectName(QString::fromUtf8("lbl_apt"));
        lbl_apt->setFont(font3);

        gridLayout->addWidget(lbl_apt, 1, 2, 1, 1);

        lbl_street = new QLabel(group_info);
        lbl_street->setObjectName(QString::fromUtf8("lbl_street"));
        lbl_street->setFont(font3);

        gridLayout->addWidget(lbl_street, 1, 0, 1, 1);

        label = new QLabel(group_info);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 3, 3, 1, 1);


        verticalLayout_2->addWidget(group_info);

        group_size = new QGroupBox(centralwidget);
        group_size->setObjectName(QString::fromUtf8("group_size"));
        group_size->setFont(font1);
        verticalLayout = new QVBoxLayout(group_size);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        rd_small = new QRadioButton(group_size);
        rd_small->setObjectName(QString::fromUtf8("rd_small"));
        rd_small->setFont(font3);
        rd_small->setStyleSheet(QString::fromUtf8(""));
        rd_small->setChecked(true);
        rd_small->setAutoExclusive(true);

        verticalLayout->addWidget(rd_small);

        rd_medium = new QRadioButton(group_size);
        rd_medium->setObjectName(QString::fromUtf8("rd_medium"));
        rd_medium->setFont(font3);
        rd_medium->setStyleSheet(QString::fromUtf8("margin-top: 15px;"));
        rd_medium->setAutoExclusive(true);

        verticalLayout->addWidget(rd_medium);

        rd_large = new QRadioButton(group_size);
        rd_large->setObjectName(QString::fromUtf8("rd_large"));
        rd_large->setFont(font3);
        rd_large->setStyleSheet(QString::fromUtf8("margin-top: 15px;"));
        rd_large->setAutoExclusive(true);

        verticalLayout->addWidget(rd_large);


        verticalLayout_2->addWidget(group_size);

        group_toppings = new QGroupBox(centralwidget);
        group_toppings->setObjectName(QString::fromUtf8("group_toppings"));
        group_toppings->setFont(font1);
        group_toppings->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_3 = new QVBoxLayout(group_toppings);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        ck_ham = new QCheckBox(group_toppings);
        ck_ham->setObjectName(QString::fromUtf8("ck_ham"));
        ck_ham->setFont(font3);

        verticalLayout_3->addWidget(ck_ham);

        ck_pepperoni = new QCheckBox(group_toppings);
        ck_pepperoni->setObjectName(QString::fromUtf8("ck_pepperoni"));
        ck_pepperoni->setFont(font3);
        ck_pepperoni->setStyleSheet(QString::fromUtf8("margin-top: 10px;"));

        verticalLayout_3->addWidget(ck_pepperoni);

        ck_peppers = new QCheckBox(group_toppings);
        ck_peppers->setObjectName(QString::fromUtf8("ck_peppers"));
        ck_peppers->setFont(font3);
        ck_peppers->setStyleSheet(QString::fromUtf8("margin-top: 10px;"));

        verticalLayout_3->addWidget(ck_peppers);

        ck_mushroom = new QCheckBox(group_toppings);
        ck_mushroom->setObjectName(QString::fromUtf8("ck_mushroom"));
        ck_mushroom->setFont(font3);
        ck_mushroom->setStyleSheet(QString::fromUtf8("margin-top: 10px;"));

        verticalLayout_3->addWidget(ck_mushroom);

        ck_pineapple = new QCheckBox(group_toppings);
        ck_pineapple->setObjectName(QString::fromUtf8("ck_pineapple"));
        ck_pineapple->setFont(font3);
        ck_pineapple->setStyleSheet(QString::fromUtf8("margin-top: 10px;"));

        verticalLayout_3->addWidget(ck_pineapple);

        ck_onion = new QCheckBox(group_toppings);
        ck_onion->setObjectName(QString::fromUtf8("ck_onion"));
        ck_onion->setFont(font3);
        ck_onion->setStyleSheet(QString::fromUtf8("margin-top: 10px;"));

        verticalLayout_3->addWidget(ck_onion);

        ck_artichoke = new QCheckBox(group_toppings);
        ck_artichoke->setObjectName(QString::fromUtf8("ck_artichoke"));
        ck_artichoke->setFont(font3);
        ck_artichoke->setStyleSheet(QString::fromUtf8("margin-top: 10px;"));

        verticalLayout_3->addWidget(ck_artichoke);

        ck_olive = new QCheckBox(group_toppings);
        ck_olive->setObjectName(QString::fromUtf8("ck_olive"));
        ck_olive->setFont(font3);
        ck_olive->setStyleSheet(QString::fromUtf8("margin-top: 10px;"));

        verticalLayout_3->addWidget(ck_olive);

        ck_cheese = new QCheckBox(group_toppings);
        ck_cheese->setObjectName(QString::fromUtf8("ck_cheese"));
        ck_cheese->setFont(font3);
        ck_cheese->setStyleSheet(QString::fromUtf8("margin-top: 10px;"));

        verticalLayout_3->addWidget(ck_cheese);


        verticalLayout_2->addWidget(group_toppings);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_order = new QPushButton(centralwidget);
        btn_order->setObjectName(QString::fromUtf8("btn_order"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btn_order->sizePolicy().hasHeightForWidth());
        btn_order->setSizePolicy(sizePolicy3);
        btn_order->setStyleSheet(QString::fromUtf8("QPushButton#btn_order {\n"
"    background-color: rgb(255, 147, 0);\n"
"	width: 109px;\n"
"	height: 40px;\n"
"	border-style: solid;\n"
"	border-radius: 20px;\n"
"	font: bold 14px;\n"
"	color: white;\n"
"}\n"
"QPushButton#btn_order:pressed {\n"
"    background-color: rgba(255, 147, 0, 204);\n"
"    border-style: solid;\n"
"}"));

        horizontalLayout->addWidget(btn_order, 0, Qt::AlignLeft);

        btn_cancel = new QPushButton(centralwidget);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        sizePolicy3.setHeightForWidth(btn_cancel->sizePolicy().hasHeightForWidth());
        btn_cancel->setSizePolicy(sizePolicy3);
        btn_cancel->setStyleSheet(QString::fromUtf8("QPushButton#btn_cancel {\n"
"    background-color: rgb(255, 255, 255);\n"
"	width: 126px;\n"
"	height: 38px;\n"
"	border-style: inset;\n"
"	border-width: 1px;\n"
"	border-color: black;\n"
"	border-radius: 20px;\n"
"	font: 15px;\n"
"	color: black;\n"
"}\n"
"QPushButton#btn_cancel:pressed {\n"
"    color: rgb(145, 145, 145);\n"
"    border-style: inset;\n"
"	border-color: rgb(145, 145, 145);\n"
"}"));

        horizontalLayout->addWidget(btn_cancel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_reset = new QPushButton(centralwidget);
        btn_reset->setObjectName(QString::fromUtf8("btn_reset"));
        sizePolicy3.setHeightForWidth(btn_reset->sizePolicy().hasHeightForWidth());
        btn_reset->setSizePolicy(sizePolicy3);
        btn_reset->setStyleSheet(QString::fromUtf8("QPushButton#btn_reset {\n"
"   	background: none;\n"
"	color: #3D8BFD;\n"
"	border: none;\n"
"}\n"
"QPushButton#btn_reset:pressed {\n"
"   	background: none;\n"
"	color: #005fc9;\n"
"}"));

        horizontalLayout->addWidget(btn_reset, 0, Qt::AlignLeft);


        verticalLayout_2->addLayout(horizontalLayout);

        PizzaOrder->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PizzaOrder);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 503, 24));
        PizzaOrder->setMenuBar(menubar);
        statusbar = new QStatusBar(PizzaOrder);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        PizzaOrder->setStatusBar(statusbar);
        QWidget::setTabOrder(txt_name, txt_street);
        QWidget::setTabOrder(txt_street, txt_apt);
        QWidget::setTabOrder(txt_apt, txt_city);
        QWidget::setTabOrder(txt_city, txt_postal);
        QWidget::setTabOrder(txt_postal, rd_small);
        QWidget::setTabOrder(rd_small, rd_medium);
        QWidget::setTabOrder(rd_medium, rd_large);
        QWidget::setTabOrder(rd_large, ck_pepperoni);
        QWidget::setTabOrder(ck_pepperoni, ck_ham);
        QWidget::setTabOrder(ck_ham, ck_peppers);
        QWidget::setTabOrder(ck_peppers, ck_mushroom);
        QWidget::setTabOrder(ck_mushroom, ck_pineapple);
        QWidget::setTabOrder(ck_pineapple, ck_onion);
        QWidget::setTabOrder(ck_onion, ck_artichoke);
        QWidget::setTabOrder(ck_artichoke, ck_olive);
        QWidget::setTabOrder(ck_olive, ck_cheese);
        QWidget::setTabOrder(ck_cheese, btn_order);
        QWidget::setTabOrder(btn_order, btn_cancel);
        QWidget::setTabOrder(btn_cancel, btn_reset);

        retranslateUi(PizzaOrder);

        QMetaObject::connectSlotsByName(PizzaOrder);
    } // setupUi

    void retranslateUi(QMainWindow *PizzaOrder)
    {
        PizzaOrder->setWindowTitle(QCoreApplication::translate("PizzaOrder", "PizzaOrder", nullptr));
        lbl_header->setText(QCoreApplication::translate("PizzaOrder", "Pizza Ordering Application", nullptr));
        group_info->setTitle(QCoreApplication::translate("PizzaOrder", "Personal Information", nullptr));
        lbl_name->setText(QCoreApplication::translate("PizzaOrder", "Name *", nullptr));
        lbl_postal->setText(QCoreApplication::translate("PizzaOrder", "Postal Code *", nullptr));
        lbl_city->setText(QCoreApplication::translate("PizzaOrder", "City *", nullptr));
        lbl_apt->setText(QCoreApplication::translate("PizzaOrder", "Apt. Number", nullptr));
        lbl_street->setText(QCoreApplication::translate("PizzaOrder", "Street *", nullptr));
        label->setText(QCoreApplication::translate("PizzaOrder", "*Required", nullptr));
        group_size->setTitle(QCoreApplication::translate("PizzaOrder", "Select Size of Pizza", nullptr));
        rd_small->setText(QCoreApplication::translate("PizzaOrder", "Small", nullptr));
        rd_medium->setText(QCoreApplication::translate("PizzaOrder", "Medium", nullptr));
        rd_large->setText(QCoreApplication::translate("PizzaOrder", "Large", nullptr));
        group_toppings->setTitle(QCoreApplication::translate("PizzaOrder", "Select Toppings", nullptr));
        ck_ham->setText(QCoreApplication::translate("PizzaOrder", "Ham", nullptr));
        ck_pepperoni->setText(QCoreApplication::translate("PizzaOrder", "Pepperoni", nullptr));
        ck_peppers->setText(QCoreApplication::translate("PizzaOrder", "Green Peppers", nullptr));
        ck_mushroom->setText(QCoreApplication::translate("PizzaOrder", "Mushroom", nullptr));
        ck_pineapple->setText(QCoreApplication::translate("PizzaOrder", "Pineapple", nullptr));
        ck_onion->setText(QCoreApplication::translate("PizzaOrder", "Onion", nullptr));
        ck_artichoke->setText(QCoreApplication::translate("PizzaOrder", "Artichoke", nullptr));
        ck_olive->setText(QCoreApplication::translate("PizzaOrder", "Black Olive", nullptr));
        ck_cheese->setText(QCoreApplication::translate("PizzaOrder", "Extra Cheese", nullptr));
        btn_order->setText(QCoreApplication::translate("PizzaOrder", "Order Now", nullptr));
        btn_cancel->setText(QCoreApplication::translate("PizzaOrder", "Cancel Order", nullptr));
        btn_reset->setText(QCoreApplication::translate("PizzaOrder", "Reset all selections", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PizzaOrder: public Ui_PizzaOrder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PIZZAORDER_H
