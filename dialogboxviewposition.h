#ifndef DIALOGBOXVIEWPOSITION_H
#define DIALOGBOXVIEWPOSITION_H

#include <QDialog>
#include "mainview.h"

namespace Ui {
class DialogBoxViewPosition;
}

class DialogBoxViewPosition : public QDialog
{
    Q_OBJECT

public:
    explicit DialogBoxViewPosition(QWidget *parent = 0, MainView* view = 0);
    ~DialogBoxViewPosition();

private:
    Ui::DialogBoxViewPosition *ui;
    MainView* view;

private slots:
    void on_pushButtonViewFrom_clicked();
};

#endif // DIALOGBOXVIEWPOSITION_H
