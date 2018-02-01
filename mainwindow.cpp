#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialogboxlinerotation.h"
#include "dialogboxviewposition.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::MainWindow){

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setView(MainView* view)
{
    this -> view = view;
}

MainView* MainWindow::getView() {
   return this->view;
}

void MainWindow::on_actionRotate_Cube_triggered()
{
    DialogBoxLineRotation dialogLineRotation(this, this->view);
    dialogLineRotation.setModal(true);
    dialogLineRotation.exec();
}


void MainWindow::on_actionView_From_triggered()
{
    DialogBoxViewPosition dialogViewPosition(this, this->view);
    dialogViewPosition.setModal(true);
    dialogViewPosition.exec();
}

void MainWindow::on_actionDefault_triggered()
{
    this->getView()->getScene()->resetModel();
}
