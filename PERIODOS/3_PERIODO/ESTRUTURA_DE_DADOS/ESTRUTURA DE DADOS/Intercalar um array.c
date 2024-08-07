#include <stdio.h>

int main(){
	int valor = 0, aux;
	scanf("%d", &valor);
	
	int vetor1[valor];
	int vetor2[valor];
	
	for(aux = 0; aux < valor; aux++){
		scanf("%d", &vetor1[aux]);
	}

	for(aux = 0; aux < valor; aux++){
		scanf("%d", &vetor2[aux]);
	}
	
	for(aux = 0; aux < valor; aux++){
		printf("%d\n", vetor1[aux]);
		printf("%d\n", vetor2[aux]);
		
	}
return 0;
}
