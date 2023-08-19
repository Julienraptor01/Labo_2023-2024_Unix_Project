#ifndef WINDOWCLIENT_H
#define WINDOWCLIENT_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class WindowClient; }
QT_END_NAMESPACE

class WindowClient : public QMainWindow
{
    Q_OBJECT

public:
    WindowClient(QWidget *parent = nullptr);
    ~WindowClient();

    void setNom(const char* Text);
    const char* getNom();
    void setMotDePasse(const char* Text);
    const char* getMotDePasse();
    int isNouveauChecked();
    void setPublicite(const char* Text);
    void setTimeOut(int nb);
    void setAEnvoyer(const char* Text);
    const char* getAEnvoyer();
    void setNomRenseignements(const char* Text);
    const char* getNomRenseignements();
    void setGsm(const char* Text);
    void setEmail(const char* Text);

    void setPersonneConnectee(int i,const char* Text);
    const char* getPersonneConnectee(int i);
    void setCheckbox(int i,bool b);
    void ajouteMessage(const char* personne,const char* message);

    void loginOK();
    void logoutOK();

    // Clic sur la croix de la fenetre
    void closeEvent(QCloseEvent *event);

    // Boites de dialogue
    void dialogueMessage(const char *titre, const char *message);
    void dialogueErreur(const char *titre, const char *message);

public slots:
    void on_pushButtonLogin_clicked();
    void on_pushButtonLogout_clicked();
    void on_pushButtonEnvoyer_clicked();
    void on_pushButtonConsulter_clicked();
    void on_pushButtonModifier_clicked();
    void on_checkBox1_clicked(bool checked);
    void on_checkBox2_clicked(bool checked);
    void on_checkBox3_clicked(bool checked);
    void on_checkBox4_clicked(bool checked);
    void on_checkBox5_clicked(bool checked);

private:
    Ui::WindowClient *ui;

    char connectes[6][20];
    char motDePasse[20];
    char aEnvoyer[100];
    char nomR[20];
};
#endif // WINDOWCLIENT_H
