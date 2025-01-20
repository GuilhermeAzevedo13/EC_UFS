#include <stdio.h>
int main()
{
  int Vendedor, Secao;
  float Venda, Soma;
  for (Vendedor=1; Vendedor<=2; Vendedor++)
    {
      printf("Vendedor: %d\n",Vendedor);
	  Soma=0;
      for (Secao=1; Secao<=3; Secao++)
        {
          printf("Seção: %d\n",Secao);    
          printf("Qual o valor da venda? ");
          scanf("%f",&Venda);
          Soma=Soma+Venda;
	     }
	  printf("A soma de vendas do vendedor %d eh: %10.2f.\n",Vendedor,Soma);
    }
  return 0;	}
