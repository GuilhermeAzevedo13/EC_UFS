#include <stdio.h>

int main(){
  int N, T1,T2;
  printf("Valor: ");
  scanf("%d",&N);
  while (N % 2 != 0){
    T2 = (N-1)/2;
    T1 = T2 + 1; 
    printf("%d - %d",T1*T1,T2*T2);
    printf("\n\nValor: ");
    scanf("%d",&N);}
return 0;}
