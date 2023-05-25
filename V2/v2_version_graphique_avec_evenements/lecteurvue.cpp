#include "lecteurvue.h"
#include "ui_lecteurvue.h"


LecteurVue::LecteurVue(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LecteurVue)
{
    ui->setupUi(this);
    this->changerDiaporama(1);

    this->afficher();
    this->actualiserInfoImg();

    ui->mode->setText(QString("Mode : Manuel"));

    connect(ui->btnPrecedent, SIGNAL(clicked()), this, SLOT(boutonPrecedent()));
    connect(ui->btnSuivant, SIGNAL(clicked()), this, SLOT(boutonSuivant()));
    connect(ui->btnLancer, SIGNAL(clicked()), this, SLOT(boutonLancer()));
    connect(ui->btnArret, SIGNAL(clicked()), this, SLOT(boutonArret()));
    connect(ui->actionA_propos,SIGNAL(triggered()), this, SLOT(aPropos()));
    connect(ui->actionQuitter,SIGNAL(triggered()), this, SLOT(quitter()));


}

LecteurVue::~LecteurVue()
{
    delete ui;
}

void LecteurVue::boutonSuivant()
{
    _posImageCourante = (_posImageCourante + 1) % nbImages();
    this->afficher();
    this->actualiserInfoImg();
}

void LecteurVue::boutonPrecedent()
{
    if (_posImageCourante == 0)
    {
        _posImageCourante = nbImages() - 1;
        this->afficher();
        this->actualiserInfoImg();
    }
    else
    {
        _posImageCourante--;
        this->afficher();
        this->actualiserInfoImg();
    }
}

void LecteurVue::boutonLancer()
{
    qDebug() << "Bouton lancer activé";
}

void LecteurVue::boutonArret()
{
    qDebug() << "Bouton arrêt activé";
}

void LecteurVue::aPropos()
{
   QMessageBox::information(this, "A propos", "Version : 2\nDate de création : 16/05/2023\nAuteurs : Moreno Alex & Dumolie Alexis");
}

void LecteurVue::quitter()
{
    close();
}

unsigned int LecteurVue::nbImages()
{
    return _diaporama.size();
}

Image *LecteurVue::imageCourante()
{
    return _diaporama[_posImageCourante];
}

unsigned int LecteurVue::numDiaporamaCourant()
{
    return _numDiaporamaCourant;
}

void LecteurVue::changerDiaporama(unsigned int pNumDiaporama)
{
    // s'il y a un diaporama courant, le vider, puis charger le nouveau Diaporama
    if (numDiaporamaCourant() > 0)
    {
        viderDiaporama();
    }
    _numDiaporamaCourant = pNumDiaporama;
    if (numDiaporamaCourant() > 0)
    {
        chargerDiaporama(); // charge le diaporama courant
    }


}

void LecteurVue::chargerDiaporama()
{
    /* Chargement des images associées au diaporama courant
       Dans une version ultérieure, ces données proviendront d'une base de données,
       et correspondront au diaporama choisi */
    Image* imageACharger;
    imageACharger = new Image(4, "personne", "Alice", "F:\\IUT\\Annee_1\\S2\\SAE\\S2.01DevApp\\FINAL\\V2\\v2_version_graphique_avec_evenements\\cartesDisney\\Disney_2.gif");
    _diaporama.push_back(imageACharger);
    imageACharger = new Image(3, "animal", "Bambi", "F:\\IUT\\Annee_1\\S2\\SAE\\S2.01DevApp\\FINAL\\V2\\v2_version_graphique_avec_evenements\\cartesDisney\\Disney_3.gif");
    _diaporama.push_back(imageACharger);
    imageACharger = new Image(2, "personne", "Blanche Neige", "F:\\IUT\\Annee_1\\S2\\SAE\\S2.01DevApp\\FINAL\\V2\\v2_version_graphique_avec_evenements\\cartesDisney\\Disney_4.gif");
    _diaporama.push_back(imageACharger);
    imageACharger = new Image(1, "animal", "Daisy", "F:\\IUT\\Annee_1\\S2\\SAE\\S2.01DevApp\\FINAL\\V2\\v2_version_graphique_avec_evenements\\cartesDisney\\Disney_5.gif");
    _diaporama.push_back(imageACharger);


    // trier le contenu du diaporama par ordre croissant selon le rang de l'image dans le diaporama
    for (unsigned int i = 1; i < nbImages(); i++)
    {
        Image* image = _diaporama[i];
        int j = i - 1;
        while (j >= 0 && _diaporama[j]->getRang() > image->getRang())
        {
            _diaporama[j+1] = _diaporama[j];
            j--;
        }
        _diaporama[j+1] = image;
    }

     _posImageCourante = 0;

     cout << "Diaporama num. " << numDiaporamaCourant() << " selectionne. " << endl;
     cout << nbImages() << " images chargees dans le diaporama" << endl;

}

void LecteurVue::viderDiaporama()
{
    //vide le diaporama s'il n'est pas vide

}

void LecteurVue::afficher()
{

    QString cheminImage = QString::fromStdString(this->imageCourante()->getChemin());
    QGraphicsScene *scene = new QGraphicsScene;
    ui->image->setScene(scene);

    QPixmap image(cheminImage);

    int factAgrandissement = 2;
    QSize newTaille(image.width() * factAgrandissement, image.height() * factAgrandissement);

    QGraphicsPixmapItem *pixmapItem = new QGraphicsPixmapItem(image.scaled(newTaille,Qt::KeepAspectRatio, Qt::SmoothTransformation));

    scene->addItem(pixmapItem);


}

void LecteurVue::actualiserInfoImg()
{
    QString rangImg = QString::number(this->imageCourante()->getRang());
    QString titreImg = QString::fromStdString(this->imageCourante()->getTitre());
    //QString categorieImg = QString::fromStdString(this->imageCourante()->getCategorie());
    QString nbImg = QString::number(this->nbImages());

    QString titre = QString("Titre de l'image : ") + titreImg;
    QString infoDiaporama = QString("Rang Img :  ") + rangImg + QString("  Nombre d'images : ") + nbImg;

    ui->titreImage->setText(titre);
    ui->infoDiapo->setText(infoDiaporama);

}
