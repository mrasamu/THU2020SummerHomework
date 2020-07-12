#include "signup_page.h"
#include "ui_signup_page.h"

Signup_page::Signup_page(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Signup_page)
{
    ui->setupUi(this);
}

Signup_page::~Signup_page()
{
    delete ui;
}

void Signup_page::on_pB_signup_now_clicked()
{
    QSqlQuery query;
    QString name = ui->lineEdit_name->text();
    QString password = ui->lineEdit_password->text();
    QString password_2 = ui->lineEdit_password_2->text();
    QString question = ui->lineEdit_question->text();
    QString answer = ui->lineEdit_answer->text();
    QString email = ui->lineEdit_email->text();
    if(password != password_2)
    {
        QMessageBox::information(this,"错误","两次密码不一致",QMessageBox::Ok);
    }
    if(password == password_2 && question != NULL && answer != NULL)
    {
        query.prepare("insert into users(name,password,question,answer,email)"
                  "values (?,?,?,?,?)");
        query.addBindValue(name);
        query.addBindValue(password);
        query.addBindValue(question);
        query.addBindValue(answer);
        query.addBindValue(email);
        query.exec();
        this->hide();
    }
}
