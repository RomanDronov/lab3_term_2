#include "mainwindow.h"
#include "sequence.h"
#include <QApplication>
#include<math.h>
#include <QSlider>
#include <QSpinBox>
#include <QHBoxLayout>
#include <QString>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   MainWindow w;
  w.show();



    return a.exec();
}
