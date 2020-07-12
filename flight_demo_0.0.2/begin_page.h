#ifndef BEGIN_PAGE_H
#define BEGIN_PAGE_H
#include<QDialog>
#include <QMainWindow>
#include<signin_page.h>
#include<signup_page.h>
QT_BEGIN_NAMESPACE
namespace Ui { class Begin_page; }
QT_END_NAMESPACE

class Begin_page : public QMainWindow
{
    Q_OBJECT

public:
    Begin_page(QWidget *parent = nullptr);
    ~Begin_page();
    Signin_page signin;
    Signup_page signup;
private slots:

    void on_pB_signup_clicked();

    void on_pB_signin_clicked();

    void on_pB_help_clicked();

private:
    Ui::Begin_page *ui;
};
#endif // BEGIN_PAGE_H
