#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int cont = 0, quant = 0, repetir = 1, soma = 0, multi = 0, numero, cont2 = 0;

    while (1){
    system("cls");
    printf("\nDigite a quantidade de numeros que deseja adicionar: ");
    scanf("%d", &quant);

    printf("\nDigite o numero para saber se tem multiplos em comuns: ");
    scanf("%d", &multi);

    int vetor[quant];

    cont2 = 0;
    soma = 0;

    for(cont = 0; cont2 < quant; cont++){
        printf("\nDigite o %dº numero: ", cont + 1);
        scanf("%d", &numero);
        if(numero % multi == 0){
            vetor[cont2] = numero;
            soma = soma + vetor[cont2];
            cont2++;
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