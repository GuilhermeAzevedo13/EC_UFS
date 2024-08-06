#include <stdio.h>

int main(){
  int N, Cont=0, Aux;
  printf("Valor: ");
  scanf("%d",&N);
  while (Cont < N){// Cont conta as linhas da saída
    Cont++;
    Aux = 1;
    while (Aux <= Cont){
      printf("%d ",Aux);
      if (Aux == Cont)
        printf("\n");
      Aux++;}}     
return 0;}
