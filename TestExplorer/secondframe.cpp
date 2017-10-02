#include "secondframe.h"
#include "mainwindow.h"
#include "ui_secondframe.h"

SecondFrame::SecondFrame(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SecondFrame)
{
    ui->setupUi(this);
}

SecondFrame::~SecondFrame()
{
    delete ui;
}
