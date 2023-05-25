#include "lecteurvue.h"
#include "ui_lecteurvue.h"

LecteurVue::LecteurVue(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LecteurVue)
{
    ui->setupUi(this);

    connect(ui->btnPrecedent, SIGNAL(clicked()), this, SLOT(boutonPrecedent()));
    connect(ui->btnSuivant, SIGNAL(clicked()), this, SLOT(boutonSuivant()));
    connect(ui->btnLancer, SIGNAL(clicked()), this, SLOT(boutonLancer()));
    connect(ui->btnArret, SIGNAL(clicked()), this, SLOT(boutonArret()));
}

LecteurVue::~LecteurVue()
{
    delete ui;
}

void LecteurVue::boutonSuivant()
{
    qDebug() << "Bouton suivant activé";
}

void LecteurVue::boutonPrecedent()
{
    qDebug() << "Bouton precedent activé";
}

void LecteurVue::boutonLancer()
{
    qDebug() << "Bouton lancer activé";
}

void LecteurVue::boutonArret()
{
    qDebug() << "Bouton arrêt activé";
}
