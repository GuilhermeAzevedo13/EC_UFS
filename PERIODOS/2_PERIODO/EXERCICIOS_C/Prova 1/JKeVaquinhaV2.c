// JK faz vaquinha para proteção animal

#include <stdio.h>

int main(){
	float Meta, Doacao, Soma = 0;
	printf("Meta da vaquinha: ");
	scanf("%f",&Meta);
	do{
	  printf("Valor da doacao: ");
	  scanf("%f",&Doacao);
	  Soma = Soma + Doacao;
	  printf("Soma parcial: %.2f \n",Soma);}
	while (Soma<Meta);
	if (Soma == Meta)
	  printf("A meta da vaquinha foi alcancada!");
	else
	  printf("A meta foi ultrapassada!");
    return 0;
}
