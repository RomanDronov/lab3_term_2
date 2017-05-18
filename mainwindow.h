#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "sequence.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
   void on_pushButton_clicked(bool);

   void on_pushButton_3_clicked();

   void on_pushButton_5_clicked();

   void on_pushButton_6_clicked();

   void on_constant_idx_button_clicked();

   void on_constant_summa_button_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
