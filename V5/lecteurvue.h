#ifndef LECTEURVUE_H
#define LECTEURVUE_H

#include <QSqlQuery>
#include <QMainWindow>
#include <QMessageBox>
#include <vector>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QGraphicsScene>
#include <QSize>
#include <QTimer>
#include "changervitesse.h"
#include "database.h"
#include "image.h"

typedef vector<Image*> Diaporama;

QT_BEGIN_NAMESPACE
namespace Ui { class LecteurVue; }
QT_END_NAMESPACE

class LecteurVue : public QMainWindow
{
    Q_OBJECT

public:
    LecteurVue(QWidget *parent = nullptr);
    ~LecteurVue();
    int getVitesse();

private:
    Ui::LecteurVue *ui;
    unsigned _numDiaporamaCourant;   // numéro du diaporama courant, par défaut 0
    Diaporama _diaporama;            // pointeurs vers les images du diaporama
    unsigned int _posImageCourante;  // position de l'image couante
    bool etatDiapo;                  // etatDiapo = true si mode Auto, false sinon
    QTimer *timer;                   // permet le défilement des images automatique
    ChangerVitesse *dialogVitesse;   // boite de dialogue qui permet à l'utilisateur de changer la vitesse de défilement automatique des images
    QGraphicsPixmapItem *pixmapItem; // objet permettant l'affichage de l'image dans la scène
    QGraphicsScene *scene;           // scène dans laquelle on met l'image
    int vitesse;                     // facteur de vitesse affectée au timer
    Database *db;                    // objet base de données

    
    unsigned int nbImages();
    //BUT : Compte le nombre d'images
    Image *imageCourante();
    //BUT : Permet de routrner l'image courante du diaporama
    unsigned int numDiaporamaCourant();
    //BUT : Retourner le numéro du diaporama courant
    void afficher();
    //BUT : Permet d'afficher l'image courante
    void viderDiaporama();
    //BUT : Permet de vider le diaporama courant
    void chargerDiaporama();
    //BUT : Permet de charger le diaporama
    void changerDiaporama(unsigned int pNumDiaporama);
    //BUT : Permet de changer le diaporama en fonction de son ID
    void actualiserInfoImg();
    //BUT : Permet d'actualiser les infos de l'image courante
    
private slots:
    void enleverDiapo();
    //BUT : Permet d'enlever le diaporama
    void parametrerDiapo();
    //BUT : Permet de paramétrer
    void boutonPrecedent();
    //BUT : Permet de passer à l'image suivante
    void arretDefilementSuivant();
    //BUT : Permet d'arrêter le défilement lorsque l'utilisateur clique sur suivant
    void arretDefilementPrecedent();
    //BUT : Permet d'arrêter le défilement lorsque l'utilisateur clique sur précédent
    void boutonSuivant();
    //BUT : Permet de passer à l'image suivante
    void boutonLancer();
    //BUT : Permet de Lancer le diaporama et de passer au mode auto
    void boutonArret();
    //BUT : Permet de Lancer le diaporama et de passer au mode manuel
    void aPropos();
    //BUT : Permet d'afficher la fenêtre à propos
    void quitter();
    //BUT : Permet de quitter le diaporama
    void changerVitesse();
    //BUT : Changer la vitesse de défilement

};
#endif // LECTEURVUE_H
