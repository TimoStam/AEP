#ifndef HERKENNINGSSLOT_H
#define HERKENNINGSSLOT_H

#include "Slot.h"
#include "afdrukker.h"

class HerkenningsSlot : public Slot
{
public:
    HerkenningsSlot();
    void unlock(const std::string&);
    void lock();
    bool isLocked()const;
    void showCardbox()const;
    void addDrukbox(Afdrukker*);
    void addAuthorisation(const std::string&, bool);
private:
    std::map<std::string, bool> cardbox;
    Afdrukker* db1;
    bool locked;
};

#endif // HERKENNINGSSLOT_H
