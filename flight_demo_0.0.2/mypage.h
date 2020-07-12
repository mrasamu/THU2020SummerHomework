#ifndef MYPAGE_H
#define MYPAGE_H

#include <QMainWindow>
#include<classic_fight.h>
#include<quick_fight.h>
#include<check_plane.h>
#include<contract.h>
namespace Ui {
class MyPage;
}

class MyPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit MyPage(QWidget *parent = nullptr);
    ~MyPage();
    Classic_fight classic_fight;
    Quick_fight quick_fight;
    Check_plane check_plane;
    Contract contract;
private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MyPage *ui;
};

#endif // MYPAGE_H
