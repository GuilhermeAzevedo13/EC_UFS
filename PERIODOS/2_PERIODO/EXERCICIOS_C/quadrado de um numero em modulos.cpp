/* Quadrado de um número dado N */

#include <stdio.h>

int quadrado (int x) {
	// Retorna o quadrado de X passado como parâmetro
	
	return (x*x);
}

int main() {
	
	int numero;
	
	printf("\n Digite um numero: ");
	scanf("%d", &numero);
	
	printf("\n Quadrado: %d",quadrado (numero));
	
	return 0;
}
