/* Uma pessoa deve fazer uso de X comprimidos ao m�s e que em cada
caixa desse h� N unidades (comprimidos); escrever um programa em
C, onde se l� X e N e � exibido o n�mero de caixas a serem adquiridas,
aplicando a fun��o QuocienteExato dada abaixo, ajustando seu
nome para QuocienteInteiro :
 */ 
 
#include <stdio.h>
#include <math.h>

int QuocienteExato (int Dividendo, int Divisor) {
	
	float Divisao;
	
	Divisao = (float) Dividendo / Divisor;
	Divisao = ceil (Divisao);
	
	return (int) Divisao;
}

int main () {
	
	// a = Comprimidos tomados em um dia
	// b = Quantidade de Comprimidos em Uma Caixa do Remedio
	// valor = Quantidade de Comprimidos que se deve usar em 1 m�s
	
	int a, b, valor;
	
	printf("\n Digite a quantidade Comprimidos tomados em 1 dia: ");
	scanf("%d", &a);
	
	printf("\n Digite a quantidade de Comprimidos em uma Caixa: ");
	scanf("%d", &b);
	
	valor = a*30;
	
	printf("\n Quantidade de Caixas Necessarias: %d ", QuocienteExato (valor, b));
	
	return 0;
}
