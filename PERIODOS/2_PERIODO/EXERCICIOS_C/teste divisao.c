#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    printf("==== FESTA DE ARROMBA ====");

    printf("\n");

    //Para usar acentos
    setlocale(LC_ALL, "");

    //Definindo variáveis
    int a, b, teste;
    
    printf("\n: ");
    scanf("%d", &a);
    
    printf("\n: ");
    scanf("%d", &b);
    
    teste = a / b;
    
    printf("%d", teste);
    
    return 0;
}
