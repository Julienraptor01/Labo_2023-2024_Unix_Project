#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "protocole.h"

int main()
{
  int fd;

  if ((fd = open("publicites.dat",O_CREAT | O_WRONLY, 0644)) == -1)
  {
    perror("Erreur de open");
    exit(1);
  }

  PUBLICITE pub[] = 
  {
    {"Les profs d'UNIX et de C++ sont les meilleurs !",5},
    {"Kholanta ce mardi soir à 21h00 sur TF1",7},
    {"En C++, une étape par semaine et c'est gagné !",4},
    {"Le Labo UNIX, c'est pas compliqué...",6}
  };

  for (int i=0 ; i<4 ; i++)
  	if (write(fd,&pub[i],sizeof(PUBLICITE)) != sizeof(PUBLICITE))
  	{
  		perror("Erreur de write");
  		exit(1);
  	}
  
  close(fd);
}