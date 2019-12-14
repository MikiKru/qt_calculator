#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn1_clicked();

    void on_btn2_clicked();

    void on_btn3_clicked();

    void on_btn4_clicked();

    void on_btn5_clicked();

    void on_btn6_clicked();

    void on_btn7_clicked();

    void on_btn8_clicked();

    void on_btn9_clicked();

    void on_btn0_clicked();

    void on_btnClear_clicked();

    void on_btnPlus_clicked();

    void on_btnMinus_clicked();

    void on_btnMultiply_clicked();

    void on_btnDiv_clicked();

    void on_btnEquals_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
