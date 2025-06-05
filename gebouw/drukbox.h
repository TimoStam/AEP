#ifndef DRUKBOX_H
#define DRUKBOX_H
#include <QTextBrowser>
#include "afdrukker.h"

class Drukbox : public Afdrukker
{
public:
    Drukbox(QTextBrowser*);
    void showText(const std::string&);
    void clearMedium();
private:
    QTextBrowser* textbrowser;
};

#endif // DRUKBOX_H
