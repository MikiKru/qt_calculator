#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


static QString num1, num2;
static QString operation = "";

void MainWindow::on_btn1_clicked()
{
    ui->result->setText(ui->result->text() + "1");
    if(operation == ""){
        num1 += "1";
    } else {
        num2 += "1";
    }
}

void MainWindow::on_btn2_clicked()
{
    ui->result->setText(ui->result->text() + "2");
    if(operation == ""){
        num1 += "2";
    } else {
        num2 += "2";
    }
}

void MainWindow::on_btn3_clicked()
{
    ui->result->setText(ui->result->text() + "3");
    if(operation == ""){
        num1 += "3";
    } else {
        num2 += "3";
    }
}

void MainWindow::on_btn4_clicked()
{
    ui->result->setText(ui->result->text() + "4");
    if(operation == ""){
        num1 += "4";
    } else {
        num2 += "4";
    }
}

void MainWindow::on_btn5_clicked()
{
    ui->result->setText(ui->result->text() + "5");
    if(operation == ""){
        num1 += "5";
    } else {
        num2 += "5";
    }
}

void MainWindow::on_btn6_clicked()
{
    ui->result->setText(ui->result->text() + "6");
    if(operation == ""){
        num1 += "6";
    } else {
        num2 += "6";
    }
}

void MainWindow::on_btn7_clicked()
{
    ui->result->setText(ui->result->text() + "7");
    if(operation == ""){
        num1 += "7";
    } else {
        num2 += "7";
    }
}

void MainWindow::on_btn8_clicked()
{
    ui->result->setText(ui->result->text() + "8");
    if(operation == ""){
        num1 += "8";
    } else {
        num2 += "8";
    }
}

void MainWindow::on_btn9_clicked()
{
    ui->result->setText(ui->result->text() + "9");
    if(operation == ""){
        num1 += "9";
    } else {
        num2 += "9";
    }
}

void MainWindow::on_btn0_clicked()
{
    ui->result->setText(ui->result->text() + "0");
    if(operation == ""){
        num1 += "0";
    } else {
        num2 += "0";
    }
}

void MainWindow::on_btnClear_clicked()
{
    ui->result->clear();
    // wyczyszczenie pól num1 num2
    num1 = "";
    num2 = "";
    operation = "";
    // odblokowanie przycisków
    ui->btn0->setDisabled(false);
    ui->btn1->setDisabled(false);
    ui->btn2->setDisabled(false);
    ui->btn3->setDisabled(false);
    ui->btn4->setDisabled(false);
    ui->btn5->setDisabled(false);
    ui->btn6->setDisabled(false);
    ui->btn7->setDisabled(false);
    ui->btn8->setDisabled(false);
    ui->btn9->setDisabled(false);
    ui->btnPlus->setDisabled(false);
    ui->btnMinus->setDisabled(false);
    ui->btnMultiply->setDisabled(false);
    ui->btnDiv->setDisabled(false);
    ui->btnEquals->setDisabled(false);

}

void MainWindow::on_btnPlus_clicked()
{
    operation = "+";
    ui->result->setText(ui->result->text() + "+");
}

void MainWindow::on_btnMinus_clicked()
{
    operation = "-";
    ui->result->setText(ui->result->text() + "-");
}

void MainWindow::on_btnMultiply_clicked()
{
    operation = "*";
    ui->result->setText(ui->result->text() + "*");
}

void MainWindow::on_btnDiv_clicked()
{
    operation = "/";
    ui->result->setText(ui->result->text() + "/");
}

void MainWindow::on_btnEquals_clicked()
{
    if(operation == "+"){
        int res = num1.toInt() + num2.toInt();
        ui->result->setText(ui->result->text() + "=" + QString::number(res));
    } else if (operation == "-"){
        int res = num1.toInt() - num2.toInt();
        ui->result->setText(ui->result->text() + "=" + QString::number(res));
    } else if (operation == "*"){
        int res = num1.toInt() * num2.toInt();
        ui->result->setText(ui->result->text() + "=" + QString::number(res));
    } else if (operation == "/"){
        double res = num1.toDouble() / num2.toInt();
        ui->result->setText(ui->result->text() + "=" + QString::number(res));
    } else {
        ui->result->setText("ERROR");
    }
    // blokuje wszytkie przyciski poza CLEAR
    ui->btn0->setDisabled(true);
    ui->btn1->setDisabled(true);
    ui->btn2->setDisabled(true);
    ui->btn3->setDisabled(true);
    ui->btn4->setDisabled(true);
    ui->btn5->setDisabled(true);
    ui->btn6->setDisabled(true);
    ui->btn7->setDisabled(true);
    ui->btn8->setDisabled(true);
    ui->btn9->setDisabled(true);
    ui->btnPlus->setDisabled(true);
    ui->btnMinus->setDisabled(true);
    ui->btnMultiply->setDisabled(true);
    ui->btnDiv->setDisabled(true);
    ui->btnEquals->setDisabled(true);
}
