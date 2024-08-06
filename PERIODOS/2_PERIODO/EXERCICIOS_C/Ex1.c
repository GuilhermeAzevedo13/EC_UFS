#include <stdio.h>
#include <locale.h>

int main(){
    //Para usar acentos
    setlocale(LC_ALL, "");

    //Declarando valores
    double valor, total;
    int meses;

    printf(" \n Digite o valor a ser depositado [R$]: ");
    scanf("%lf", &valor);

    printf(" \n Digite a quantidade de meses: ");
    scanf("%d", &meses);

    total = valor * meses;

    printf("O valor acumulado será de: %.2lf", total);
    return 0;
}
