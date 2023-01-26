#ifndef EXTENDEDQLISTWIDGET_H
#define EXTENDEDQLISTWIDGET_H


#include <QListWidget>
#include <QListWidgetItem>
#include <QList>

QT_BEGIN_NAMESPACE
class QDragEnterEvent;
class QDropEvent;
QT_END_NAMESPACE

class ExtendedQListWidget : public QListWidget
{
    Q_OBJECT
private:
    int entriesMax = 10;
    int entriesCount = 0;
    bool doIt = false;
    QList<QListWidgetItem*> *entriesList;

public:
    ExtendedQListWidget();
    void dropEvent(QDropEvent *event) override;
public slots:
     void checkEntry();
signals:
     void droppedItem();
};



#endif // EXTENDEDQLISTWIDGET_H
