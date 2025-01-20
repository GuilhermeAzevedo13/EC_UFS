// para JK evitar "estouro" de cartão de crédito
// 2a etapa - numerar compras

#include <stdio.h>

int Quant = 0;

void ValidaCompra(float *L){
  float D;
  //int Quant=0;
  printf("Debito: ");
  scanf("%f",&D);
  if (*L - D >= 0){
	Quant++; // Quant = Quant + 1;
	printf("Compra %d possivel! \n",Quant);
	*L = *L - D;}
  else
	printf("Esta compra \"estourarah\" o cartao! \n");
  printf("Limite restante: %.2f \n\n",*L);}

int main(){
	float Limite;
	printf("Limite do cartao: ");
	scanf("%f",&Limite);
    while (Limite>0)
	  ValidaCompra(&Limite);
	printf("Seu limite de compras acabou!");
    return 0;
}

