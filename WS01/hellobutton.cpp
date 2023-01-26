#include "hellobutton.h"
#include <QVBoxLayout>
#include <QPushButton>

HelloButton::HelloButton(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout *layout = new QVBoxLayout(this);
    QPushButton *button = new QPushButton("Hello BTH545");

    layout->addWidget(button);
    setLayout(layout);
}

HelloButton::~HelloButton()
{
}

