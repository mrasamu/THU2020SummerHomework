#include "signin_page.h"
#include "ui_signin_page.h"

Signin_page::Signin_page(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Signin_page)
{
    ui->setupUi(this);
}

Signin_page::~Signin_page()
{
    delete ui;
}

void Signin_page::on_pushButton_clicked()
{
    QSqlQuery query;
    query.exec("select * from users");
    QString name;
    QString password;
    int flag = 1;
    while(query.next())
    {
        name = query.value(0).toString();
        password = query.value(1).toString();
        if(name == ui->lineEdit_name->text() && password == ui->lineEdit_password->text())
        {
            this->close();
            mypage.showMaximized();
            flag = 0;
            break;
        }
    }
    if(query.last() && flag == 1)
    {
        QMessageBox::information(this,"错误","您的密码或者用户名错误",QMessageBox::Ok);
    }
}

void Signin_page::on_pushButton_2_clicked()
{
    pasword_forget.showMaximized();
}
