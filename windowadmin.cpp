#include "windowadmin.h"
#include "ui_windowadmin.h"
#include <QMessageBox>
#include <unistd.h>
#include <sys/ipc.h>
#include <sys/msg.h>

extern int idQ;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
WindowAdmin::WindowAdmin(QWidget *parent):QMainWindow(parent),ui(new Ui::WindowAdmin)
{
    ui->setupUi(this);
    ::close(2);
}

WindowAdmin::~WindowAdmin()
{
    delete ui;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
///// Fonctions utiles : ne pas modifier /////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
void WindowAdmin::setNom(const char* Text)
{
  if (strlen(Text) == 0 )
  {
    ui->lineEditNom->clear();
    return;
  }
  ui->lineEditNom->setText(Text);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
const char* WindowAdmin::getNom()
{
  strcpy(nom,ui->lineEditNom->text().toStdString().c_str());
  return nom;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
void WindowAdmin::setMotDePasse(const char* Text)
{
  if (strlen(Text) == 0 )
  {
    ui->lineEditMotDePasse->clear();
    return;
  }
  ui->lineEditMotDePasse->setText(Text);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
const char* WindowAdmin::getMotDePasse()
{
  strcpy(motDePasse,ui->lineEditMotDePasse->text().toStdString().c_str());
  return motDePasse;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
void WindowAdmin::setTexte(const char* Text)
{
  if (strlen(Text) == 0 )
  {
    ui->lineEditTexte->clear();
    return;
  }
  ui->lineEditTexte->setText(Text);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
const char* WindowAdmin::getTexte()
{
  strcpy(texte,ui->lineEditTexte->text().toStdString().c_str());
  return texte;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
void WindowAdmin::setNbSecondes(int n)
{
  char Text[10];
  sprintf(Text,"%d",n);
  ui->lineEditNbSecondes->setText(Text);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
int WindowAdmin::getNbSecondes()
{
  char tmp[10];
  strcpy(tmp,ui->lineEditNbSecondes->text().toStdString().c_str());
  return atoi(tmp);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
///// Fonctions permettant d'afficher des boites de dialogue /////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
void WindowAdmin::dialogueMessage(const char* titre,const char* message)
{
   QMessageBox::information(this,titre,message);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
void WindowAdmin::dialogueErreur(const char* titre,const char* message)
{
   QMessageBox::critical(this,titre,message);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
///// Fonctions clics sur les boutons ////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
void WindowAdmin::on_pushButtonAjouterUtilisateur_clicked()
{
  // TO DO
}

void WindowAdmin::on_pushButtonSupprimerUtilisateur_clicked()
{
  // TO DO
}

void WindowAdmin::on_pushButtonAjouterPublicite_clicked()
{
  // TO DO
}

void WindowAdmin::on_pushButtonQuitter_clicked()
{
  // TO DO
  exit(0);
}