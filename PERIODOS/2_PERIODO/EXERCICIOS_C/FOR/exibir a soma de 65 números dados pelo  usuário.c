/*Escrever programa para exibir a soma de 65 números dados pelo 
usuário.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int cont, quant = 0, valor = 0, repetir = 1, soma = 0;

    while (1){
    system("cls");
    printf("Digite a quantidade de numeros que deseja somar: ");
    scanf("%d", &quant);

    soma = 0; // acumulador deve ser inicializado antes do loop for

    for(cont = 1; cont <= quant; cont++){
        printf("\nDigite o %dº numero: ", cont);
        scanf("%d", &valor);
        soma = soma + valor; // acumulando os valores
    }
    printf("\nA soma dos valores digitados eh: %d", soma);
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

