#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include "sequence.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(on_pushButton_clicked(bool)));
connect(ui->pushButton_3,SIGNAL(clicked(bool)),this,SLOT(on_pushButton_3_clicked()));
connect(ui->pushButton_5,SIGNAL(clicked(bool)),this,SLOT(on_pushButton_5_clicked()));
connect(ui->pushButton_6,SIGNAL(clicked(bool)),this,SLOT(on_pushButton_6_clicked()));
connect(ui->constant_idx_button,SIGNAL(clicked(bool)),this,SLOT(on_constant_idx_button_clicked()));
connect(ui->constant_summa_button,SIGNAL(clicked(bool)),this,SLOT(on_constant_summa_button_clicked()));
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked(bool)
{QString n,q,idx,result;
    n=ui->elem1->text();
    q=ui->q_enter->text();
    idx=ui->idx_enter->text();
  geom * g=new geom(n.toInt(),q.toInt());
 result=QString::number( g->index(idx.toInt()));
ui->lineEdit->setText(result);
}


void MainWindow::on_pushButton_3_clicked()
{
    QString n,q,sum,result;
        n=ui->elem1->text();
        q=ui->q_enter->text();
        sum=ui->sum_enter->text();
      geom * g=new geom(n.toInt(),q.toInt());
     result=QString::number( g->sum(sum.toInt()));
    ui->lineEdit->setText(result);
}

void MainWindow::on_pushButton_5_clicked()
{
    QString n,q,idx, result;
        n=ui->algeb_frirst->text();
        q=ui->d_enter->text();
        idx=ui->algeb_idx_enter->text();
        arifm * a=new arifm(n.toInt(),q.toInt());
       result=QString::number( a->index(idx.toInt()));
      ui->lineEdit_algeb->setText(result);
}

void MainWindow::on_pushButton_6_clicked()
{

    QString n,q,sum,result;
    n=ui->algeb_frirst->text();
    q=ui->d_enter->text();
        sum=ui->algeb_sum_enter->text();
      arifm * a=new arifm(n.toInt(),q.toInt());
     result=QString::number( a->sum(sum.toInt()));
    ui->lineEdit_algeb->setText(result);
}

void MainWindow::on_constant_idx_button_clicked()
{
    QString n,idx, result;
        n=ui->constant_first_enter->text();
        idx=ui->constant_idx_enter->text();
        constant_seq * c=new constant_seq(n.toInt());
       result=QString::number( c->index(idx.toInt()));
      ui->constant_result->setText(result);
}

void MainWindow::on_constant_summa_button_clicked()
{
    QString n,sum, result;
        n=ui->constant_first_enter->text();
        sum=ui->constant_sum_enter->text();
        constant_seq * c=new constant_seq(n.toInt());
       result=QString::number( c->sum(sum.toInt()));
      ui->constant_result->setText(result);
}
