#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float IncertezaA(float *medicoes, int n);
float Media(float *medicoes, int n);
float DesvioPadraoMedio(float *medicoes, int n);
float IncertezaC(float incertezaA, float incertezaB);

int main(int argc, char** argv){
	setlocale(LC_ALL, "Portuguese");
	
	int tamanho_do_vetor, i, continuar;
	float incertezaA, incertezaB, incertezaC, media, desvioPadrao;
	float* medicoes = malloc(tamanho_do_vetor);
	
	while (1){
		system("clear"); // ou system("cls") para Windows
		
		printf("Quantas medi��es voc� fez? ");
		scanf("%d", &tamanho_do_vetor);
	
		for (i = 0; i < tamanho_do_vetor; i++){
		
			printf("Digite a %d� medi��o: ", i + 1);
			scanf("%f", medicoes + i);
		
		}
	
		printf("\nDigite a incerteza do instrumento: ");
		scanf("%f", &incertezaB);

		media = Media(medicoes, tamanho_do_vetor);
		desvioPadrao = DesvioPadraoMedio(medicoes, tamanho_do_vetor);
		incertezaA = IncertezaA(medicoes, tamanho_do_vetor);
	
	    printf("\nA media das medi��es � igual a: %f\n", media);
		printf("\nO desvio padr�o m�dio das medi��es � igual a: %f\n", desvioPadrao);
		printf("\nA incerteza estat�stica (Tipo A) � igual a: %f\n", incertezaA);

		if (incertezaB != 0){
			incertezaC = IncertezaC(incertezaA, incertezaB);

			printf("\nA incerteza instrumental (Tipo B) � igual a: %f\n", incertezaB);
			printf("\nA incerteza combinada (Tipo C) � igual a: %f\n", incertezaC);

		}

		printf("\nDeseja continuar? \nDigite 1 para continuar: \nDigite 0 para parar:\n");
		scanf("%d", &continuar);
		
		if (continuar == 1){
			continue;
		}
		else{
			break;
		}
		
	}
	
	system("pause");
	
	return 0;
}

float IncertezaA(float *medicoes, int n){
	
	float var = 0, dpm, incerteza, media = 0;
	int i;
	
	for (i = 0; i < n; i++){
		
		media += med
