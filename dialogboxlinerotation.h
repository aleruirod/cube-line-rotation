#ifndef DIALOGBOXLINEROTATION_H
#define DIALOGBOXLINEROTATION_H

#include <QDialog>
#include "mainview.h"

namespace Ui {
class DialogBoxLineRotation;
}

class DialogBoxLineRotation : public QDialog
{
    Q_OBJECT

public:
    explicit DialogBoxLineRotation(QWidget *parent = 0, MainView* view = 0);
    ~DialogBoxLineRotation();

private:
    Ui::DialogBoxLineRotation *ui;
    MainView* view;

private slots:
    void on_pushButtonRotate_clicked();
};

#endif // DIALOGBOXLINEROTATION_H
