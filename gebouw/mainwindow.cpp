#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QLineEdit>
#include <QString>
#include "sensor.h"
#include "hallsensor.h"
#include "schuifdeur.h"
#include "deur.h"
#include "draaideur.h"
#include "defines.h"
#include "codeslot.h"
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
    deuren.push_back(std::make_unique<Schuifdeur>(503, 250, 80, VERTICAL, s1.get()));
    deuren.push_back(std::make_unique<Draaideur>(295, 290, 30, HORIZONTAL));
    deuren.push_back(std::make_unique<Draaideur>(248, 140, 40, VERTICAL));
    codeslot = std::make_shared<Codeslot>(1234);

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
    if (deuren[0]->isOpen()){
        deuren[0]->close();
    } else {
        deuren[0]->open();
    }
    update();
}


void MainWindow::on_D2_clicked()
{

    if (deuren[1]->isOpen()){
        deuren[1]->close();
    } else {
        deuren[1]->open();
    }
    update();
}


void MainWindow::on_D3_clicked()
{
    if (deuren[2]->isOpen()){
        deuren[2]->close();
    } else {
        deuren[2]->open();
    }
    update();
}


void MainWindow::on_codeSubmission_clicked()
{
    QString aKey = lineEdit->text();
    codeslot->unlock(aKey.toStdString());
    if (!codeslot->isLocked()){
        deuren[0]->open();
    }
    update();
}

