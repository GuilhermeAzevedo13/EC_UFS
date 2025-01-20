/* Criar função para retornar o maior
valor de três números passados
como parâmetros. A função criada
deve ser testada num programa.*/

#include <stdio.h>
#include <math.h>

int TesteMaior (int n1, int n2, int n3) {
	if (n1 > n2 && n1 > n3) {
		return n1;
	}else if (n2 > n1 && n2 > n3) {
		return n2;
	}else{
		return n3;
	}
	return 0;
}
 	int main () {
 		
 		int numero1, numero2, numero3;
 		
 		printf("\n Digite os 3 numeros enfileirados: ");
 		scanf("%d %d %d", &numero1, &numero2, &numero3);
 		
 		printf("\n O maior numero eh: %d", TesteMaior (numero1, numero2, numero3));
 		
 		return 0;
	 }
