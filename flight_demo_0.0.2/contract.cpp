#include "contract.h"
#include "ui_contract.h"

Contract::Contract(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Contract)
{
    ui->setupUi(this);
}

Contract::~Contract()
{
    delete ui;
}
