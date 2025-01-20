#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main(){
  char Nome[21], Sobrenome[21];  //string
  printf("Nome: ");
  gets(Nome);
  printf("Sobrenome: ");
  gets(Sobrenome);  //leituras
  int L;
  for (L=1; L<strlen(Nome); L++)
     Nome[L]=tolower(Nome[L]);
  Nome[0]=toupper(Nome[0]); //nome com inicial maiúscula
  for (L=0; L<strlen(Sobrenome); L++)
     Sobrenome[L]=toupper(Sobrenome[L]);
  //sobrenome em maiúscula
  char Resultado[41]="";
  strcat(Resultado,Sobrenome);
  strcat(Resultado,", ");
  strcat(Resultado,Nome); //composição da saida
  printf("Resultado: %s.\n",Resultado); //saida
  return 0;}
