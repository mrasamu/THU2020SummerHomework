#include "check_plane.h"
#include "ui_check_plane.h"

Check_plane::Check_plane(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Check_plane)
{
    ui->setupUi(this);
}

Check_plane::~Check_plane()
{
    delete ui;
}
