#include "changervitesse.h"
#include "ui_changervitesse.h"

ChangerVitesse::ChangerVitesse(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangerVitesse)
{
    ui->setupUi(this);

    connect(ui->bValider, SIGNAL(clicked()),this, SLOT(valider()));

}

int ChangerVitesse::getVitesse()
{
    return ui->sVitesse->value();
}

ChangerVitesse::~ChangerVitesse()
{
    delete ui;
}


void ChangerVitesse::valider()
{
    close();
}
