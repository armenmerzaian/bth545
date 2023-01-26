#ifndef HELLOBUTTON_H
#define HELLOBUTTON_H

#include <QWidget>

class HelloButton : public QWidget
{
    Q_OBJECT

public:
    HelloButton(QWidget *parent = nullptr);
    ~HelloButton();
};
#endif // HELLOBUTTON_H
