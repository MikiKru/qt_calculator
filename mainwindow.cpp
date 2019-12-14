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

void numberInput(QString result, QString value){
    if(operation != ""){
        num1 = result;  // wszystko co jest przed operatorem
    } else {
        num2 = result.split(operation)[1];  // wszystko co jest za operatorem
    }
}

void MainWindow::on_btn1_clicked()
{
    ui->result->setText(ui->result->text() + ui->btn1->text());
    numberInput(ui->result->text(), ui->btn1->text());
}

void MainWindow::on_btn2_clicked()
{
    ui->result->setText(ui->result->text() + ui->btn2->text());
    numberInput(ui->result->text(), ui->btn2->text());
}

void MainWindow::on_btn3_clicked()
{
    ui->result->setText(ui->result->text() + ui->btn3->text());
    numberInput(ui->result->text(), ui->btn3->text());
}

void MainWindow::on_btn4_clicked()
{
    ui->result->setText(ui->result->text() + ui->btn4->text());
    numberInput(ui->result->text(), ui->btn4->text());
}

void MainWindow::on_btn5_clicked()
{
    ui->result->setText(ui->result->text() + ui->btn5->text());
    numberInput(ui->result->text(), ui->btn5->text());
}

void MainWindow::on_btn6_clicked()
{
    ui->result->setText(ui->result->text() + ui->btn6->text());
    numberInput(ui->result->text(), ui->btn6->text());
}

void MainWindow::on_btn7_clicked()
{
    ui->result->setText(ui->result->text() + ui->btn7->text());
    numberInput(ui->result->text(), ui->btn7->text());
}

void MainWindow::on_btn8_clicked()
{
    ui->result->setText(ui->result->text() + ui->btn8->text());
    numberInput(ui->result->text(), ui->btn8->text());
}

void MainWindow::on_btn9_clicked()
{
    ui->result->setText(ui->result->text() + ui->btn9->text());
    numberInput(ui->result->text(), ui->btn9->text());
}

void MainWindow::on_btn0_clicked()
{
    ui->result->setText(ui->result->text() + ui->btn0->text());
    numberInput(ui->result->text(), ui->btn0->text());
}

void MainWindow::on_btnClear_clicked()
{
    ui->result->clear();
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
//        ui->result->setText(ui->result->text() + "=" + QString::number(num1 + num2));
    } else if (operation == "-"){

    } else if (operation == "*"){

    } else if (operation == "/"){

    } else {
        ui->result->setText("ERROR");
    }
}
