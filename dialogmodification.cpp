#include "dialogmodification.h"
#include "ui_dialogmodification.h"

DialogModification::DialogModification(QWidget *parent,const char* nom,const char* motDePasse, const char* gsm,const char* email) : QDialog(parent),ui(new Ui::DialogModification)
{
    ui->setupUi(this);
    ui->lineEditNom->setText(nom);
    ui->lineEditMotDePasse->setText(motDePasse);
    ui->lineEditGsm->setText(gsm);
    ui->lineEditEmail->setText(email);
}

DialogModification::~DialogModification()
{
    delete ui;
}

void DialogModification::on_pushButtonOk_clicked()
{
    this->hide();
}

const char* DialogModification::getMotDePasse()
{
    strcpy(motDePasse,ui->lineEditMotDePasse->text().toStdString().c_str());
    return motDePasse;
}

const char* DialogModification::getGsm()
{
    strcpy(gsm,ui->lineEditGsm->text().toStdString().c_str());
    return gsm;
}

const char* DialogModification::getEmail()
{
    strcpy(email,ui->lineEditEmail->text().toStdString().c_str());
    return email;
}
