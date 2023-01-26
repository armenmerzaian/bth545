#include "dndtoolbar.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DnDToolBar w;
    w.show();
    return a.exec();
}
