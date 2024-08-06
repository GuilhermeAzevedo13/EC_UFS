#include <stdio.h>
/* Barca Viking: 1,5m de altura e 12 anos.
Elevator of Death: 1,4m de altura e 14 anos.
Final Killer: 1,7m de altura ou 16 anos. 
Trem Fantasma: 1,35m de altura e 8 anos.
Montanha Russa: 1,6m ou 12 anos*/
int main(){
  int Altura, Idade, Quant=0;
  printf("Digite altura e idade: ");
  scanf("%d%d",&Altura,&Idade);
  Quant=Quant + (Altura>=150 && Idade>=12);
  Quant=Quant + (Altura>=140 && Idade>=14);
  Quant=Quant + (Altura>=170 || Idade>=16);
  Quant=Quant + (Altura>=135 && Idade>=8);
  Quant=Quant + (Altura>=160 || Idade>=12);
  printf("Pode brincar em %d brinquedos.\n",Quant);
  return 0;}
