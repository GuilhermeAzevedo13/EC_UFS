#include <stdio.h>
int main()
{
  int Cont, Num, Quant, Resultado, Soma;
  printf("Com quantos números deseja trabalhar? ");
  scanf("%d",&Quant);
  printf("Digite um valor: ");
  scanf("%d",&Num);
  Resultado=Num;
  Soma = Num;
  for (Cont=1; Cont<=Quant-1; Cont=Cont+1)
    {
      printf("Digite um valor: ");
      scanf("%d",&Num);
      Soma = Soma + Num;
      if (Num>Resultado)
        Resultado=Num;
	  }	
  printf("Resultado: %d.\n",Resultado);
  printf("Soma: %d.",Soma);
  return 0;	
}
