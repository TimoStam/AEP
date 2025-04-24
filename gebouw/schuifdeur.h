#ifndef SCHUIFDEUR_H
#define SCHUIFDEUR_H
#include <QMainWindow>
#include "deur.h"


class Schuifdeur : public Deur
{
public:
    Schuifdeur();
    void close();
    void draw(QPaintDevice*);
};

#endif // SCHUIFDEUR_H
