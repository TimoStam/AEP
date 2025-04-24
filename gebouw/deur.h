#ifndef DEUR_H
#define DEUR_H
#include <QMainWindow>

class Deur
{
public:
    Deur();
    void open();
    virtual void close();
    virtual void draw(QPaintDevice*);
    bool isOpen();
    int doorLength();
    int xCoordinate() const;
    int yCoordinate() const;
private:
    bool status;
    int x;
    int y;
    int length;
};

#endif // DEUR_H
