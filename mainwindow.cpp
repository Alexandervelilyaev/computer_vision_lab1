#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>

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

void MainWindow::paintEvent(QPaintEvent*) {
    const QColor color(0, 0, 255);

    for (int i = 0; i < 100; ++i) {
        setPixel(i, i, color);
    }
}

void MainWindow::setPixel(int x, int y, QColor color) {
    QPainter painter(this);
    painter.setPen(color);
    painter.drawPoint(x, y);
}
