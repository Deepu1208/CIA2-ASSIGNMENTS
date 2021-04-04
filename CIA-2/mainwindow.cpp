#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QIcon>
#include <QDebug>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QMessageBox :: information(this,"Deepika 212218104151","This is information box");
}


void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox:: StandardButton reply;

        reply=QMessageBox:: question(this,"Deepika 212218104151","Do you like apples?",QMessageBox::Yes | QMessageBox::No);
        if(reply==QMessageBox::Yes)
           {
            QMessageBox::information(this,"Apple","Yes");
        }
        else
        {
            QMessageBox::information(this,"Apple","No");
        }

}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox:: StandardButton reply;

       reply=QMessageBox:: question(this,"Custom Message","This is a custom message",
                              QMessageBox::Yes | QMessageBox::No |QMessageBox::YesToAll|QMessageBox::NoToAll);
       if(reply==QMessageBox::Yes)
       {
           qDebug()<<"Nothing is displayed";
       }
       if(reply==QMessageBox::YesToAll)
       {
           QMessageBox::information(this,"Message Display","Display the message with warning as YesToAll");
       }
       if(reply==QMessageBox::No)
       {
           qDebug()<<"Nothing is displayed";
       }
       else
       {
           QMessageBox::information(this,"No Message Display","Dont Display the message with warning as YesToAll");
       }
}

void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::warning(this,"Critical Message","This is a warning message");
}



void MainWindow::on_pushButton_5_toggled(bool checked)
{
    if(checked)
           {
               qDebug()<<"Button Checked--ON--";
               ui->pushButton_5->setIcon(QIcon("power.jpg"));
               ui->pushButton_5->setIconSize(QSize(100,100));
           }
           else
           {
               qDebug()<<"Button Checked--OFF--";
               ui->pushButton_5->setIcon(QIcon("power.jpg"));
               ui->pushButton_5->setIconSize(QSize(100,100));
           }
}
