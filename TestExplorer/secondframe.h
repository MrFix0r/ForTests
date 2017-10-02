#ifndef SECONDFRAME_H
#define SECONDFRAME_H

#include <QMainWindow>

namespace Ui {
class SecondFrame;
}

class SecondFrame : public QMainWindow
{
    Q_OBJECT

public:
    explicit SecondFrame(QWidget *parent = 0);
    ~SecondFrame();

private:
    Ui::SecondFrame *ui;
};

#endif // SECONDFRAME_H
