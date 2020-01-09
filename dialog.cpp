#include "dialog.h"
#include "ui_dialog.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQueryModel>
#include <QtSql/QSqlQuery>
#include <QDebug>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}
Dialog::~Dialog()
{
    delete ui;
}



void Dialog::on_pushButton_clicked()
{
    QSqlQuery qry;
        qry.prepare("INSERT INTO  product (id_s, name, metal, material, `insert`, sample, price) VALUES(?, ?, ?, ?, ?, ? ,?);");
        qry.addBindValue(ui->lineEdit->text());
        qry.addBindValue(ui->lineEdit_2->text());
        qry.addBindValue(ui->lineEdit_3->text());
        qry.addBindValue(ui->lineEdit_4->text());
        qry.addBindValue(ui->lineEdit_5->text());
        qry.addBindValue(ui->lineEdit_6->text());
        qry.addBindValue(ui->lineEdit_7->text());

        if (qry.exec()) {
          qDebug() << "Successfully added";
        }
}
