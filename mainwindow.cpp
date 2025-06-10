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
    int numsI = 0;

    for (int i = 0; i < operation.length(); i++)
    {
        if (operation[i] == '*' || operation[i] == '/')
        {
            for (int j = i-1; j < 0; j--)
            {
                if (!operation[j].isDigit() || j == 0)
                {
                    nums.push_back((operation.mid(j, i)).toDouble());
                }
            }
        }
    }
}

