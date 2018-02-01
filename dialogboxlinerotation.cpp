#include "dialogboxlinerotation.h"
#include "ui_dialogboxlinerotation.h"

DialogBoxLineRotation::DialogBoxLineRotation(QWidget *parent, MainView* view) :
    QDialog(parent),
    ui(new Ui::DialogBoxLineRotation)
{
    ui->setupUi(this);
    this->view = view;
}

DialogBoxLineRotation::~DialogBoxLineRotation()
{
    delete ui;
}

void DialogBoxLineRotation::on_pushButtonRotate_clicked()
{
    this->view->getScene()->rotateModel(ui->doubleSpinBoxBX->value(), ui->doubleSpinBoxBY->value(),
                                      ui->doubleSpinBoxBZ->value(), ui->doubleSpinBoxDX->value(),
                                      ui->doubleSpinBoxDY->value(), ui->doubleSpinBoxDZ->value(),
                                      ui->doubleSpinBoxRotationAngle->value());

    this->close();

}
