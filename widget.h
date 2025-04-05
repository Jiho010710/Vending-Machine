// widget.h
#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLCDNumber>
#include <QPushButton>
#include <QMessageBox>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_btn10_clicked();
    void on_btn50_clicked();
    void on_btn100_clicked();
    void on_btn500_clicked();

    void on_btnCoffee_clicked();
    void on_btnTea_clicked();
    void on_btnMilk_clicked();
    void on_btnReset_clicked();

private:
    Ui::Widget *ui;
    int money = 0;
    void updateButtons();
};

#endif
