#include "database.h"
#include <QDebug>

void DataBase::connectToSql()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setDatabaseName("pandora");
    db.setUserName("root");
    db.setPassword("");
    if(!db.open()){
        qDebug() << "Cannot open db";
    }

}

DataBase::DataBase(QObject *parent) : QObject(parent)
{

}

DataBase::~DataBase()
{

}

void DataBase::closeDataBase()
{
    db.close();
}
