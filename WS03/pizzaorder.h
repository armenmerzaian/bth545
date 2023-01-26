#ifndef PIZZAORDER_H
#define PIZZAORDER_H

#include <QMainWindow>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QRadioButton>
#include <QCheckBox>
#include <QDialog>
#include <QVBoxLayout>
#include <QGroupBox>

QT_BEGIN_NAMESPACE
namespace Ui { class PizzaOrder; }
QT_END_NAMESPACE

class PizzaOrder : public QMainWindow
{
    Q_OBJECT

public:
    PizzaOrder(QWidget *parent = nullptr);
    ~PizzaOrder();

    void initUi(PizzaOrder *current);
    void initModalUi();

private:

    Ui::PizzaOrder *ui;

    QList<QCheckBox*> all_checkboxes;
    QList<QRadioButton*> all_radios;
    QList<QLineEdit*>all_textInput;
    QList<QCheckBox*> selected_toppings;


    QDialog *orderSummary;

    QGroupBox *gp_info;
    QGroupBox *gp_size;
    QGroupBox *gp_toppings;

    QLineEdit *in_name;
    QLineEdit *in_street;
    QLineEdit *in_apt;
    QLineEdit *in_city;
    QLineEdit *in_postal;

    QRadioButton *rb_small;
    QRadioButton *rb_medium;
    QRadioButton *rb_large;

    QCheckBox *cb_ham;
    QCheckBox *cb_pepperoni;
    QCheckBox *cb_peppers;
    QCheckBox *cb_mushroom;
    QCheckBox *cb_pineapple;
    QCheckBox *cb_onion;
    QCheckBox *cb_artichoke;
    QCheckBox *cb_olive;
    QCheckBox *cb_cheese;

    QPushButton *resetBtn;
    QPushButton *orderBtn;
    QPushButton *cancelBtn;

    QPushButton *btn_editSummary;
    QPushButton *btn_submitSummary;

public slots:
    void resetSelection();
    void submitOrder();
    void closeModal();
    void closeApp();

    void maxThree();

signals:

};
#endif // PIZZAORDER_H
