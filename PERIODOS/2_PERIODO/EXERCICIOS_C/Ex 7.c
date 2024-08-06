#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    printf("==== FESTA DE ARROMBA ====");

    printf("\n");

    //Para usar acentos
    setlocale(LC_ALL, "");

    //Definindo variáveis
    int degrau, altura_degrau,a1, a2, a3, a4;
    
    //Recebendo valores
    printf("\n Digite a quantidade de Blocos do 1ª grau: ");
    scanf("%d", &degrau);
    
    printf("\n Digite a altura do degrau: ");
    scanf("%d", &altura_degrau);
    
    a1 = degrau;
    a2 = degrau + altura_degrau;
    a3 = degrau + 2*altura_degrau;
    a4 = degrau + 3*altura_degrau;
    
    printf("\n A quantidade de blocos por degrau é: %d %d %d %d", a1, a2, a3, a4);
    
    return 0;
}
