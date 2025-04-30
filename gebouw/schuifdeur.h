#ifndef SCHUIFDEUR_H
#define SCHUIFDEUR_H
#include <QMainWindow>
#include "deur.h"


class Schuifdeur : public Deur
{
public:
    Schuifdeur(int x, int y, int length, bool isHorizontal);
    void sClose();
    void sOpen();
    void draw(QPaintDevice*);
private:
    bool horizontal; //true = horizontal, false = vertical
};

#endif // SCHUIFDEUR_H
