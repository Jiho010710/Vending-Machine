// widget.cpp
#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    updateButtons();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btn10_clicked()
{
    money += 10;
    ui->lcdNumber->display(money);
    updateButtons();
}

void Widget::on_btn50_clicked()
{
    money += 50;
    ui->lcdNumber->display(money);
    updateButtons();
}

void Widget::on_btn100_clicked()
{
    money += 100;
    ui->lcdNumber->display(money);
    updateButtons();
}

void Widget::on_btn500_clicked()
{
    money += 500;
    ui->lcdNumber->display(money);
    updateButtons();
}

void Widget::on_btnCoffee_clicked()
{
    money -= 100;
    ui->lcdNumber->display(money);
    updateButtons();
}

void Widget::on_btnTea_clicked()
{
    money -= 150;
    ui->lcdNumber->display(money);
    updateButtons();
}

void Widget::on_btnMilk_clicked()
{
    money -= 200;
    ui->lcdNumber->display(money);
    updateButtons();
}

void Widget::updateButtons()
{
    ui->btnCoffee->setEnabled(money >= 100);
    ui->btnTea->setEnabled(money >= 150);
    ui->btnMilk->setEnabled(money >= 200);
    ui->btnReset->setEnabled(money > 0);
}

void Widget::on_btnReset_clicked()
{
    int remain = money;
    QString msg = "잔돈 반환:\n";

    int coin500 = remain / 500;
    remain %= 500;

    int coin100 = remain / 100;
    remain %= 100;

    int coin50 = remain / 50;
    remain %= 50;

    int coin10 = remain / 10;

    msg += QString("500원: %1개\n").arg(coin500);
    msg += QString("100원: %1개\n").arg(coin100);
    msg += QString("50원: %1개\n").arg(coin50);
    msg += QString("10원: %1개").arg(coin10);

    QMessageBox::information(this, "거스름돈", msg);

    money = 0;
    ui->lcdNumber->display(money);
    updateButtons();
}
