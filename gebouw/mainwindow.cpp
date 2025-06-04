#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QLineEdit>
#include <QString>
#include "sensor.h"
#include "hallsensor.h"
#include "schuifdeur.h"
#include "deur.h"
#include "codeslot.h"
#include "draaideur.h"
#include "defines.h"
#include "sleutelslot.h"
#include <vector>
#include <memory>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    s1 = std::make_unique<HallSensor>(515, 160);

    // d1 = std::make_unique<Schuifdeur>(503, 250, 80, VERTICAL);
    // d2 = std::make_unique<Draaideur>(295, 290, 30, HORIZONTAL);
    // d3 = std::make_unique<Draaideur>(248, 140, 40, VERTICAL);
    sl1 = std::make_shared<Sleutelslot> ("slot");
    sl2 = std::make_shared<Sleutelslot> ("key");
    cs1 = std::make_shared<Codeslot>(1234);
    cs2 = std::make_shared<Codeslot>(4321);
    cs3 = std::make_shared<Codeslot>(5678);

    deuren.push_back(std::make_unique<Schuifdeur>(503, 250, 80, VERTICAL, s1.get()));
    deuren.push_back(std::make_unique<Draaideur>(295, 290, 30, HORIZONTAL));
    deuren.push_back(std::make_unique<Draaideur>(248, 140, 40, VERTICAL));

    deuren[0]->addSlot(sl1);
    deuren[0]->addSlot(sl2);
    deuren[1]->addSlot(cs1);
    deuren[2]->addSlot(cs2);
    deuren[2]->addSlot(cs3);
}

void MainWindow::paintEvent(QPaintEvent *event){

    QPainter painter(this);
    QPen pen;
    QImage image("C:\\Users\\timos\\Documents\\AEP\\gebouw\\Gebouw.png");

    pen.setColor(Qt::green);
    pen.setWidth(4);
    painter.setPen(pen);
    painter.drawImage(10,10,image);

    s1->teken(this);
    for (const auto& deur : deuren){
        deur->draw(this);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_schuifdeurSensorKnop_clicked()
{
    if (s1->isGeactiveerd()){
        s1->deactiveer();
    } else {
        s1->activeer();
    }
    update();
}

// void MainWindow::on_schuifdeurKnop_clicked()
// {
//     if (d1->isOpen()){
//         if(!s1->isGeactiveerd()){
//             d1->sClose();
//         }
//     } else {
//         d1->sOpen();
//     }
//     update();
// }


void MainWindow::on_D1_clicked()
{
    std::string key1 = ui->codeInput->text().toStdString();
    std::string key2 = ui->codeInput_4->text().toStdString();
    if (deuren[0]->isOpen()){
        deuren[0]->close();
        update();
    } else {
        sl1->unlock(key1);
        sl2->unlock(key2);
        deuren[0]->open();
        update();
    }
}


void MainWindow::on_D2_clicked()
{
    std::string code = ui->codeInput_2->text().toStdString();
    if (deuren[1]->isOpen()){
        deuren[1]->close();
        update();
    } else {
        cs1->unlock(code);
        deuren[1]->open();
    }
    update();
}


void MainWindow::on_D3_clicked()
{
    std::string code1 = ui->codeInput_3->text().toStdString();
    std::string code2 = ui->codeInput_5->text().toStdString();
    if (deuren[2]->isOpen()){
        deuren[2]->close();
        update();
    } else {
        cs2->unlock(code1);
        cs3->unlock(code2);
        deuren[2]->open();
    }
    update();
}
