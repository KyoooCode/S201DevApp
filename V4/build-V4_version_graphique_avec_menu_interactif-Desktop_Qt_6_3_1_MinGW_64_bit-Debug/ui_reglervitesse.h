/********************************************************************************
** Form generated from reading UI file 'reglervitesse.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGLERVITESSE_H
#define UI_REGLERVITESSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_ReglerVitesse
{
public:

    void setupUi(QDialog *ReglerVitesse)
    {
        if (ReglerVitesse->objectName().isEmpty())
            ReglerVitesse->setObjectName(QString::fromUtf8("ReglerVitesse"));
        ReglerVitesse->resize(400, 300);

        retranslateUi(ReglerVitesse);

        QMetaObject::connectSlotsByName(ReglerVitesse);
    } // setupUi

    void retranslateUi(QDialog *ReglerVitesse)
    {
        ReglerVitesse->setWindowTitle(QCoreApplication::translate("ReglerVitesse", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReglerVitesse: public Ui_ReglerVitesse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGLERVITESSE_H
