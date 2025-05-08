#ifndef DRAAIDEUR_H
#define DRAAIDEUR_H
#include <QMainWindow>
#include "deur.h"

class Draaideur : public Deur
{
public:
    Draaideur(int x, int y, int length, bool isHorizontal);
    void draw(QPaintDevice*);
private:
    bool horizontal;
};

#endif // DRAAIDEUR_H
