#ifndef SIGNUP_PAGE_H
#define SIGNUP_PAGE_H

#include <QMainWindow>
#include<QSqlQuery>
#include<QTextStream>
#include<QMessageBox>
namespace Ui {
class Signup_page;
}

class Signup_page : public QMainWindow
{
    Q_OBJECT

public:
    explicit Signup_page(QWidget *parent = nullptr);
    ~Signup_page();

private slots:
    void on_pB_signup_now_clicked();

private:
    Ui::Signup_page *ui;
};

#endif // SIGNUP_PAGE_H
