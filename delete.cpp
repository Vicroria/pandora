#include "delete.h"
#include "ui_delete.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQueryModel>
#include <QtSql/QSqlQuery>
#include <QDebug>
Delete::Delete(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Delete)
{
    ui->setupUi(this);
}

Delete::~Delete()
{
    delete ui;
}

void Delete::on_pushButton_clicked()
{
    QSqlQuery qry;
    qry.prepare(" DELETE FROM product WHERE id = ?;");
    qry.addBindValue(ui->lineEdit->text());
    if (qry.exec()) {
      qDebug() << "Successfully deleted";    }
}
