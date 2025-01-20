#include <stdio.h>

int main(){
  int Dias, Meses=0;
  printf("Qual o numero de dias? ");
  scanf("%d",&Dias);
  while (Dias > 30){
    Dias = Dias - 30;
    Meses++;} //Meses = Meses + 1;
  printf("Corresponde a %d meses.",Meses);
  printf("\n Com sobra de %d dias.", Dias);
return 0;}
