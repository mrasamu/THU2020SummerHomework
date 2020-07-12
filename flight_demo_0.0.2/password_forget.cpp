#include "password_forget.h"
#include "ui_password_forget.h"

password_forget::password_forget(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::password_forget)
{
    ui->setupUi(this);
    model = new QStringListModel(this);
}

password_forget::~password_forget()
{
    delete ui;
}

void password_forget::on_pushButton_clicked()
{
    QSqlQuery query;
    query.exec("select * from users");
    QString name;
    QString email;
    QString question;
    QString answer;
    QStringList ques;
    QString password;
    int flag = 1;
    while(query.next())
    {
        name = query.value(0).toString();
        question=query.value(2).toString();
        email = query.value(4).toString();
        answer = query.value(3).toString();
        password = query.value(1).toString();
        if(name == ui->lineEdit_name->text() || email == ui->lineEdit_email->text())
        {
            ques<<question;
            flag = 0;
            model->setStringList(ques);
            ui->listView->setModel(model);
            break;
        }
    }
    if(query.last() && flag == 1)
    {
        QMessageBox::information(this,"错误","您的邮箱或者用户名错误",QMessageBox::Ok);
    }

}

void password_forget::on_pushButton_2_clicked()
{
    QSqlQuery query;
    query.exec("select * from users");
    QString name;
    QString email;
    QString question;
    QString answer;
    QStringList ques;
    QString password;
    int flag = 1;
    while(query.next())
    {
        name = query.value(0).toString();
        question=query.value(2).toString();
        email = query.value(4).toString();
        answer = query.value(3).toString();
        if(name == ui->lineEdit_name->text() || email == ui->lineEdit_email->text())
        {
            ques<<question;
            flag = 0;
            model->setStringList(ques);
            ui->listView->setModel(model);
            break;
        }
    }
    password = ui->lineEdit_new_password->text();
    if(answer == ui->lineEdit_answer->text())
    {
        query.prepare("update users set password = ? where name = ? ");
        query.addBindValue(password);
        query.addBindValue(name);
        query.exec();
        QMessageBox::information(this,"成功","修改成功",QMessageBox::Ok);
        this->close();
    }
}
