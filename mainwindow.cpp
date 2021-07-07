#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<iostream>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    QMenu * file =   menuBar()->addMenu("File");
    QMenu * edit = menuBar()->addMenu("Edit");
    QMenu * help = menuBar()->addMenu("Help");

    QAction *newProduct  = new QAction("New Product", this);
    file->addAction(newProduct);
    connect(newProduct, &QAction::triggered, this,&MainWindow::newProductCallback );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::newProductCallback() {
    std::cout << "new product clicked"    << std::endl;
}
