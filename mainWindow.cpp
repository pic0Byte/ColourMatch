#include "mainWindow.h"
#include "ui_mainwindow.h"
#include "tabContents.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabWidget->removeTab(1);
    ui->tabWidget->removeTab(0);
    ui->btnNewDisplay->click();

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnNewDisplay_clicked()
{
    tabContents *page = new tabContents(this);
    ui->tabWidget->addTab(page, "  ");
    ui->tabWidget->setCurrentWidget(page);
}

void MainWindow::on_tabWidget_tabCloseRequested(int index)
{
    QWidget *pointer = ui->tabWidget->widget(index);
    if (pointer){
        delete pointer;
    }
}
