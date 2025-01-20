/*Escrever programa para ler 150 números (dados pelo usuário) e 
exibir a soma dos múltiplos de Y lidos (entre os 150 números 
supracitados), sendo Y dado pelo usuário.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int cont = 0, quant = 0, repetir = 1, soma = 0, multi = 0;

    while (1){
    system("cls");
    printf("\nDigite a quantidade de numeros que deseja adicionar: ");
    scanf("%d", &quant);

    printf("\nDigite o numero para saber se tem multiplos em comuns: ");
    scanf("%d", &multi);

    int vetor[quant];

    for(cont = 0; cont < quant; cont++){
        printf("\nDigite o %dº numero: ", cont + 1);
        scanf("%d", &vetor[cont]);
        if(vetor[cont] % multi == 0){
            soma = soma + vetor[cont];
        }
    }

    printf("\nA soma dos multiplos de %d eh: %d", multi, soma);
    printf("\n");
    printf("\nDeseja repetir? [1] Sim [2] Nao : ");
    scanf("%d", &repetir);
    
    if(repetir == 1){
        system("cls");
        continue;
    }else{
        break;
    }
    }
    system("pause");
    return 0;
}