#include "mypage.h"
#include "ui_mypage.h"

MyPage::MyPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MyPage)
{
    ui->setupUi(this);
}

MyPage::~MyPage()
{
    delete ui;
}

void MyPage::on_pushButton_clicked()
{
    classic_fight.showMaximized();
}

void MyPage::on_pushButton_4_clicked()
{
    quick_fight.showMaximized();
}

void MyPage::on_pushButton_3_clicked()
{
    check_plane.showMaximized();
}

void MyPage::on_pushButton_2_clicked()
{
    contract.showMaximized();
}
