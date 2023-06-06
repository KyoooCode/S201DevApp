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

private:
    Ui::ChangerVitesse *ui;

private slots:
    void valider();
};

#endif // CHANGERVITESSE_H
