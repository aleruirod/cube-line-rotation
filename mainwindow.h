#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mainview.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setView(MainView* view);
    MainView* getView();


private slots:
    void on_actionRotate_Cube_triggered();

    void on_actionView_From_triggered();
    
    void on_actionDefault_triggered();

    
private:
    Ui::MainWindow *ui;
    MainView* view;
};

#endif // MAINWINDOW_H
