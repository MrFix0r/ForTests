#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initTreeView();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initTreeView()
{
    treeView = QSharedPointer <QTreeView> (new QTreeView(this));
    ui->gridLayout->addWidget(treeView.data());
    dirModel = QSharedPointer <QFileSystemModel> (new QFileSystemModel(this));
    dirModel->setRootPath(QCoreApplication::applicationDirPath());
    dirModel->setFilter(QDir::AllDirs | QDir::NoDotAndDotDot | QDir::AllEntries);
    treeView->setModel(dirModel.data());
    treeView->setRootIndex(dirModel->index(QDir::currentPath()));
}
