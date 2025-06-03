#ifndef DEUR_H
#define DEUR_H
#include <QMainWindow>
#include "slot.h"
class Deur
{
public:
    Deur(int, int, int);
    virtual ~Deur();
    virtual void open();
    virtual void close();
    virtual void draw(QPaintDevice*);
    virtual bool isOpen();
    virtual int doorLength();
    virtual int xCoordinate() const;
    virtual int yCoordinate() const;
    virtual void setSlot(std::shared_ptr<Slot> slot);
    virtual void addSlot(std::shared_ptr<Slot> sloten);
    virtual std::vector<std::shared_ptr<Slot>> getSloten();
private:
    std::shared_ptr<Slot> slot;
    bool status;
    int x;
    int y;
    int length;
    std::vector<std::shared_ptr<Slot>> sloten;
};

#endif // DEUR_H
