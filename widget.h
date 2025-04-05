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
    void on_btn10_clicked();    // 10원 버튼
    void on_btn50_clicked();    // 50원 버튼
    void on_btn100_clicked();   // 100원 버튼
    void on_btn500_clicked();   // 500원 버튼

    void on_btnCoffee_clicked();  // 커피 버튼
    void on_btnTea_clicked();     // 차 버튼
    void on_btnMilk_clicked();    // 우유 버튼
    void on_btnReset_clicked();   // 리셋 버튼

private:
    Ui::Widget *ui;
    int money = 0;  // 현재 금액
    void updateButtons();  // 버튼 활성화/비활성화 업데이트
};

#endif
