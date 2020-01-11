/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTableView *table1;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *Beads;
    QPushButton *Bracelets;
    QPushButton *Earrings;
    QPushButton *Necklace;
    QPushButton *Rings;
    QPushButton *Select_all;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *Quit;
    QHBoxLayout *horizontalLayout;
    QPushButton *Add;
    QPushButton *Perelik;
    QPushButton *Delete;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(523, 356);
        MainWindow->setProperty("pixmap", QVariant(QPixmap(QString::fromUtf8("../../Desktop/jewelry/beads/beads2.jpg"))));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        table1 = new QTableView(centralWidget);
        table1->setObjectName(QString::fromUtf8("table1"));

        gridLayout->addWidget(table1, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        Beads = new QPushButton(centralWidget);
        Beads->setObjectName(QString::fromUtf8("Beads"));

        verticalLayout_2->addWidget(Beads);

        Bracelets = new QPushButton(centralWidget);
        Bracelets->setObjectName(QString::fromUtf8("Bracelets"));

        verticalLayout_2->addWidget(Bracelets);

        Earrings = new QPushButton(centralWidget);
        Earrings->setObjectName(QString::fromUtf8("Earrings"));

        verticalLayout_2->addWidget(Earrings);

        Necklace = new QPushButton(centralWidget);
        Necklace->setObjectName(QString::fromUtf8("Necklace"));

        verticalLayout_2->addWidget(Necklace);

        Rings = new QPushButton(centralWidget);
        Rings->setObjectName(QString::fromUtf8("Rings"));

        verticalLayout_2->addWidget(Rings);


        verticalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(verticalLayout);

        Select_all = new QPushButton(centralWidget);
        Select_all->setObjectName(QString::fromUtf8("Select_all"));

        verticalLayout_3->addWidget(Select_all);


        gridLayout->addLayout(verticalLayout_3, 0, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        Quit = new QPushButton(centralWidget);
        Quit->setObjectName(QString::fromUtf8("Quit"));

        horizontalLayout_2->addWidget(Quit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Add = new QPushButton(centralWidget);
        Add->setObjectName(QString::fromUtf8("Add"));

        horizontalLayout->addWidget(Add);

        Perelik = new QPushButton(centralWidget);
        Perelik->setObjectName(QString::fromUtf8("Perelik"));

        horizontalLayout->addWidget(Perelik);

        Delete = new QPushButton(centralWidget);
        Delete->setObjectName(QString::fromUtf8("Delete"));

        horizontalLayout->addWidget(Delete);


        horizontalLayout_2->addLayout(horizontalLayout);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 523, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(Perelik, SIGNAL(clicked()), table1, SLOT(selectAll()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\223\320\276\320\273\320\276\320\262\320\275\320\265 \320\274\320\265\320\275\321\216", nullptr));
        Beads->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\274\320\270\321\201\321\202\320\270\320\275\320\270", nullptr));
        Bracelets->setText(QApplication::translate("MainWindow", "\320\221\321\200\320\260\321\201\320\273\320\265\321\202\320\270", nullptr));
        Earrings->setText(QApplication::translate("MainWindow", "\320\241\320\265\321\200\320\265\320\266\320\272\320\270", nullptr));
        Necklace->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\274\320\270\321\201\321\202\320\276", nullptr));
        Rings->setText(QApplication::translate("MainWindow", "\320\232\320\260\320\261\320\273\321\203\321\207\320\272\320\270", nullptr));
        Select_all->setText(QApplication::translate("MainWindow", "\320\222\320\270\320\262\320\265\321\201\321\202\320\270 \320\262\321\201\321\226 \321\202\320\276\320\262\320\260\321\200\320\270", nullptr));
        Quit->setText(QApplication::translate("MainWindow", "\320\222\320\270\321\205\321\226\320\264", nullptr));
        Add->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\264\320\260\321\202\320\270 \320\267\320\260\320\277\320\270\321\201", nullptr));
        Perelik->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\273\321\226\320\272 \320\272\320\260\321\202\320\265\320\263\320\276\321\200\321\226\320\271", nullptr));
        Delete->setText(QApplication::translate("MainWindow", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270 \320\267\320\260\320\277\320\270\321\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
