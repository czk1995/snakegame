#include "widget.h"
#include"gamewidget.h"
#include<QDebug>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
 // this->resize(800,480);//窗口大小
    this->setWindowTitle("Gluttonous Snake");
    this->setWindowIcon(QIcon(":/Picture/img/WindowPicture.jpg"));
    QPalette palette;
    palette.setBrush(QPalette::Background,QBrush(QPixmap(":/Picture/img/Back2.png")));
//    this->setStyleSheet("background-image:url(qrc:/new/Gamewindow/img/GameBack.jpg)");
    this->setPalette(palette);

    startPush=new QPushButton(this);
    exitPush=new QPushButton(this);
    startPush->setIconSize(QSize(90,45));
    startPush->setGeometry(280,360,90,45);//从屏幕（380,260）的位置显示一个90*45的界面
    startPush->setIcon(QIcon(":/Picture/img/Start.png"));
    startPush->setFlat(1);
    exitPush->setIconSize(QSize(90,45));
    exitPush->setGeometry(480,360,90,45);
    exitPush->setIcon(QIcon(":/Picture/img/Exit.png"));
    exitPush->setFlat(1);//设置按钮的透明属性

    exitBox=new QMessageBox;
    connect(exitPush,SIGNAL(clicked(bool)),this,SLOT(M_exitPush()));
    connect(startPush,SIGNAL(clicked(bool)),this,SLOT(M_startPush()));





}

Widget::~Widget()
{

}

void Widget::M_startPush()
{
    gamewindow=new Gamewidget(this);  //创建一个新的界面，仍然以原来的界面为父窗口，退出后可以直接回到上一个界面。
    gamewindow->show();//子窗口显示

}

void Widget::M_exitPush()
{
    if(QMessageBox::Yes==QMessageBox::question(this,"Tips：","Do you want to leave the game?",QMessageBox::Yes|QMessageBox::No))//弹窗询问是否退出
    {
        delete this;
        exit(0);
    }
}
