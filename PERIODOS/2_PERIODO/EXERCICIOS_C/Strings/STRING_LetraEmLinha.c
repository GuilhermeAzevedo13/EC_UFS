#include <stdio.h>
#include <string.h>
int main(){
  //string
  char S[21];
  printf("Digite uma palavra: ");
  //leitura
  scanf("%s",S);
  //processamento
  int cont;
  for (cont=1; cont<=strlen(S); cont++)
    printf("%c \n",S[cont-1]);
  return 0;}
