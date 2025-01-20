/*Escrever programa para exibir os 25 primeiros números pares a 
partir de 2, e a soma desses.*/
#include <stdio.h>

int main(){

    int cont, soma = 0;

    for (cont = 2; cont < 25; cont = cont + 2){
        printf("%d\n", cont);
        soma = soma + cont;
    }
    printf("A soma desses numeros na tela eh: %d\n", soma);
    return 0;
}
