#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){

    printf("==== FESTA DE ARROMBA ====");

    printf("\n");

    //Para usar acentos
    setlocale(LC_ALL, "");

    //Definindo vari�veis
    double ncastrar, total, preco, y;
    
    printf("\n Digite a quantidade de Castra��es: ");
    scanf("%lf", &ncastrar);
    
    total = (ncastrar*25.5)/500;
    
    y = ceil (total);
    
    preco = y*60;
    
    printf("\n Precisar� de: %lf frascos", y);
    printf("\n Precisar� de R$ %.2lf ", preco);
    
    return 0;
}
