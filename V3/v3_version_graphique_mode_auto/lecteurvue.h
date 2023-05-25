#ifndef LECTEURVUE_H
#define LECTEURVUE_H

#include "image.h"
#include <QMainWindow>
#include <QMessageBox>
#include <vector>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QGraphicsScene>
#include <QSize>
#include <QTimer>

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

private:
    Ui::LecteurVue *ui;
    unsigned _numDiaporamaCourant;   // numéro du diaporama courant, par défaut 0
    Diaporama _diaporama;            // pointeurs vers les images du diaporama
    unsigned int _posImageCourante;
    bool etatDiapo;                  // etatDiapo = true si mode Auto, false sinon
    QTimer *timer;

private slots:
    void boutonPrecedent();
    void arretDefilementSuivant();
    void arretDefilementPrecedent();
    void boutonSuivant();
    void boutonLancer();
    void boutonArret();
    void aPropos();
    void quitter();
    unsigned int nbImages();
    Image *imageCourante();
    unsigned int numDiaporamaCourant();
    void afficher();
    void viderDiaporama();
    void chargerDiaporama();
    void changerDiaporama(unsigned int pNumDiaporama);
    void actualiserInfoImg();

};
#endif // LECTEURVUE_H
