/********************************************************************************
** Form generated from reading UI file 'goods.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOODS_H
#define UI_GOODS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Goods
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_goodName;
    QLineEdit *lineEdit_goodPrice;
    QPushButton *saveButton;
    QLabel *label_sec_status;
    QPushButton *updateButton;
    QPushButton *deleteButton;
    QLineEdit *lineEdit_goodId;
    QLabel *label_3;
    QTableView *goodsView;
    QLineEdit *lineEdit_find;
    QPushButton *findButton;

    void setupUi(QDialog *Goods)
    {
        if (Goods->objectName().isEmpty())
            Goods->setObjectName(QString::fromUtf8("Goods"));
        Goods->resize(923, 423);
        groupBox = new QGroupBox(Goods);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 241, 271));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 69, 67, 17));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 110, 67, 17));
        lineEdit_goodName = new QLineEdit(groupBox);
        lineEdit_goodName->setObjectName(QString::fromUtf8("lineEdit_goodName"));
        lineEdit_goodName->setGeometry(QRect(80, 65, 121, 25));
        lineEdit_goodPrice = new QLineEdit(groupBox);
        lineEdit_goodPrice->setObjectName(QString::fromUtf8("lineEdit_goodPrice"));
        lineEdit_goodPrice->setGeometry(QRect(80, 107, 61, 25));
        saveButton = new QPushButton(groupBox);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(20, 170, 89, 25));
        label_sec_status = new QLabel(groupBox);
        label_sec_status->setObjectName(QString::fromUtf8("label_sec_status"));
        label_sec_status->setGeometry(QRect(6, 238, 231, 31));
        updateButton = new QPushButton(groupBox);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));
        updateButton->setGeometry(QRect(120, 170, 89, 25));
        deleteButton = new QPushButton(groupBox);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setGeometry(QRect(20, 200, 89, 25));
        lineEdit_goodId = new QLineEdit(groupBox);
        lineEdit_goodId->setObjectName(QString::fromUtf8("lineEdit_goodId"));
        lineEdit_goodId->setGeometry(QRect(80, 27, 61, 25));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 30, 67, 17));
        goodsView = new QTableView(Goods);
        goodsView->setObjectName(QString::fromUtf8("goodsView"));
        goodsView->setGeometry(QRect(280, 70, 631, 301));
        lineEdit_find = new QLineEdit(Goods);
        lineEdit_find->setObjectName(QString::fromUtf8("lineEdit_find"));
        lineEdit_find->setGeometry(QRect(280, 30, 161, 25));
        findButton = new QPushButton(Goods);
        findButton->setObjectName(QString::fromUtf8("findButton"));
        findButton->setGeometry(QRect(460, 30, 89, 25));

        retranslateUi(Goods);

        QMetaObject::connectSlotsByName(Goods);
    } // setupUi

    void retranslateUi(QDialog *Goods)
    {
        Goods->setWindowTitle(QApplication::translate("Goods", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Goods", "Item information", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Goods", "Name", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Goods", "Price", 0, QApplication::UnicodeUTF8));
        saveButton->setText(QApplication::translate("Goods", "Save", 0, QApplication::UnicodeUTF8));
        label_sec_status->setText(QString());
        updateButton->setText(QApplication::translate("Goods", "Update", 0, QApplication::UnicodeUTF8));
        deleteButton->setText(QApplication::translate("Goods", "Delete", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Goods", "ID", 0, QApplication::UnicodeUTF8));
        findButton->setText(QApplication::translate("Goods", "Find", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Goods: public Ui_Goods {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOODS_H
