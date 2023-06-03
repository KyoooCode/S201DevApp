#include "database.h"

Database::Database()
{
    db = QSqlDatabase::addDatabase(CONNECT_TYPE);
    db.setHostName(HOST_NAME);
    db.setDatabaseName(DATABASE_NAME);
    db.setUserName(USER_NAME);
    db.setPassword(MDP_USER);
    db.setPort(CONNECT_PORT);

}

bool Database::openDataBase(){

    return db.open();
}

void Database::closeDataBase(){
    if(db.open())
    {
        db.close();
    }
}

QSqlDatabase Database::getDb()
{
   return db;
}
