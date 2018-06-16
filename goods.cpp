#include "goods.h"
#include "ui_goods.h"
#include <QMessageBox>

Goods::Goods(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Goods)
{
    ui->setupUi(this);
    MainWindow conn;
    if (conn.connOpen() == false) {
        ui->label_sec_status->setText("Failed to open database");
    } else {
        ui->label_sec_status->setText("Connected to database...");
    }

    updateData("select * from good");
}

Goods::~Goods()
{
    delete ui;
}

void Goods::updateData(const QString& query)
{
    MainWindow conn;
    QSqlQueryModel *modal=new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery *qry =new QSqlQuery(conn.mydb);

    qry->prepare(query);
    qry->exec();

    modal->setQuery(*qry);
    ui->goodsView->setModel(modal);

    conn.connClose();
    qDebug()<<(modal->rowCount());
}

void Goods::on_saveButton_clicked()
{
    MainWindow conn;
    QString name, price;
    name = ui->lineEdit_goodName->text();
    price = ui->lineEdit_goodPrice->text();

    if (conn.connOpen() == false) {
        qDebug()<<"Failed to open database";
    }

    conn.connOpen();
    QSqlQuery qry;
    qry.prepare("insert into good (name, price) values('"+ name +"', '"+ price +"')");

    if (qry.exec() == false) {
        QMessageBox::critical(this, tr("error::"), qry.lastError().text());
    }

    conn.connClose();
    updateData("select * from good");
}

void Goods::on_updateButton_clicked()
{
    MainWindow conn;
    QString id, name, price;
    id = ui->lineEdit_goodId->text();
    name = ui->lineEdit_goodName->text();
    price = ui->lineEdit_goodPrice->text();

    if (conn.connOpen() == false) {
        qDebug()<<"Failed to open database";
    }

    conn.connOpen();
    QSqlQuery qry;
    qry.prepare("update good set name = '" + name + "', price = '" + price + "' where id = '" + id + "'");

    if (qry.exec() == false) {
        QMessageBox::critical(this, tr("error::"), qry.lastError().text());
    }

    conn.connClose();
    updateData("select * from good");
}

void Goods::on_deleteButton_clicked()
{
    MainWindow conn;
    QString id;
    id = ui->lineEdit_goodId->text();

    if (conn.connOpen() == false) {
        qDebug()<<"Failed to open database";
    }

    conn.connOpen();
    QSqlQuery qry;
    qry.prepare("Delete from good where id = '" + id + "'");

    if (qry.exec() == false) {
        QMessageBox::critical(this, tr("error::"), qry.lastError().text());
    }

    conn.connClose();
    updateData("select * from good");
}

void Goods::on_findButton_clicked()
{
    MainWindow conn;
    QString find, query;
    find = ui->lineEdit_find->text();

    if (find.length() == 0) {
        query = "select * from good";
    } else {
        query = "select * from good WHERE name = '" + find + "' OR price = '" + find + "'";
    }

    if (conn.connOpen() == false) {
        qDebug()<<"Failed to open database";
    }

    updateData(query);
}
