#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QString>
#include "dialog.h"
#include "delete.h"
#include "database.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db->connectToSql();

    model = new QSqlQueryModel;

}

void MainWindow::setupModel(const QString &tableName, const QStringList &headers)
{
    model = new QSqlTableModel(this);

    for(int i = 0, j = 0; i < model->columnCount(); i++, j++){
        model->setHeaderData(i,Qt::Horizontal,headers[j]);
    }
}

MainWindow::~MainWindow()
{
    db->closeDataBase();
    delete db;
    delete ui;
    delete qry;
}

void MainWindow::selectByCategory(QString query)
{
    QSqlQuery qry;
    qry.prepare(query);
    qry.exec();
    model->setQuery(qry);

    QStringList headers;
    headers << tr(" ")
            << tr("Категорія")
            << tr("Назва")
            << tr("Метал")
            << tr("Матеріал")
            << tr("Вставка")
            << tr("Проба")
            << tr("Ціна");

    for(int i = 0, j = 0; i < headers.size(); i++, j++){
        model->setHeaderData(i,Qt::Horizontal,headers[j]);
    }

    ui->table1->setModel(model);
    ui->table1->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
   ui->table1->setColumnHidden(0,true);
   ui->table1->setColumnHidden(8, true);
   ui->table1->setColumnHidden(9, true);

    }

void MainWindow::on_Beads_clicked()
{
    this->selectByCategory("select * from product, store where product.id_s =store.id and store.name like 'Намистини';");
}

void MainWindow::on_Bracelets_clicked()
{
    this->selectByCategory("select * from product, store where product.id_s =store.id and store.name like 'Браслети';");

}

void MainWindow::on_Earrings_clicked()
{
    this->selectByCategory("select * from product, store where product.id_s =store.id and store.name like 'Сережки';");
}

void MainWindow::on_Necklace_clicked()
{
    this->selectByCategory("select * from product, store where product.id_s =store.id and store.name like 'Намисто';");
}

void MainWindow::on_Rings_clicked()
{
    this->selectByCategory("select * from product, store where product.id_s =store.id and store.name like 'Каблучки';");
}




void MainWindow::on_Perelik_clicked()
{
    this->selectByCategory("select * from  store;");
}


void MainWindow::on_Add_clicked()
{
    Dialog dial;
    dial.setModal(true);
    dial.exec();
}

void MainWindow::on_Delete_clicked()
{
    Delete del;
    del.setModal(true);
    del.exec();
}

void MainWindow::on_Select_all_clicked()
{
    this->selectByCategory("select * from  product;");
}



void MainWindow::on_Quit_clicked()
{
    QWidget::close();
}
