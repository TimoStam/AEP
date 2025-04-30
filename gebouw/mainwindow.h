#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>

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

    void on_D1_clicked();

    void on_D2_clicked();

    void on_D3_clicked();

private:
    Ui::MainWindow *ui;
    Sensor *s1;
    Schuifdeur *d1;
    Draaideur *d2;
    Draaideur *d3;
    std::vector<Draaideur*> draaideuren;
};
#endif // MAINWINDOW_H
