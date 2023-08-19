#ifndef DIALOGMODIFICATION_H
#define DIALOGMODIFICATION_H

#include <QDialog>

namespace Ui {
class DialogModification;
}

class DialogModification : public QDialog
{
    Q_OBJECT

public:
    explicit DialogModification(QWidget *parent = nullptr,const char* nom = nullptr,const char* motDePasse = nullptr, const char* gsm = nullptr,const char* email = nullptr);
    ~DialogModification();

    const char* getMotDePasse();
    const char* getGsm();
    const char* getEmail();

private slots:
    void on_pushButtonOk_clicked();

private:
    Ui::DialogModification *ui;

    char motDePasse[40];
    char gsm[40];
    char email[40];
};

#endif // DIALOGMODIFICATION_H
