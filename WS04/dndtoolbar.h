#ifndef DNDTOOLBAR_H
#define DNDTOOLBAR_H

#include <QMainWindow>
#include <QListWidget>
#include <QList>
#include <QLabel>
#include "extendedqlistwidget.h"

class DnDToolBar : public QMainWindow
{
    Q_OBJECT

public:
    DnDToolBar(QWidget *parent = nullptr);
    ~DnDToolBar();

private:
    void initActions();
    QList<QListWidgetItem*> *item_list;
    QList<QListWidgetItem*> *tool_1_list;
    QList<QListWidgetItem*> *tool_2_list;
    QList<QListWidgetItem*> *tool_3_list;

    ExtendedQListWidget* all_tools;
    ExtendedQListWidget* tools_1;
    ExtendedQListWidget* tools_2;
    ExtendedQListWidget* tools_3;

public slots:
    void loadConfig();
    void saveConfig();
    void showHelp();

};
#endif // DNDTOOLBAR_H
