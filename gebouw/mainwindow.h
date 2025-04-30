#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
class Sensor;
class Deur;
class Schuifdeur;
class Draaideur;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    ~MainWindow();

private slots:
    void on_schuifdeurSensorKnop_clicked();

    void on_schuifdeurKnop_clicked();

private:
    Ui::MainWindow *ui;
    Sensor *s1;
    Schuifdeur *d1;
    Draaideur *d2;
    Draaideur *d3;
};
#endif // MAINWINDOW_H
