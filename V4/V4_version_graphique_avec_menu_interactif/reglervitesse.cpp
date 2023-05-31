#include "reglervitesse.h"
#include "ui_reglervitesse.h"

ReglerVitesse::ReglerVitesse(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReglerVitesse)
{
    ui->setupUi(this);
}

ReglerVitesse::~ReglerVitesse()
{
    delete ui;
}
