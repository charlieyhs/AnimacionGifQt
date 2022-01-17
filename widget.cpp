#include "widget.h"
#include "ui_widget.h"

#include "duscene.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    mScene = new DuScene(this);
    ui->graphicsView->setScene(mScene);
}

Widget::~Widget()
{
    delete ui;
}

