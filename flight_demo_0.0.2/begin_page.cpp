#include "begin_page.h"
#include "ui_begin_page.h"
#include<QMessageBox>
Begin_page::Begin_page(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Begin_page)
{
    ui->setupUi(this);

}

Begin_page::~Begin_page()
{
    delete ui;
}

void Begin_page::on_pB_signup_clicked()
{
    signup.showMaximized();
}

void Begin_page::on_pB_signin_clicked()
{
    this->close();
    signin.showMaximized();
}

void Begin_page::on_pB_help_clicked()
{
    QMessageBox::information(this,"游戏帮助","点击骰子让飞行棋到终点",QMessageBox::Ok);
}
