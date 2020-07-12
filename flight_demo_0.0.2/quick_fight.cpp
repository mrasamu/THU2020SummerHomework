#include "quick_fight.h"
#include "ui_quick_fight.h"

Quick_fight::Quick_fight(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Quick_fight)
{
    ui->setupUi(this);
}

Quick_fight::~Quick_fight()
{
    delete ui;
}
