#include <stdio.h>
#include <string.h>
int main(){
  //string S e caractere C
  char S[16], C;
  //leituras
  printf("Digite uma palavra: "); scanf("%s",S);
  printf("Digite um caractere: "); scanf(" %c",&C);
  //processamento
  int cont, pos=-1;
  for (cont=0; cont<=strlen(S)-1; cont++)
    if (S[cont]==C){
      pos=cont;
      break;}
  //saída
  if (pos==-1)
    printf("Nao ha ocorrencia de %c em %s.",C,S);
  else
    printf("A 1a ocorrencia de %c em %s eh: %d.",C,S,pos+1);
  return 0;}
