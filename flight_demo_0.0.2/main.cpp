#include "begin_page.h"
#include<connection.h>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    if(!createConnection())
       return 1;
    Begin_page w;
    w.showMaximized();
    return a.exec();
}
