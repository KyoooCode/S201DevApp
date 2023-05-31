#ifndef REGLERVITESSE_H
#define REGLERVITESSE_H

#include <QDialog>

namespace Ui {
class ReglerVitesse;
}

class ReglerVitesse : public QDialog
{
    Q_OBJECT

public:
    explicit ReglerVitesse(QWidget *parent = nullptr);
    ~ReglerVitesse();

private:
    Ui::ReglerVitesse *ui;
};

#endif // REGLERVITESSE_H
