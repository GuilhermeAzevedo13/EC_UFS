#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){

    printf("==== PROPAGAÇÃO DE INCERTEZAS ====");

    printf("\n");

    //Para usar acentos
    setlocale(LC_ALL, "");

    // Definindo variaveis
    double sigmaA, a, sigmaG;

    // Lendo primeiro valor

    printf("\n");

    printf("Digite o sigmaA: ");
    scanf("%lf", &sigmaA);

    printf("\n");

    //Lendo segundo valor
    printf("Digite o a: ");
    scanf("%lf", &a);

    printf("\n");

    //Resultado
    sigmaG = sqrt((pow((sigmaA/a),2)) + (pow((sigmaA/a),2)))* 2 * a;
    printf("Valor de SigmaG é : %lf", sigmaG);
    printf("\n");
    
    return 0;
}

