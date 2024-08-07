#include <stdio.h>

int main(){
	int aux, N = 0;
	
	scanf("%d\n", &N);
	
	int vetor[N], menor = 0, posicaodomenor = 0;
	
	
	for(aux = 0; aux < N; aux++){
		scanf("%d", &vetor[aux]);
	}
	
	menor = vetor[0];
	
	for(aux = 0; aux < N; aux++){
		if (vetor[aux] < menor){
			menor = vetor[aux];
			posicaodomenor = aux;
		}
	}
	
	printf("Menor valor: %d\n", menor);
	printf("Posicao: %d\n", posicaodomenor);
return 0;
}
