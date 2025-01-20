#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

// Fun��o que calcula o valor de delta
float delta(float A, float B, float C) {
    return ((B * B) - (4 * A * C));
}

// Fun��o que calcula as ra�zes da equa��o
void calcular_raizes(float a, float b, float c) {
    float d, x1, x2;
    
    d = delta(a, b, c);
    if (d >= 0) {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("\nAs ra�zes da equa��o s�o: %.2f e %.2f", x1, x2);
    } else {
        printf("\nA equa��o n�o possui ra�zes reais.");
    }
}

int main () {
    // Para usar acentos
    setlocale(LC_ALL, "Portuguese");
    
    int continuar = 0;
    
    do {
    	system("cls");
    printf("\n========= CALCULADORA DE EQUA��O DO 2� GRAU =========\n");
    printf("\nInforme os coeficientes a, b e c da equa��o de segundo grau:\n");
    
    float a, b, c;
    
        printf("\nDigite o coeficiente [a]: ");
        scanf("%f", &a);

        printf("\nDigite o coeficiente [b]: ");
        scanf("%f", &b);

        printf("\nDigite o coeficiente [c]: ");
        scanf("%f", &c);

        calcular_raizes(a, b, c);

        printf("\n\nDeseja continuar? [1] Sim, [2] N�o ");
        scanf("%d", &continuar);
    } while (continuar == 1);

    printf("\nObrigado por utilizar a calculadora de equa��o do 2� grau. At� logo!\n");
    
    return 0;
}

