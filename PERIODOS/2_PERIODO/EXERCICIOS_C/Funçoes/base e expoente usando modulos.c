/*Criar função para receber dois 
números(parâmetros): base e expoente e 
retornar a potência da base elevada ao 
expoente. A função criada deve ser 
testada num programa.*/

#include <stdio.h>
#include <math.h>

int potencia (int base, int expoente) {
	return pow (base, expoente);
	
	return 0;
}

 	int main () {
 		int n1, n2;
 		
 		printf("\n Digite a base da potencia: ");
 		scanf("%d", &n1);
 		
 		printf("\n Digite o expoente da potencia: ");
 		scanf("%d", &n2);
		
		
		
		
		printf("\n O valor da portencia de base %d e expoente %d eh: %ld ", n1, n2, potencia(n1,n2));
		
		return 0;
	 }
