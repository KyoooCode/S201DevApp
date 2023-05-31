/********************************************************************************
** Form generated from reading UI file 'changervitesse.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGERVITESSE_H
#define UI_CHANGERVITESSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChangerVitesse
{
public:
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QSlider *sVitesse;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *bValider;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *ChangerVitesse)
    {
        if (ChangerVitesse->objectName().isEmpty())
            ChangerVitesse->setObjectName(QString::fromUtf8("ChangerVitesse"));
        ChangerVitesse->resize(392, 211);
        horizontalLayoutWidget_4 = new QWidget(ChangerVitesse);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(10, 10, 361, 181));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(horizontalLayoutWidget_4);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        sVitesse = new QSlider(horizontalLayoutWidget_4);
        sVitesse->setObjectName(QString::fromUtf8("sVitesse"));
        sVitesse->setMinimum(1);
        sVitesse->setMaximum(10);
        sVitesse->setPageStep(1);
        sVitesse->setOrientation(Qt::Horizontal);
        sVitesse->setInvertedAppearance(false);
        sVitesse->setInvertedControls(false);
        sVitesse->setTickPosition(QSlider::TicksAbove);

        horizontalLayout_4->addWidget(sVitesse);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(50, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        bValider = new QPushButton(horizontalLayoutWidget_4);
        bValider->setObjectName(QString::fromUtf8("bValider"));
        bValider->setMinimumSize(QSize(100, 20));

        horizontalLayout->addWidget(bValider);

        horizontalSpacer_2 = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout);


        retranslateUi(ChangerVitesse);

        QMetaObject::connectSlotsByName(ChangerVitesse);
    } // setupUi

    void retranslateUi(QDialog *ChangerVitesse)
    {
        ChangerVitesse->setWindowTitle(QCoreApplication::translate("ChangerVitesse", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ChangerVitesse", "R\303\251gler la vitesse de d\303\251filement du diaporama", nullptr));
        bValider->setText(QCoreApplication::translate("ChangerVitesse", "Valider", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangerVitesse: public Ui_ChangerVitesse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGERVITESSE_H
