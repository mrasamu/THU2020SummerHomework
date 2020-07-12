#ifndef CONNECTION_H
#define CONNECTION_H
#include <QSqlDatabase>
#include <QSqlQuery>
static bool createConnection()//用来创造库，如果库有问题，去上一级界面的build文件夹删除数据库再生成
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("flight_database.db");
    if(!db.open()) return false;
    QSqlQuery query;
    query.exec(QString(
        "create table users (name vchar(20) primary key, password vchar(20),question vchar(20),answer vchar(20),number int )"));
    query.exec(QString("insert into users values ('阿萨姆小弟','ZXC123456789','你好','hello','754511207@qq.com')"));
    return true;
}
#endif // CONNECTION_H
