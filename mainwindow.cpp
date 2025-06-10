#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <vector>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_equalButton_clicked()
{
    QString operation = ui->Operation->text();
    std::vector<double> nums;
    int start = 0;
    int numsI = 0;

    for (int i = 0; i < operation.length(); i++)
    {
        switch (operation[i].unicode())
        {
            case '+':
                start = i+1;
                numsI++;

                nums.push_back((operation.mid(start, i)).toDouble());
                break;
            case '-':
                start = i+1;
                numsI++;

                break;
            case '*':
                start = i+1;
                numsI++;

                break;
            case '/':
                start = i+1;
                numsI++;

                break;
            default:
                break;
        }
    }
}

