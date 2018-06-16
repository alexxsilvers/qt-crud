#ifndef GOODS_H
#define GOODS_H

#include <QDialog>
#include "mainwindow.h"
namespace Ui {
class Goods;
}

class Goods : public QDialog
{
    Q_OBJECT

public:
    void updateData(const QString& query);

public:
    explicit Goods(QWidget *parent = 0);
    ~Goods();

private slots:
    void on_saveButton_clicked();

    void on_updateButton_clicked();

    void on_deleteButton_clicked();

    void on_findButton_clicked();

private:
    Ui::Goods *ui;
};

#endif // GOODS_H
