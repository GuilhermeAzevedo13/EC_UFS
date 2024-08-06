//o desafio eh digitar o máximo de múltiplos de 7

#include <stdio.h>

int main(){
  int N, Quant = 0;
  do{
    scanf("%d",&N);
    if (N % 7 == 0){ 
      Quant++;
      printf("Voce digitou %d valores divisiveis por 7! \n",Quant);}
    else
      break;}
  while (1);
  printf("Voce digitou %d, nao divisivel por 7!",N);
  return 0;}

