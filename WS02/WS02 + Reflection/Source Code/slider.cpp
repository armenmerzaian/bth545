#include "slider.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QGridLayout>

Slider::Slider(QWidget *parent)
    : QWidget(parent)
{
    QGridLayout *g_layout = new QGridLayout(this);

    setLayout(g_layout);

    slider = new QSlider(Qt::Horizontal);
    slider->setTickPosition(QSlider::TicksBelow);
    slider->setTickInterval(1);
    slider->setMinimum(0);
    slider->setMaximum(10);

    number = new QLabel("0");
    number->setAlignment(Qt::AlignCenter);
    word = new QLabel("zero");
    word->setAlignment(Qt::AlignCenter);
    QPushButton *minus = new QPushButton("-");
    QPushButton *plus = new QPushButton("+");

    g_layout->addWidget(slider, 1, 1, 1, 2);
    g_layout->addWidget(number, 1, 3);
    g_layout->addWidget(word, 2, 2);
    g_layout->addWidget(minus, 2, 1);
    g_layout->addWidget(plus, 2, 3);


    connect(slider, &QSlider::valueChanged, this, &Slider::updateNumber);
    connect(slider, &QSlider::valueChanged, this, &Slider::updateWord);
    connect(minus, &QPushButton::clicked, this, &Slider::onMinus);
    connect(plus, &QPushButton::clicked, this, &Slider::onPlus);

}

Slider::~Slider()
{

}

void Slider::onPlus(){
    int pos = slider->sliderPosition();
    if(pos == slider->maximum()){
        pos = slider->minimum();
        slider->setSliderPosition(pos);
    } else {
        slider->setSliderPosition(++pos);
    }
}

void Slider::onMinus(){
    int pos = slider->sliderPosition();
    if(pos == slider->minimum()){
        pos = slider->maximum();
        slider->setSliderPosition(pos);
    } else {
        slider->setSliderPosition(--pos);
    }
}

void Slider::updateNumber(int val){
    number->setText(QString::number(val));
}

void Slider::updateWord(int val){
    switch (val) {
    case 1:
        word->setText("one");
        break;
    case 2:
        word->setText("two");
        break;
    case 3:
        word->setText("three");
        break;
    case 4:
        word->setText("four");
        break;
    case 5:
        word->setText("five");
        break;
    case 6:
        word->setText("six");
        break;
    case 7:
        word->setText("seven");
        break;
    case 8:
        word->setText("eight");
        break;
    case 9:
        word->setText("nine");
        break;
    case 10:
        word->setText("ten");
        break;
    default:
        word->setText("zero");
        break;
    }
}

