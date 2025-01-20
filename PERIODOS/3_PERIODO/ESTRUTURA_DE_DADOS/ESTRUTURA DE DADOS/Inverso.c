#include <stdio.h>
int inverterVetor(int vetor[], int tamanho) {
    int i, temp;
    for (i = 0; i < tamanho / 2; i++) {
        temp = vetor[i];
        vetor[i] = vetor[tamanho - 1 - i];
        vetor[tamanho - 1 - i] = temp;
    }
return 0;
}

int main(){
	
	int tamanho = 0, aux,i;
	scanf("%d", &tamanho);
	
	int vetor[tamanho];
	
	for(aux = 0; aux < tamanho; aux++){
		scanf("%d", &vetor[aux]);
	}
	
	inverterVetor(vetor, tamanho);
	
	for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
return 0;
}
