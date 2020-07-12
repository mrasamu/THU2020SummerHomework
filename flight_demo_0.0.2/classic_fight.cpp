#include "classic_fight.h"
#include "ui_classic_fight.h"

Classic_fight::Classic_fight(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Classic_fight)
{
    ui->setupUi(this);
}

Classic_fight::~Classic_fight()
{
    delete ui;
}
