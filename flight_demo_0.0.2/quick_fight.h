#ifndef QUICK_FIGHT_H
#define QUICK_FIGHT_H

#include <QMainWindow>

namespace Ui {
class Quick_fight;
}

class Quick_fight : public QMainWindow
{
    Q_OBJECT

public:
    explicit Quick_fight(QWidget *parent = nullptr);
    ~Quick_fight();

private:
    Ui::Quick_fight *ui;
};

#endif // QUICK_FIGHT_H
