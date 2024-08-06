#include <stdio.h>

int fatorial(int N){
  if ((N==0) || (N==1))
    return 1;
  else 
    return (N * fatorial(N-1));}

int main()
//R = A! / (B! * (A-B)!)
{
  int A, B;
  printf("Valor de A? ");
  scanf("%d",&A);
  printf("Valor de B? ");
  scanf("%d",&B);
  if ((A<0) || (B<0) || (A<B))
    printf("Erro: Não é possível calcular R.\n");
  else{
    printf("R = %d",fatorial(A) / (fatorial(B)*fatorial(A-B)));}   	
  return 0;
}