#include "hellobutton.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HelloButton w;
    w.show();
    return a.exec();
}
