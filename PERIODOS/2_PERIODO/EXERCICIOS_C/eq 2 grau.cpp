#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main(){

    printf("==== EQUAÇÃO DO 2 GRAU ====");

    printf("\n");

    //Para usar acentos
    setlocale(LC_ALL, "");

    //Definindo variáveis
    float a, b, c, delta, r1, r2;
    
    printf("\n Digite as variaveis a: ");
    scanf("%f", &a);
    
    system ("pause");
    system ("cls");
    
    printf("\n Digite as variaveis b: ");
    scanf("%f", &b);
    
    system ("pause");
    system ("cls");
    
    printf("\n Digite as variaveis c: ");
    scanf("%f", &c);
    
    system ("pause");
    system ("cls");
    
    delta = b*b - 4*a*c;
    
    r1 = ((-1)*b + sqrt (delta))/2*a;
    r2 = ((-1)*b - sqrt (delta))/2*a;
    
    printf("\n Raiz 1: %f", r1);
    
    printf("\n Raiz 2: %f ", r2);
    
    return 0;
    
    
}
