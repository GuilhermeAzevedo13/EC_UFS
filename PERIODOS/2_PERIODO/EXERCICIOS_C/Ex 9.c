#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){

    printf("==== FESTA DE ARROMBA ====");

    printf("\n");

    //Para usar acentos
    setlocale(LC_ALL, "");

    //Definindo variáveis
    
    int valor, n100, n50, n20, n10, n5, n2, n1, r100, r50, r20, r10, r5, r2, r1;
    
    printf("\n Digite o valor a ser retirado: R$ ");
    scanf("%d", &valor);
    
    n100 = valor / 100;
    r100 = valor % 100;
    
    n50 = r100 / 50;
    r50 = r100 % 50;
    
    n20 = r50 / 20;
    r20 = r50 % 20;
    
    n10 = r20 / 10;
    r10 = r20 % 10;
    
    n5 = r10 / 5;
    r5 = r10 % 5;
    
    n2 = r5 / 2;
    r2 = r5 % 2;
    
    n1 = r2 / 1;
    r1 = r2 % 1;
    
    printf("\n O valor será de %d cédulas de R$ 100", n100);
    printf("\n O valor será de %d cédulas de R$ 50", n50);
    printf("\n O valor será de %d cédulas de R$ 20", n20);
    printf("\n O valor será de %d cédulas de R$ 10", n10);
    printf("\n O valor será de %d cédulas de R$ 5", n5);
    printf("\n O valor será de %d cédulas de R$ 2", n2);
    printf("\n O valor será de %d cédulas de R$ 1", n1);
    
    return 0;   
}
