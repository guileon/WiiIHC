#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()),this, SLOT(openFile()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::openFile()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                 "",
                                                 tr("Files (*.png *.xpm *.jpg)"));

}
