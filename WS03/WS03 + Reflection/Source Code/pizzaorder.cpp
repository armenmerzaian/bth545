#include "pizzaorder.h"
#include "ui_pizzaorder.h"
#include <QMessageBox>

PizzaOrder::PizzaOrder(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PizzaOrder)
{

    //initialize ui
    initUi(this);
    //initialize modal ui
    initModalUi();


    //populate textInputs, checkboxes, radioboxes lists
    all_checkboxes = gp_toppings->findChildren<QCheckBox*>();
    all_radios = gp_size->findChildren<QRadioButton*>();
    all_textInput = gp_info->findChildren<QLineEdit*>();

    //connect main app buttons
    connect(resetBtn, &QPushButton::clicked, this, &PizzaOrder::resetSelection);
    connect(cancelBtn, &QPushButton::clicked, this, &PizzaOrder::closeApp);
    connect(orderBtn, &QPushButton::clicked, this, &PizzaOrder::submitOrder);


    //error checking
    connect(rb_large, &QRadioButton::toggled, cb_cheese, &QCheckBox::setDisabled);
    connect(cb_cheese, &QCheckBox::toggled, rb_large, &QRadioButton::setDisabled);

    for (auto n : all_checkboxes){
        connect(n, &QCheckBox::clicked, this, &PizzaOrder::maxThree);
    }





}

PizzaOrder::~PizzaOrder()
{
    delete ui;
}

void PizzaOrder::initUi(PizzaOrder *current){
    ui->setupUi(current);

    //groups
    gp_info = this->ui->group_info;
    gp_size = this->ui->group_size;
    gp_toppings = this->ui->group_toppings;

    //textLine
    in_name = this->ui->txt_name;
    in_street = this->ui->txt_street;
    in_apt = this->ui->txt_apt;
    in_city = this->ui->txt_city;
    in_postal = this->ui->txt_postal;

    //radio button
    rb_small = this->ui->rd_small;
    rb_medium = this->ui->rd_medium;
    rb_large = this->ui->rd_large;

    //check boxes
    cb_ham = this->ui->ck_ham;
    cb_pepperoni = this->ui->ck_pepperoni;
    cb_peppers = this->ui->ck_peppers;
    cb_mushroom = this->ui->ck_mushroom;
    cb_pineapple = this->ui->ck_pineapple;
    cb_onion = this->ui->ck_onion;
    cb_artichoke = this->ui->ck_artichoke;
    cb_olive = this->ui->ck_olive;
    cb_cheese = this->ui->ck_cheese;

    //buttons
    resetBtn = this->ui->btn_reset;
    orderBtn = this->ui->btn_order;
    cancelBtn = this->ui->btn_cancel;
}
void PizzaOrder::initModalUi(){

    //create new dialog
    orderSummary = new QDialog(this);

    /* LAYOUT TREE
     *
     *                                                 order_name, order_street, order_apt, order_city, order_postal
     *                                               /
     *                              v_layout_summary
     *                            /                  \
     *                  gp_summary                     h_layout_summary
     *                /                                                 \
     *    orderLayout                                                     QLabel("Size: "), QLabel("Toppings: ")
     *                \
     *                  h_layout_btns
     *                                \
     *                                  btn_submitSummary, btn_editSummary
     *
     */

    //initialize modal QObjects
    QVBoxLayout *orderLayout = new QVBoxLayout(orderSummary);
        QGroupBox *gp_summary = new QGroupBox("Order Summary");
            QVBoxLayout *v_layout_summary = new QVBoxLayout();
            v_layout_summary->setObjectName("v_layout_summary");
                QLabel *order_name = new QLabel("Order Name: ");
                order_name->setObjectName("order_name");
                QLabel *order_street = new QLabel("Address: ");
                order_street->setObjectName("order_street");
                QLabel *order_apt = new QLabel("Apt#: ");
                order_apt->setObjectName("order_apt");
                QLabel *order_city = new QLabel("City: ");
                order_city->setObjectName("order_city");
                QLabel *order_postal = new QLabel("Postal Code: ");
                order_postal->setObjectName("order_postal");

        QHBoxLayout *h_layout_btns = new QHBoxLayout();
             btn_submitSummary = new QPushButton("Confirm and Close");
             btn_submitSummary->setObjectName("btn_submitSummary");
             btn_editSummary = new QPushButton("Edit Order");
             btn_editSummary->setObjectName("btn_editSummary");

    //layout QObjects
    orderLayout->addWidget(gp_summary);
    orderLayout->addLayout(h_layout_btns);

        gp_summary->setLayout(v_layout_summary);
            v_layout_summary->addWidget(order_name);
            v_layout_summary->addWidget(order_street);
            v_layout_summary->addWidget(order_apt);
            v_layout_summary->addWidget(order_city);
            v_layout_summary->addWidget(order_postal);

        h_layout_btns->addWidget(btn_submitSummary);
        h_layout_btns->addWidget(btn_editSummary);

        //connect buttons
        connect(btn_editSummary, &QPushButton::clicked, this, &PizzaOrder::closeModal);
        connect(btn_submitSummary, &QPushButton::clicked, this, &PizzaOrder::closeApp);

        //style buttons
        btn_submitSummary->setStyleSheet(
            "QPushButton#btn_submitSummary{"
            "background-color: rgb(255, 147, 0);"
            "width: 145px;"
            "height: 40px;"
            "border-style: solid;"
            "border-radius: 20px;"
            "font: bold 14px;"
            "color: white;"
            "}"
            "QPushButton#btn_submitSummary:pressed{"
            "background-color: rgba(255, 147, 0, 204);"
            "}"
        );

        btn_editSummary->setStyleSheet(
             "QPushButton#btn_editSummary{"
             "background-color: rgb(255, 255, 255);"
             "width: 109px;"
             "height: 38px;"
             "border-style: inset;"
             "border-width: 1px;"
             "border-color: black;"
             "border-radius: 20px;"
             "font: 14px;"
             "color: black;"
             "}"
             "QPushButton#btn_editSummary:pressed{"
             "color: rgb(145, 145, 145);"
             "border-style: inset;"
             "border-color: rgb(145, 145, 145);"
             "}"

         );

        gp_summary->setStyleSheet("font: 18px");

}

//effect: prevents more than 3 checkboxes being selected
void PizzaOrder::maxThree(){
    //on every checkbox click

    //loop through all the checkboxes
    //if a checkbox is checked, not in the list, and the list has space -> add to list
    //else if a checkbox that was in the list is not unchecked -> remove from list
    for(auto n : all_checkboxes){
        if(n->isChecked() && !selected_toppings.contains(n) && selected_toppings.size() <= 3){
           selected_toppings.push_back(n);
        } else if(!n->isChecked() && selected_toppings.contains(n)){
            selected_toppings.removeAt(selected_toppings.indexOf(n));
        }
    }

    //if the list has reached its max size
    //loop through all the checkboxes -> disabled those not checked
    //but if the an element got unchecked -> enable all those not checked
    if(selected_toppings.size() >= 3){
        for(auto n : all_checkboxes){
            if(!n->isChecked()){
                n->setDisabled(true);
            }
        }
    } else {
        for(auto n : all_checkboxes){
            n->setDisabled(false);
        }
    }
}

void PizzaOrder::submitOrder(){
    if(in_name->text() == "" || in_city->text() == "" || in_street->text() == "" || in_postal->text() == ""){
       QMessageBox *error = new QMessageBox();
       error->setText("Please Fill Required Field(s)!");
       error->show();
       return;
    }

    //populate modal
    orderSummary->findChild<QLabel*>("order_name")->setText("Order Name:    " + in_name->text());
    orderSummary->findChild<QLabel*>("order_street")->setText("Street:  " + in_street->text());
    orderSummary->findChild<QLabel*>("order_apt")->setText("Apt#:   " + in_apt->text());
    orderSummary->findChild<QLabel*>("order_city")->setText("City:  " + in_city->text());
    orderSummary->findChild<QLabel*>("order_postal")->setText("Postal Code:    " + in_postal->text());

    orderSummary->findChild<QVBoxLayout *>("v_layout_summary")->addWidget(new QLabel("Size:    "));
    for(auto n : all_radios){
        if(n->isChecked()){
           orderSummary->findChild<QVBoxLayout *>("v_layout_summary")->addWidget(new QLabel(n->text()));
        }
    }
    orderSummary->findChild<QVBoxLayout *>("v_layout_summary")->addWidget(new QLabel("Toppings:    "));
    for(auto n : selected_toppings){
        orderSummary->findChild<QVBoxLayout *>("v_layout_summary")->addWidget(new QLabel(n->text()));
    }

    //show modal
    orderSummary->open();
}

void PizzaOrder::closeApp(){
    closeModal();
    this->close();
}

void PizzaOrder::closeModal()
{
    orderSummary->close();
}

void PizzaOrder::resetSelection()
{

    //Reset Radio Buttons
    for(auto& n : all_radios){
        if(n->isChecked()){
            n->setAutoExclusive(false);
            n->setChecked(false);
            n->setAutoExclusive(true);
        }
    }

    //Reset Check Boxes
    for(auto& n : all_checkboxes){
        n->setChecked(false);
        n->setDisabled(false);
    }

}
