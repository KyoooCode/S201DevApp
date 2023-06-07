#ifndef CHANGERVITESSE_H
#define CHANGERVITESSE_H

#include <QDialog>

namespace Ui {
class ChangerVitesse;
}

class ChangerVitesse : public QDialog
{
    Q_OBJECT

public:
    explicit ChangerVitesse(QWidget *parent = nullptr);
    ~ChangerVitesse();
    int getVitesse();
    //BUT : Retourne l'entier de la vitesse

private:
    Ui::ChangerVitesse *ui;

private slots:
    void valider();
    //BUT : Permet de valider la vitesse choisie
};

#endif // CHANGERVITESSE_H
