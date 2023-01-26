#include "extendedqlistwidget.h"
#include <QtWidgets>
#include <iostream>


ExtendedQListWidget::ExtendedQListWidget()
{
    setAcceptDrops(true);
    setDragEnabled(true);
    setDropIndicatorShown(true);
    setDefaultDropAction(Qt::MoveAction);
}


void ExtendedQListWidget::dropEvent(QDropEvent *event)
{
  if(!(entriesCount < entriesMax)) return;
  entriesCount++;
  QListWidget::dropEvent(event);
  this->selectionBehavior();
  emit droppedItem();
}

void ExtendedQListWidget::checkEntry()
{
    std::cout << this->currentRow() << std::endl;
}
