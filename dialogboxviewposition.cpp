#include "dialogboxviewposition.h"
#include "ui_dialogboxviewposition.h"

DialogBoxViewPosition::DialogBoxViewPosition(QWidget *parent, MainView* view) :
    QDialog(parent),
    ui(new Ui::DialogBoxViewPosition)
{
    ui->setupUi(this);
    this->view = view;
}

DialogBoxViewPosition::~DialogBoxViewPosition()
{
    delete ui;
}

void DialogBoxViewPosition::on_pushButtonViewFrom_clicked()
{
    this->view->getScene()->updateView(ui->doubleSpinBoxEyeX->value(), ui->doubleSpinBoxEyeY->value(),
                   ui->doubleSpinBoxEyeZ->value(), ui->doubleSpinBoxDirectionX->value()
                   , ui->doubleSpinBoxDirectionY->value(), ui->doubleSpinBoxDirectionZ->value());
    this->close();
}
