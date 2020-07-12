#ifndef CHECK_PLANE_H
#define CHECK_PLANE_H

#include <QMainWindow>

namespace Ui {
class Check_plane;
}

class Check_plane : public QMainWindow
{
    Q_OBJECT

public:
    explicit Check_plane(QWidget *parent = nullptr);
    ~Check_plane();

private:
    Ui::Check_plane *ui;
};

#endif // CHECK_PLANE_H
