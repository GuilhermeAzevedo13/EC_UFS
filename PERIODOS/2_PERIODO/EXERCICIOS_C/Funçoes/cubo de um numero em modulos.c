/* Ler um n�mero e Retorna seu cubo em m�dulos */

#include <stdio.h>

int cubo (int x) {
	
	return (x*x*x);
}

int main () {
	int numero;
	
	printf(" \n Numero: ");
	scanf("%d", &numero);
	
	printf("O cubo do numero %d eh: %d", numero, cubo (numero));
	
	return 0;
}
