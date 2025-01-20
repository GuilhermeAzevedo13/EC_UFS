/*Escrever programa para efetuar a exibição dos 30 primeiros 
números ímpares a partir de 51.*/
#include <stdio.h>

int main(){

    int cont;

    for (cont = 51; cont < 110; cont = cont + 2){
        printf("%d\n==\n", cont);
    }
    return 0;
}