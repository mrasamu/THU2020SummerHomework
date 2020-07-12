#ifndef CONTRACT_H
#define CONTRACT_H

#include <QMainWindow>

namespace Ui {
class Contract;
}

class Contract : public QMainWindow
{
    Q_OBJECT

public:
    explicit Contract(QWidget *parent = nullptr);
    ~Contract();

private:
    Ui::Contract *ui;
};

#endif // CONTRACT_H
