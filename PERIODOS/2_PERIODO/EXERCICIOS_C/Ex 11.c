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
    double ncastrar, total, preco, y;
    
    printf("\n Digite a quantidade de Castrações: ");
    scanf("%lf", &ncastrar);
    
    total = (ncastrar*25.5)/500;
    
    y = ceil (total);
    
    preco = y*60;
    
    printf("\n Precisará de: %lf frascos", y);
    printf("\n Precisará de R$ %.2lf ", preco);
    
    return 0;
}
