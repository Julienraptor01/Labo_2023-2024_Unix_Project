#include <stdio.h>
#include <stdlib.h>
#include <mysql.h>
#include <time.h>
#include <string.h>

typedef struct
{
  char nom[20];
  char gsm[20];
  char email[40];  
} ETUDIANT;

ETUDIANT Elm[] = 
{
  {"Wagner","0498.65.56.89","wagner@hepl.be"},
  {"Quettier","0476.11.12.13","quettier@gmail.com"},
  {"Wilvers","0477.22.22.88","wilvers@hepl.be"}
};

int main(int argc,char *argv[])
{
  // Connection a MySql
  printf("Connection a la BD...\n");
  MYSQL* connexion = mysql_init(NULL);
  mysql_real_connect(connexion,"localhost","Student","PassStudent1_","PourStudent",0,0,0);

  // Creation d'une table UNIX_FINAL
  printf("Creation de la table UNIX_FINAL...\n");
  mysql_query(connexion,"drop table UNIX_FINAL;"); // au cas ou elle existerait deja
  //mysql_query(connexion,"create table UNIX_FINAL (id INT(4) auto_increment primary key, nom varchar(20),motdepasse varchar(8),gsm varchar(20),email varchar(40));");
  mysql_query(connexion,"create table UNIX_FINAL (id INT(4) auto_increment primary key, nom varchar(20),gsm varchar(20),email varchar(40));");

  // Ajout de tuples dans la table
  /*
  printf("Ajout de 3 users la table UNIX_FINAL...\n");
  char requete[256];
  for (int i=0 ; i<3 ; i++)
  {
	  sprintf(requete,"insert into UNIX_FINAL values (NULL,'%s','%s','%s');",Elm[i].nom,Elm[i].gsm,Elm[i].email);
	  mysql_query(connexion,requete);
  }
  */

  // Deconnection de la BD
  mysql_close(connexion);
  exit(0);
}
