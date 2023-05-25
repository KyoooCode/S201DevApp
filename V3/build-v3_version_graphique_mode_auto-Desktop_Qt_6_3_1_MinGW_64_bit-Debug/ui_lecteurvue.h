/********************************************************************************
** Form generated from reading UI file 'lecteurvue.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LECTEURVUE_H
#define UI_LECTEURVUE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LecteurVue
{
public:
    QAction *actionA_propos;
    QAction *actionQuitter;
    QWidget *widget;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *titreImage;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnPrecedent;
    QSpacerItem *horizontalSpacer_2;
    QGraphicsView *image;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnSuivant;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *infoDiapo;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnLancer;
    QPushButton *btnArret;
    QLabel *mode;
    QMenuBar *menubar;
    QMenu *menuTitre_diaporama;
    QMenu *menuParam_tre;
    QMenu *menuAide;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LecteurVue)
    {
        if (LecteurVue->objectName().isEmpty())
            LecteurVue->setObjectName(QString::fromUtf8("LecteurVue"));
        LecteurVue->resize(1306, 695);
        actionA_propos = new QAction(LecteurVue);
        actionA_propos->setObjectName(QString::fromUtf8("actionA_propos"));
        actionQuitter = new QAction(LecteurVue);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        widget = new QWidget(LecteurVue);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_6 = new QVBoxLayout(widget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        titreImage = new QLabel(widget);
        titreImage->setObjectName(QString::fromUtf8("titreImage"));
        titreImage->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(titreImage);


        verticalLayout_5->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnPrecedent = new QPushButton(widget);
        btnPrecedent->setObjectName(QString::fromUtf8("btnPrecedent"));

        horizontalLayout_2->addWidget(btnPrecedent);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        image = new QGraphicsView(widget);
        image->setObjectName(QString::fromUtf8("image"));

        horizontalLayout_2->addWidget(image);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        btnSuivant = new QPushButton(widget);
        btnSuivant->setObjectName(QString::fromUtf8("btnSuivant"));
        btnSuivant->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnSuivant->sizePolicy().hasHeightForWidth());
        btnSuivant->setSizePolicy(sizePolicy);
#if QT_CONFIG(shortcut)
        btnSuivant->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)

        horizontalLayout_2->addWidget(btnSuivant);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        infoDiapo = new QLabel(widget);
        infoDiapo->setObjectName(QString::fromUtf8("infoDiapo"));
        infoDiapo->setLayoutDirection(Qt::LeftToRight);
        infoDiapo->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(infoDiapo);


        verticalLayout->addLayout(verticalLayout_2);


        verticalLayout_5->addLayout(verticalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btnLancer = new QPushButton(widget);
        btnLancer->setObjectName(QString::fromUtf8("btnLancer"));
        btnLancer->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_3->addWidget(btnLancer);

        btnArret = new QPushButton(widget);
        btnArret->setObjectName(QString::fromUtf8("btnArret"));
        btnArret->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_3->addWidget(btnArret);

        mode = new QLabel(widget);
        mode->setObjectName(QString::fromUtf8("mode"));
        mode->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(mode);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout_5->addLayout(verticalLayout_3);


        horizontalLayout_5->addLayout(verticalLayout_5);


        verticalLayout_6->addLayout(horizontalLayout_5);

        LecteurVue->setCentralWidget(widget);
        menubar = new QMenuBar(LecteurVue);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1306, 22));
        menuTitre_diaporama = new QMenu(menubar);
        menuTitre_diaporama->setObjectName(QString::fromUtf8("menuTitre_diaporama"));
        menuParam_tre = new QMenu(menubar);
        menuParam_tre->setObjectName(QString::fromUtf8("menuParam_tre"));
        menuAide = new QMenu(menubar);
        menuAide->setObjectName(QString::fromUtf8("menuAide"));
        LecteurVue->setMenuBar(menubar);
        statusbar = new QStatusBar(LecteurVue);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        LecteurVue->setStatusBar(statusbar);

        menubar->addAction(menuTitre_diaporama->menuAction());
        menubar->addAction(menuParam_tre->menuAction());
        menubar->addAction(menuAide->menuAction());
        menuTitre_diaporama->addAction(actionQuitter);
        menuAide->addSeparator();
        menuAide->addAction(actionA_propos);

        retranslateUi(LecteurVue);

        btnSuivant->setDefault(false);


        QMetaObject::connectSlotsByName(LecteurVue);
    } // setupUi

    void retranslateUi(QMainWindow *LecteurVue)
    {
        LecteurVue->setWindowTitle(QCoreApplication::translate("LecteurVue", "LecteurVue", nullptr));
        actionA_propos->setText(QCoreApplication::translate("LecteurVue", "A propos ...", nullptr));
        actionQuitter->setText(QCoreApplication::translate("LecteurVue", "Quitter", nullptr));
        titreImage->setText(QCoreApplication::translate("LecteurVue", "Titre de l'image : xxxxx", nullptr));
        btnPrecedent->setText(QCoreApplication::translate("LecteurVue", "<", nullptr));
        btnSuivant->setText(QCoreApplication::translate("LecteurVue", ">", nullptr));
        infoDiapo->setText(QCoreApplication::translate("LecteurVue", "Rang Img :        Nombre d'images :", nullptr));
        btnLancer->setText(QCoreApplication::translate("LecteurVue", "Lancer", nullptr));
        btnArret->setText(QCoreApplication::translate("LecteurVue", "Arr\303\252ter", nullptr));
        mode->setText(QCoreApplication::translate("LecteurVue", "Mode : xxxxx", nullptr));
        menuTitre_diaporama->setTitle(QCoreApplication::translate("LecteurVue", "Fichier", nullptr));
        menuParam_tre->setTitle(QCoreApplication::translate("LecteurVue", "Param\303\250tre", nullptr));
        menuAide->setTitle(QCoreApplication::translate("LecteurVue", "Aide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LecteurVue: public Ui_LecteurVue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LECTEURVUE_H
