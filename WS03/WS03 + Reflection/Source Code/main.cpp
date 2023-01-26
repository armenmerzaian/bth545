#include "pizzaorder.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PizzaOrder w;
    w.show();
    return a.exec();
}
