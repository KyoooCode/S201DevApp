#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>

#define DATABASE_NAME "bd_diaporama"
#define CONNECT_TYPE "QODBC"
#define USER_NAME "adumolie_bd"
#define MDP_USER "adumolie_bd"
#define CONNECT_PORT 3306
#define HOST_NAME "lakartxela.iutbayonne.univ-pau.fr"

class Database
{
public:
    Database();
    bool openDataBase();
    void closeDataBase();
    QSqlDatabase getDb();

private :
    QSqlDatabase db;
};

#endif // DATABASE_H

