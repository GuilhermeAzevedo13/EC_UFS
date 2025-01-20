// parque

#include <stdio.h>

int main(){
  int Altura, Idade, Quant = 0;
  printf("Altura: ");
  scanf("%d",&Altura);
  printf("Idade: ");
  scanf("%d",&Idade); 
  if ((Altura>=150) && (Idade>=12))
    Quant++;
  if ((Altura>=140) && (Idade>=14))
    Quant++;
  if ((Altura>=170) || (Idade>=16))
    Quant++;
  printf("Pode brincar em %d brinquedos",Quant);
  return 0;
}
