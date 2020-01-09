#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQueryModel>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlTableModel>
#include "database.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
//    void connectToSql();
    ~MainWindow();

private slots:
    void on_Beads_clicked();

    void on_Bracelets_clicked();

    void on_Earrings_clicked();

    void on_Necklace_clicked();

    void on_Rings_clicked();

    void on_Perelik_clicked();

    void on_Add_clicked();

    void on_Delete_clicked();

    void on_Select_all_clicked();

    void on_Quit_clicked();

private:
    Ui::MainWindow *ui;
    DataBase *db;
//    QSqlDatabase db;
    QSqlQueryModel *model;
    QSqlQuery *qry;
private:
    void setupModel(const QString &tableName, const QStringList &headers);
    void createUI();
    void selectByCategory(QString query);
};

#endif // MAINWINDOW_H
