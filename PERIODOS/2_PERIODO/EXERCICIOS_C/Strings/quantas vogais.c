/*Escrever programa para ler uma palavra P 
qualquer com até 20 caracteres e identificar 
quantas vogais P apresenta, por meio de uma 
função F (a identificação da quantidade de vogais 
de uma dada palavra e vogal).*/

#include <stdio.h>
#include <string.h>

int quantidadeVogais(char palavra[]) {
    int i, contador = 0;
    for(i = 0; i < strlen(palavra); i++) {
        if(strchr("aeiouAEIOU", palavra[i]) != NULL) {
            contador++;
        }
    }
    return contador;
}

int main() {
    char palavra[21];
    printf("Digite uma palavra com ate 20 caracteres: ");
    scanf("%s", palavra);
    printf("A palavra %s tem %d vogais.\n", palavra, quantidadeVogais(palavra));
    return 0;
}