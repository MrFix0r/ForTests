#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QFileSystemModel>
#include <QSharedPointer>
#include <QTreeView>
#include <QFileDialog>

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
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    void initTreeView();
    QSharedPointer <QFileSystemModel> dirModel;
    QSharedPointer <QTreeView> treeView;
};

#endif // MAINWINDOW_H
