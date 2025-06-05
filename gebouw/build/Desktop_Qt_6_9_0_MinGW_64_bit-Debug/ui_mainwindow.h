/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *schuifdeurSensorKnop;
    QPushButton *D1;
    QPushButton *D2;
    QPushButton *D3;
    QLineEdit *codeInput;
    QLineEdit *codeInput_2;
    QLineEdit *codeInput_3;
    QLineEdit *codeInput_4;
    QLineEdit *codeInput_5;
    QLineEdit *nameInput;
    QPushButton *allowaccess;
    QPushButton *declineaccess;
    QLineEdit *name;
    QTextBrowser *textBrowser;
    QPushButton *showCardboxButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(807, 744);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        schuifdeurSensorKnop = new QPushButton(centralwidget);
        schuifdeurSensorKnop->setObjectName("schuifdeurSensorKnop");
        schuifdeurSensorKnop->setGeometry(QRect(650, 160, 141, 31));
        D1 = new QPushButton(centralwidget);
        D1->setObjectName("D1");
        D1->setGeometry(QRect(580, 250, 80, 24));
        D2 = new QPushButton(centralwidget);
        D2->setObjectName("D2");
        D2->setGeometry(QRect(580, 300, 80, 24));
        D3 = new QPushButton(centralwidget);
        D3->setObjectName("D3");
        D3->setGeometry(QRect(580, 350, 80, 24));
        codeInput = new QLineEdit(centralwidget);
        codeInput->setObjectName("codeInput");
        codeInput->setGeometry(QRect(670, 250, 113, 28));
        codeInput_2 = new QLineEdit(centralwidget);
        codeInput_2->setObjectName("codeInput_2");
        codeInput_2->setGeometry(QRect(670, 300, 113, 28));
        codeInput_3 = new QLineEdit(centralwidget);
        codeInput_3->setObjectName("codeInput_3");
        codeInput_3->setGeometry(QRect(670, 350, 113, 28));
        codeInput_4 = new QLineEdit(centralwidget);
        codeInput_4->setObjectName("codeInput_4");
        codeInput_4->setGeometry(QRect(670, 200, 113, 28));
        codeInput_5 = new QLineEdit(centralwidget);
        codeInput_5->setObjectName("codeInput_5");
        codeInput_5->setGeometry(QRect(670, 400, 113, 28));
        nameInput = new QLineEdit(centralwidget);
        nameInput->setObjectName("nameInput");
        nameInput->setGeometry(QRect(580, 490, 113, 28));
        allowaccess = new QPushButton(centralwidget);
        allowaccess->setObjectName("allowaccess");
        allowaccess->setGeometry(QRect(702, 470, 91, 29));
        declineaccess = new QPushButton(centralwidget);
        declineaccess->setObjectName("declineaccess");
        declineaccess->setGeometry(QRect(702, 510, 91, 29));
        name = new QLineEdit(centralwidget);
        name->setObjectName("name");
        name->setGeometry(QRect(650, 10, 113, 28));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(570, 550, 221, 141));
        showCardboxButton = new QPushButton(centralwidget);
        showCardboxButton->setObjectName("showCardboxButton");
        showCardboxButton->setGeometry(QRect(460, 650, 101, 29));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 807, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        schuifdeurSensorKnop->setText(QCoreApplication::translate("MainWindow", "schuifdeurSensorKnop", nullptr));
        D1->setText(QCoreApplication::translate("MainWindow", "D1", nullptr));
        D2->setText(QCoreApplication::translate("MainWindow", "D2", nullptr));
        D3->setText(QCoreApplication::translate("MainWindow", "D3", nullptr));
        allowaccess->setText(QCoreApplication::translate("MainWindow", "Allow access", nullptr));
        declineaccess->setText(QCoreApplication::translate("MainWindow", "Deny access", nullptr));
        showCardboxButton->setText(QCoreApplication::translate("MainWindow", "Show cardbox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
