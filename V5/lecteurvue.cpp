#include "lecteurvue.h"
#include "ui_lecteurvue.h"


LecteurVue::LecteurVue(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LecteurVue)
{
    ui->setupUi(this);
    _numDiaporamaCourant = 0;

    timer = new QTimer(this);
    db = new Database;
    db->openDataBase();


    dialogVitesse = new ChangerVitesse(this);
    vitesse = getVitesse();
    
    //Connexion slot parametrerDiapo qui permet de charger le diaporama
    connect(ui->actionCharger_diaporama, SIGNAL(triggered()), this, SLOT(parametrerDiapo()));
    //Connexion slot enleverDiapo qui enlève le diaporama chargé
    connect(ui->actionEnlever_Diaporama, SIGNAL(triggered()), this, SLOT(enleverDiapo()));
    
    //Connexion slot boutonPrecedent qui permet de passer à l'image précédente
    connect(ui->btnPrecedent, SIGNAL(clicked()), this, SLOT(boutonPrecedent()));
    //Connexion slot arretDefilementPrecedent qui permet d'arrêter le défilement si l'utilisateur clique sur précédent
    connect(ui->btnPrecedent, SIGNAL(clicked()), this, SLOT(arretDefilementPrecedent()));

    //Connexion slot boutonPrecedent qui permet de passer à l'image suivante    
    connect(ui->btnSuivant, SIGNAL(clicked()), this, SLOT(boutonSuivant()));
    //Connexion slot arretDefilementSuivant qui permet d'arrêter le défilement si l'utilisateur clique sur suivant
    connect(ui->btnSuivant, SIGNAL(clicked()), this, SLOT(arretDefilementSuivant()));
    
    //Connexion slot boutonLancer qui permet de lancer le mode auto
    connect(ui->btnLancer, SIGNAL(clicked()), this, SLOT(boutonLancer()));
    //Connexion slot boutonLancer qui permet d'arrêter le mode auto et de passer au mode manuel
    connect(ui->btnArret, SIGNAL(clicked()), this, SLOT(boutonArret()));
    
    //Connexion slot a Propos qui permet d'afficher la fenêtre à propos qui contient les informations de l'application
    connect(ui->actionA_propos,SIGNAL(triggered()), this, SLOT(aPropos()));
    //Connexion slot quitter qui permet de quitter l'application
    connect(ui->actionQuitter,SIGNAL(triggered()), this, SLOT(quitter()));
    
    //Connexion slot changerVitesse qui permet de changer la vitesse de défilement du mode auto
    connect(ui->actionVitesse,SIGNAL(triggered()),this, SLOT(changerVitesse()));
    
    //Connexion slot boutonSuivant qui permet de lancer le QTimer et d'exécuter le boutonsSuivant selon la vitesse définie 
    connect(timer, &QTimer::timeout, this, &LecteurVue::boutonSuivant);
}

void LecteurVue::parametrerDiapo()
{
    //Changement du diaporama
    changerDiaporama(1);
}

void LecteurVue::enleverDiapo()
{
    //Changement du diaporama pour 0 pour le vider
    changerDiaporama(0);
}


LecteurVue::~LecteurVue()
{
    delete ui;
}


int LecteurVue::getVitesse()
{
    //Si la vitesse n'est pas nulle
    if(!(dialogVitesse == NULL))
    {
        //On retourne la vitesse
        return dialogVitesse->getVitesse();
    }
    return 0;
}

void LecteurVue::changerVitesse()
{
    //Si la vitesse n'est pas nulle
    if(!(dialogVitesse == NULL))
    {
        //On affiche la boite de dialogue pour changer la vitese
        dialogVitesse->show();
    }
}

void LecteurVue::boutonSuivant()
{
    if(_numDiaporamaCourant > 0)
    {
        //Ici on fait la division entière pour savoir si on doit revenir à l'image 0 lorsque qu'on est à la fin du diaporama
        _posImageCourante = (_posImageCourante + 1) % nbImages();
        //On affiche l'image et on actualise les infos
        this->afficher();
        this->actualiserInfoImg();
     }
}

void LecteurVue::boutonPrecedent()
{
    if(_numDiaporamaCourant > 0)
    {
        if (_posImageCourante == 0)
        {
            //Si on se trouve à la première image et qu'on recule, on recule de nbImages()-1 soit on passe à la dernière image
            _posImageCourante = nbImages() - 1;
            //On affiche l'image et on actualise les infos
            this->afficher();
            this->actualiserInfoImg();
        }
        else
        {
            //On recule normalement
            _posImageCourante--;
            //On affiche l'image et on actualise les infos
            this->afficher();
            this->actualiserInfoImg();
        }
    }
}

void LecteurVue::boutonLancer()
{
    if(_numDiaporamaCourant > 0)
    {
        //Si l'état du diapo n'est pas true cela veut dire qu'il est en manuel
        if(!this->etatDiapo)
        {
            //L'utilisateur choisit des chiffres de 1 à 10 secondes, sauf que QTimer est en ms donc on multiplie par 1000
            vitesse = getVitesse() * 1000;
            //On passe l'état du diapo en automatique
            this->etatDiapo = true;
            
            //MAJ des affichages
            ui->mode->setText(QString("Mode : Automatique"));
            this->_posImageCourante = 0;
            this->afficher();
            this->actualiserInfoImg();
            //Lancement du timer avec la vitese donnée
            timer->start(vitesse);
        }
    }
}

void LecteurVue::boutonArret()
{
    if(_numDiaporamaCourant > 0)
        {
        if(this->etatDiapo)
        {
            this->etatDiapo = false;
            ui->mode->setText(QString("Mode : Manuel"));
            timer->stop();
        }
    }
}

void LecteurVue::arretDefilementSuivant()
{
    if(this->etatDiapo)
    {
        this->etatDiapo = false;
        ui->mode->setText(QString("Mode : Manuel"));
        timer->stop();
        boutonPrecedent();
    }
}

void LecteurVue::arretDefilementPrecedent()
{
    if(this->etatDiapo)
    {
        this->etatDiapo = false;
        ui->mode->setText(QString("Mode : Manuel"));
        timer->stop();
        boutonSuivant();
    }
}

void LecteurVue::aPropos()
{
   QMessageBox::information(this, "A propos", "Version : 2\nDate de création : 16/05/2023\nAuteurs : Moreno Alex & Dumolie Alexis");
}

void LecteurVue::quitter()
{
    db->closeDataBase();
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

    QSqlQuery requete;

    requete.prepare("SELECT DiaposDansDiaporama.rang, Familles.nomFamille, Diapos.titrePhoto, Diapos.uriPhoto FROM Diapos JOIN DiaposDansDiaporama ON Diapos.idphoto = DiaposDansDiaporama.idDiapo JOIN Familles ON Diapos.idFam = Familles.idFamille JOIN Diaporamas ON DiaposDansDiaporama.idDiaporama = Diaporamas.idDiaporama WHERE DiaposDansDiaporama.idDiaporama = ?");

    requete.bindValue(0,QVariant(_numDiaporamaCourant));
    if(requete.exec())
    {
        while(requete.next())
        {
            Image* imageACharger;
            imageACharger = new Image(requete.value(0).toInt(),
                                      requete.value(1).toString().toStdString(),
                                      requete.value(2).toString().toStdString(),
                                      ":" + requete.value(3).toString().toStdString());
            _diaporama.push_back(imageACharger);

        }
    }
    else
    {

        qDebug() << "Erreur d'exécution";
    }


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



     this->afficher();
     this->actualiserInfoImg();

     ui->mode->setText(QString("Mode : Manuel"));
     this->etatDiapo = false;


}

void LecteurVue::viderDiaporama()
{
    if(nbImages() > 0)
    {
        int tailleDiapo = nbImages();

        for(int i = 0; i < tailleDiapo; i++)
        {
            _diaporama.pop_back();
            scene->clear();
            ui->titreImage->setText(QString("Titre de l'image : xxxx"));
            ui->infoDiapo->setText(QString("Rang Img :  ") + QString("  Nombre d'images : 0"));
            ui->mode->setText(QString("Mode : xxxx"));
        }
    }

}

void LecteurVue::afficher()
{
    QString cheminImage = QString::fromStdString(this->imageCourante()->getChemin());

    scene = new QGraphicsScene;
    ui->image->setScene(scene);

    QPixmap image(cheminImage);

    int factAgrandissement = 2;
    QSize newTaille(image.width() * factAgrandissement, image.height() * factAgrandissement);

    pixmapItem = new QGraphicsPixmapItem(image.scaled(newTaille,Qt::KeepAspectRatio, Qt::SmoothTransformation));

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
