#include "dndtoolbar.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QMenuBar>
#include <QMenu>
#include <QStringListModel>
#include <iostream>
#include <QDrag>

DnDToolBar::DnDToolBar(QWidget *parent)
    : QMainWindow(parent)
{
    this->setWindowTitle("WS04 Drag and Drop");
    initActions();


    QWidget *central = new QWidget();
    QHBoxLayout *h_layout = new QHBoxLayout();
    QVBoxLayout *v_layout = new QVBoxLayout();
    central->setLayout(h_layout);
    setCentralWidget(central);

    QMenuBar *menubar = menuBar();
    menubar->setNativeMenuBar(false);
    QAction *load_config = new QAction("&Load Config");
    QAction *save_config = new QAction("&Save Config");
    QAction *help = new QAction("&Help");
    menubar->addAction(load_config);
    menubar->addAction(save_config);
    menubar->addAction(help);

    tool_1_list = new QList<QListWidgetItem*>;
    tool_2_list = new QList<QListWidgetItem*>;
    tool_3_list = new QList<QListWidgetItem*>;

    all_tools = new ExtendedQListWidget();
    for(int i = 0; i<item_list->length(); i++){
        all_tools->addItem(item_list->at(i));
    }
    all_tools->setDefaultDropAction(Qt::CopyAction);

    tools_1 = new ExtendedQListWidget();
    tools_2 = new ExtendedQListWidget();
    tools_3 = new ExtendedQListWidget();


    h_layout->addWidget(all_tools);
    h_layout->addLayout(v_layout);
    v_layout->addWidget(tools_1);
    v_layout->addWidget(tools_2);
    v_layout->addWidget(tools_3);



    connect(load_config, &QAction::triggered, this, &DnDToolBar::loadConfig);
    connect(save_config, &QAction::triggered, this, &DnDToolBar::saveConfig);
    connect(help, &QAction::triggered, this, &DnDToolBar::showHelp);

    connect(tools_1, &ExtendedQListWidget::droppedItem, tools_1, &ExtendedQListWidget::checkEntry);
    connect(tools_2, &ExtendedQListWidget::droppedItem, tools_2, &ExtendedQListWidget::checkEntry);
    connect(tools_3, &ExtendedQListWidget::droppedItem, tools_3, &ExtendedQListWidget::checkEntry);

}

DnDToolBar::~DnDToolBar()
{
}

void DnDToolBar::initActions()
{
    QPixmap battery_pix(":/svg/battery-svgrepo-com.svg");
        QPixmap bluetooth_pix(":/svg/bluetooth-svgrepo-com.svg");
        QPixmap boat_pix(":/svg/boat-svgrepo-com.svg");
        QPixmap brush_pix(":/svg/brush-svgrepo-com.svg");
        QPixmap close_pix(":/svg/close-svgrepo-com.svg");
        QPixmap cloud_pix(":/svg/cloud-svgrepo-com.svg");
        QPixmap download_pix(":/svg/download-svgrepo-com.svg");
        QPixmap eraser_pix(":/svg/eraser-svgrepo-com.svg");
        QPixmap heart_pix(":/svg/heart-svgrepo-com.svg");
        QPixmap home_pix(":/svg/home-svgrepo-com.svg");
        QPixmap link_pix(":/svg/link-svgrepo-com.svg");
        QPixmap mail_pix(":/svg/mail-svgrepo-com.svg");
        QPixmap newfile_pix(":/svg/new-file-svgrepo-com.svg");
        QPixmap pause_pix(":/svg/pause-svgrepo-com.svg");
        QPixmap pencil_pix(":/svg/pencil-svgrepo-com.svg");
        QPixmap person_pix(":/svg/person-svgrepo-com.svg");
        QPixmap phone_pix(":/svg/phone-svgrepo-com.svg");
        QPixmap play_pix(":/svg/play-svgrepo-com.svg");
        QPixmap print_pix(":/svg/print-svgrepo-com.svg");
        QPixmap save_pix(":/svg/save-svgrepo-com.svg");
        QPixmap scissors_pix(":/svg/scissors-svgrepo-com.svg");
        QPixmap search_pix(":/svg/search-svgrepo-com.svg");
        QPixmap select_pix(":/svg/select-svgrepo-com.svg");
        QPixmap setting_pix(":/svg/setting-svgrepo-com.svg");
        QPixmap shapes_pix(":/svg/shapes-svgrepo-com.svg");
        QPixmap sun_pix(":/svg/sun-svgrepo-com.svg");
        QPixmap trash_pix(":/svg/trash-svgrepo-com.svg");
        QPixmap unlock_pix(":/svg/unlock-svgrepo-com.svg");
        QPixmap upload_pix(":/svg/upload-svgrepo-com.svg");
        QPixmap wifi_pix(":/svg/wifi-svgrepo-com.svg");

        item_list = new QList<QListWidgetItem*>;

        QListWidgetItem *battery_It = new QListWidgetItem(QIcon(battery_pix), "Battery");
        item_list->append(battery_It);

        QListWidgetItem *bluetooth_It = new QListWidgetItem(QIcon(bluetooth_pix), "Bluetooth");
        item_list->append(bluetooth_It);

        QListWidgetItem *boat_It = new QListWidgetItem(QIcon(boat_pix), "Boat");
        item_list->append(boat_It);

        QListWidgetItem *brush_It = new QListWidgetItem(QIcon(brush_pix), "Brush");
        item_list->append(brush_It);

        QListWidgetItem *close_It = new QListWidgetItem(QIcon(close_pix), "Close");
        item_list->append(close_It);

        QListWidgetItem *cloud_It = new QListWidgetItem(QIcon(cloud_pix), "Cloud");
        item_list->append(cloud_It);

        QListWidgetItem *download_It = new QListWidgetItem(QIcon(download_pix), "Download");
        item_list->append(download_It);

        QListWidgetItem *eraser_It = new QListWidgetItem(QIcon(eraser_pix), "Eraser");
        item_list->append(eraser_It);

        QListWidgetItem *heart_It = new QListWidgetItem(QIcon(heart_pix), "Heart");
        item_list->append(heart_It);

        QListWidgetItem *home_It = new QListWidgetItem(QIcon(home_pix), "Home");
        item_list->append(home_It);

        QListWidgetItem *link_It = new QListWidgetItem(QIcon(link_pix), "Link");
        item_list->append(link_It);

        QListWidgetItem *mail_It = new QListWidgetItem(QIcon(mail_pix), "Mail");
        item_list->append(mail_It);

        QListWidgetItem *newfile_Act = new QListWidgetItem(QIcon(newfile_pix), "NewFile");
        item_list->append(newfile_Act);

        QListWidgetItem *pause_Act = new QListWidgetItem(QIcon(pause_pix), "Pause");
        item_list->append(pause_Act);

        QListWidgetItem *pencil_Act = new QListWidgetItem(QIcon(pencil_pix), "Pencil");
        item_list->append(pencil_Act);

        QListWidgetItem *person_Act = new QListWidgetItem(QIcon(person_pix), "Person");
        item_list->append(person_Act);

        QListWidgetItem *phone_Act = new QListWidgetItem(QIcon(phone_pix), "Phone");
        item_list->append(phone_Act);

        QListWidgetItem *play_Act = new QListWidgetItem(QIcon(play_pix), "Play");
        item_list->append(play_Act);

        QListWidgetItem *print_Act = new QListWidgetItem(QIcon(print_pix), "Print");
        item_list->append(print_Act);

        QListWidgetItem *save_Act = new QListWidgetItem(QIcon(save_pix), "Save");
        item_list->append(save_Act);

        QListWidgetItem *scissors_Act = new QListWidgetItem(QIcon(scissors_pix), "Scissors");
        item_list->append(scissors_Act);

        QListWidgetItem *search_Act = new QListWidgetItem(QIcon(search_pix), "Search");
        item_list->append(search_Act);

        QListWidgetItem *select_Act = new QListWidgetItem(QIcon(select_pix), "Select");
        item_list->append(select_Act);

        QListWidgetItem *setting_Act = new QListWidgetItem(QIcon(setting_pix), "Setting");
        item_list->append(setting_Act);

        QListWidgetItem *shapes_Act = new QListWidgetItem(QIcon(shapes_pix), "Bluetooth");
        item_list->append(shapes_Act);

        QListWidgetItem *sun_Act = new QListWidgetItem(QIcon(sun_pix), "Sun");
        item_list->append(sun_Act);

        QListWidgetItem *trash_Act = new QListWidgetItem(QIcon(trash_pix), "Trash");
        item_list->append(trash_Act);

        QListWidgetItem *unlock_Act = new QListWidgetItem(QIcon(unlock_pix), "Unlock");
        item_list->append(unlock_Act);

        QListWidgetItem *upload_Act = new QListWidgetItem(QIcon(upload_pix), "Upload");
        item_list->append(upload_Act);

        QListWidgetItem *wifi_Act = new QListWidgetItem(QIcon(wifi_pix), "Wifi");
        item_list->append(wifi_Act);
}


void DnDToolBar::loadConfig()
{

}

void DnDToolBar::saveConfig()
{

}

void DnDToolBar::showHelp()
{

}

