#define PI 3.14

#include "widget.h"
#include "ui_widget.h"
#include<QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->CountButton,SIGNAL(clicked()),this,SLOT(on_CountButton_clicked()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_CountButton_clicked()
{
    qDebug("111111");
    bool bOK;
    QString sRadius;
    QString sRadiusValue=ui->RadiusLineLabel->text();
    int iRadiusValue=sRadiusValue.toInt(&bOK);
    double dArea=iRadiusValue*iRadiusValue*PI;
    ui->AreaLabel->setText(sRadius.setNum(dArea));
}

