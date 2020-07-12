#ifndef CLASSIC_FIGHT_H
#define CLASSIC_FIGHT_H

#include <QMainWindow>

namespace Ui {
class Classic_fight;
}

class Classic_fight : public QMainWindow
{
    Q_OBJECT

public:
    explicit Classic_fight(QWidget *parent = nullptr);
    ~Classic_fight();

private:
    Ui::Classic_fight *ui;
};

#endif // CLASSIC_FIGHT_H
