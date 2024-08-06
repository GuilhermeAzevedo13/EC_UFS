/*Escrever programa para calcular:
25
∑ 9n
n=0
Os termos do somatório devem ser exibidos, além do resultado final.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n, cont = 25, soma = 0;

    soma = 0;

    for(n = 0; n <= cont; n++){
        printf("\n%d  \n ", 9*n);
        soma = soma + (9*n);
    }

    printf("\n A soma desse Somatorio eh: %d", soma);
    return 0;
}