#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include "sensor.h"
#include "hallsensor.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    s1=new HallSensor(515,160);
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

