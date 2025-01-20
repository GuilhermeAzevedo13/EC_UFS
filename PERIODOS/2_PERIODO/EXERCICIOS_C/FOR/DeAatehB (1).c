#include <stdio.h>
int main()
{
  int Cont, A, B;
  printf("Valor inicial do intervalo? ");
  scanf("%d",&A);
  printf("Valor final do intervalo? ");
  scanf("%d",&B);
  if (B>=A)
    for (Cont=A; Cont<=B; Cont=Cont+1)
      printf("%d ",Cont);
  else
    for (Cont=A; Cont>=B; Cont=Cont-1)
      printf("%d ",Cont);
  return 0;
}
