#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QLineEdit>
#include <QString>
#include "sensor.h"
#include "hallsensor.h"
#include "schuifdeur.h"
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

    //verander constructor zodat codeslot meegegeven wordt
    d1 = std::make_unique<Schuifdeur>(503, 250, 80, VERTICAL);
    d2 = std::make_unique<Draaideur>(295, 290, 30, HORIZONTAL);
    d3 = std::make_unique<Draaideur>(248, 140, 40, VERTICAL);

    draaideuren.push_back(std::move(d2));
    draaideuren.push_back(std::move(d3));

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
    d1->draw(this);
    for (const auto& deur : draaideuren){
        deur->draw(this);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_schuifdeurSensorKnop_clicked()
{
    if (s1->isGeactiveerd() == true){
        s1->deactiveer();
    } else {
        s1->activeer();
    }
    update();
}

void MainWindow::on_schuifdeurKnop_clicked()
{
    if (d1->isOpen()){
        if(!s1->isGeactiveerd()){
            d1->sClose();
        }
    } else {
        d1->sOpen();
    }
    update();
}


void MainWindow::on_D1_clicked()
{
    if (d1->isOpen()){
        d1->sClose();
    } else {
        d1->sOpen();
    }
    update();
}


void MainWindow::on_D2_clicked()
{

    if (draaideuren[0]->isOpen()){
        draaideuren[0]->dClose();
    } else {
        draaideuren[0]->dOpen();
    }
    update();
}


void MainWindow::on_D3_clicked()
{
    if (draaideuren[1]->isOpen()){
        draaideuren[1]->dClose();
    } else {
        draaideuren[1]->dOpen();
    }
    update();
}


void MainWindow::on_codeSubmission_clicked()
{
    QString aKey = lineEdit->text();
    codeslot->unlock(aKey.toStdString());
    if (!codeslot->isLocked()){
        d1->sOpen();
    }
    update();
}

