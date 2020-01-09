#ifndef DATABASE_H
#define DATABASE_H
#include <QObject>
#include <QSql>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlDatabase>
#include <QFile>
#include <QDate>
#include <QDebug>
//#define DATABASE_NAME       "pandora.db"
#define TABLE                 "product"

class DataBase : public QObject
{
    Q_OBJECT
public:
    explicit DataBase(QObject *parent = 0);
    ~DataBase();
    void connectToSql();
    bool inserIntoTable(const QVariantList &data);
    void closeDataBase();

private:
    // Сам объект базы данных, с которым будет производиться работа
    QSqlDatabase    db;
private:
    /* Внутренние методы для работы с базой данных
     * */
    bool openDataBase();

};

#endif // DATABASE_H
