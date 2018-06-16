#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    if (connOpen() == false) {
        ui->status_label->setText("Failed to open database");
    } else {
        ui->status_label->setText("Connected to database...");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString username, password;
    username=ui->lineEdit_username->text();
    password=ui->lineEdit_password->text();

    if (connOpen() == false) {
        qDebug()<<"Failed to open database";
    }

    connOpen();
    QSqlQuery qry;
    qry.prepare("select * from employeeinfo where username = '"+username+"' AND password='"+password+"'");

    if (qry.exec()) {
        int count = 0;
        while (qry.next()) {
            count++;
        }
        qDebug()<<count;
        if (count==1) {
            ui->status_label->setText("username and password is correct");
            connClose();
            this->hide();
            Goods goods;
            goods.setModal(true);
            goods.exec();
        }
        if (count>1) {
            ui->status_label->setText("duplicate username and password");
        }
        if (count<1) {
            ui->status_label->setText("username and password is not correct");
        }
    }
}
