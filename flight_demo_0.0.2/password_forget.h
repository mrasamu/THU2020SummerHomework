#ifndef PASSWORD_FORGET_H
#define PASSWORD_FORGET_H
#include <QMainWindow>
#include<mypage.h>
#include<QSqlQuery>
#include<QMessageBox>
#include<QStringListModel>
#include <QStringList>
namespace Ui {
class password_forget;
}

class password_forget : public QMainWindow
{
    Q_OBJECT

public:
    explicit password_forget(QWidget *parent = nullptr);
    ~password_forget();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::password_forget *ui;
    QStringListModel *model;

};

#endif // PASSWORD_FORGET_H
