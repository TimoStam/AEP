#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include <QLineEdit>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
class Sensor;
class Deur;
class Schuifdeur;
class Slot;
class Draaideur;
class Codeslot;
class Sleutelslot;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    ~MainWindow();

private slots:
    void on_schuifdeurSensorKnop_clicked();

    // void on_schuifdeurKnop_clicked();

    void on_D1_clicked();

    void on_D2_clicked();

    void on_D3_clicked();

private:
    Ui::MainWindow *ui;
    QLineEdit* lineEdit;
    std::unique_ptr<Sensor> s1;
    // std::unique_ptr<Schuifdeur> d1;
    // std::unique_ptr<Draaideur> d2;
    // std::unique_ptr<Draaideur> d3;
    std::vector<std::unique_ptr<Deur>> deuren;
    std::vector<std::shared_ptr<Slot>> sloten;

    std::shared_ptr<Slot> slot;
    std::shared_ptr<Sleutelslot> sl1;
    std::shared_ptr<Sleutelslot> sl2;
    std::shared_ptr<Codeslot> cs1;
    std::shared_ptr<Codeslot> cs2;
    std::shared_ptr<Codeslot> cs3;
};

#endif // MAINWINDOW_H
