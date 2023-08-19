#ifndef WINDOWADMIN_H
#define WINDOWADMIN_H

#include <QMainWindow>
#include "protocole.h"

QT_BEGIN_NAMESPACE
namespace Ui { class WindowAdmin; }
QT_END_NAMESPACE

class WindowAdmin : public QMainWindow
{
    Q_OBJECT

public:
    WindowAdmin(QWidget *parent = nullptr);
    ~WindowAdmin();

    void setNom(const char* Text);
    const char* getNom();
    void setMotDePasse(const char* Text);
    const char* getMotDePasse();
    void setTexte(const char* Text);
    const char* getTexte();
    void setNbSecondes(int n);
    int getNbSecondes();

    // Boites de dialogue
    void dialogueMessage(const char *titre, const char *message);
    void dialogueErreur(const char *titre, const char *message);

private slots:
    void on_pushButtonAjouterUtilisateur_clicked();
    void on_pushButtonSupprimerUtilisateur_clicked();
    void on_pushButtonAjouterPublicite_clicked();
    void on_pushButtonQuitter_clicked();

private:
    Ui::WindowAdmin *ui;

    char nom[20];
    char motDePasse[20];
    char texte[200];
    int  nbSecondes;
};
#endif // WINDOWADMIN_H
