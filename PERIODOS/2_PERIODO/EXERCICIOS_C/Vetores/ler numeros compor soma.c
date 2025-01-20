#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	const int Tamanho = 20;
	int Soma = 0, S, N, Cont = 0, Vetor[Tamanho];
	printf("Qual o limite da Soma? ");
	scanf("%d", &S);
	while((Soma < S) && (Cont < Tamanho)){
		printf("Digite um Valor: ");
		scanf("%d", &N);
		Soma = Soma + N;
		Vetor[Cont] = N;
		Cont++;
	Cont--;
	if (Soma >= S){
		printf("\nLimite sa Soma atingido ou ultrapassado!\n");	
	}else if (Cont+1 == Tamanho){
		printf("\nLimite de quantidade de termos atingido!\n");
	}
	int i;
	for (i=0; i<=Cont; i++){
		printf("%d", Vetor[i]);	
	}
	printf("\n");
	}
	return 0;
}
