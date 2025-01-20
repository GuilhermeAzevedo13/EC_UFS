#include <stdio.h>

int main(){
	
	int aux;
	
	int vetor1[10];
	int vetor2[10];
	int vetor3[10];
	
	for(aux = 0; aux < 10; aux++){
		scanf("%d", &vetor1[aux]);
	}
	
	for(aux = 0; aux < 10; aux++){
		scanf("%d", &vetor2[aux]);
	}

	for(aux = 0; aux < 10; aux++){
		vetor3[aux] = vetor1[aux] + vetor2[aux];
		printf("%d ", vetor3[aux]);
	}
	
return 0;
}
