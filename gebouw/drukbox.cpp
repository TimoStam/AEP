#include "drukbox.h"
#include <QTextBrowser>
#include <QString>

Drukbox::Drukbox(QTextBrowser* textbrowser) : textbrowser(textbrowser){}

void Drukbox::showText(const std::string& text){
    if (textbrowser){
        textbrowser->append(QString::fromStdString(text));
    }
}

void Drukbox::clearMedium(){
    if (textbrowser){
        textbrowser->clear();
    }
}
