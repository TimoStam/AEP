#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include "sensor.h"
#include "hallsensor.h"
#include "schuifdeur.h"
#include "draaideur.h"
#include "defines.h"
#include <vector>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    s1=new HallSensor(515,160);
    d1=new Schuifdeur(503, 250, 80, VERTICAL);

    d2=new Draaideur(295, 290, 30, HORIZONTAL);
    d3=new Draaideur(248, 140, 40, VERTICAL);
    draaideuren = {d2, d3};
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
    d2->draw(this);
    d3->draw(this);
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

    if (d2->isOpen()){
        d2->dClose();
    } else {
        d2->dOpen();
    }
    update();
}


void MainWindow::on_D3_clicked()
{
    if (d3->isOpen()){
        d3->dClose();
    } else {
        d3->dOpen();
    }
    update();
}

