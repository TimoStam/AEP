#ifndef DEUR_H
#define DEUR_H
#include <QMainWindow>
#include "codeslot.h"

class Deur
{
public:
    Deur(int, int, int, Codeslot);
    virtual ~Deur();
    virtual void open();
    virtual void close();
    virtual void draw(QPaintDevice*);
    virtual bool isOpen();
    virtual int doorLength();
    virtual int xCoordinate() const;
    virtual int yCoordinate() const;
private:
    std::shared_ptr<Codeslot> codeslot;
    bool status;
    int x;
    int y;
    int length;
};

#endif // DEUR_H
