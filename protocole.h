
#define CLE 1234
//      requete             sens      data1           data2         texte

#define CONNECT       1  // C -> S
#define DECONNECT     2  // C -> S
#define LOGIN         3  // C -> S    "1" ou "0"      nom           mot de passe
//                          S -> C    "OK" ou "KO"                  reponse en phrase pour l'utilisateur
#define LOGOUT        4  // C -> S 
#define ADD_USER      5  // S -> C    nom
#define REMOVE_USER   6  // S -> C    nom
#define ACCEPT_USER   7  // C -> S    nom
#define REFUSE_USER   8  // C -> S    nom
#define SEND          9  // C -> S                                  message
//                          S -> C    nom expediteur                message
#define UPDATE_PUB    10 // P -> S
#define CONSULT       11 // C -> S    nom
                        // S -> Co    nom
                        // Co -> C    "OK" ou "KO"    gsm           email
#define MODIF1        12 // C -> S
                        // S -> Mo    nom
                        // Mo -> C                    gsm           email
                  // ou    Mo -> C    "KO"            "KO"          "KO"         si modif déjà en cours
#define MODIF2        13 // C -> S    mot de passe    gsm           email
                        // S -> Mo    mot de passe    gsm           email
#define LOGIN_ADMIN   14 // A -> S
                         // S -> A    "OK" ou "KO"
#define LOGOUT_ADMIN  15 // A -> S
#define NEW_USER      16 // A -> S    login           mot de passe
                         // S -> A    "OK" ou "KO"                  reponse en phrase pour l'administrateur
#define DELETE_USER   17 // A -> S    login
                         // S -> A    "OK" ou "KO"                  reponse en phrase pour l'administrateur
#define NEW_PUB       18 // A -> S    nbSecondes                    texte de la pub

typedef struct
{
  long  type;
  int   expediteur;
  int   requete;
  char  data1[20];
  char  data2[20];
  char  texte[200];	
} MESSAGE;

typedef struct
{
  char texte[200];
  int  nbSecondes;
} PUBLICITE;

typedef struct
{
  int   pidFenetre;
  char  nom[20];
  int   autres[5];
  int   pidModification;
} CONNEXION;

typedef struct
{
  // utilisés uniquement à partir de l'étape 7
  char  publicite[200];
  int   pidServeur1;
  int   pidServeur2;
  int   pidPublicite;
  int   pidAdmin;
  CONNEXION connexions[6];
} TAB_CONNEXIONS;
