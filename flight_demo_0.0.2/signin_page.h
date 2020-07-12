#ifndef SIGNIN_PAGE_H
#define SIGNIN_PAGE_H

#include <QMainWindow>
#include<mypage.h>
#include<QSqlQuery>
#include<QMessageBox>
#include<password_forget.h>
namespace Ui {
class Signin_page;
}

class Signin_page : public QMainWindow
{
    Q_OBJECT

public:
    explicit Signin_page(QWidget *parent = nullptr);
    ~Signin_page();
    MyPage mypage;
    password_forget pasword_forget;
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Signin_page *ui;
};

#endif // SIGNIN_PAGE_H
