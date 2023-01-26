#ifndef SLIDER_H
#define SLIDER_H

#include <QWidget>
#include <QSlider>
#include <QLabel>

class Slider : public QWidget
{
    Q_OBJECT

private:
    QSlider* slider;
    QLabel* number;
    QLabel* word;

public:
    Slider(QWidget *parent = nullptr);
    ~Slider();

public slots:
      void updateNumber(int val);
      void updateWord(int val);
      void onPlus();
      void onMinus();


};
#endif // SLIDER_H
