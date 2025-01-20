/*Numa loja de departamentos há 35 departamentos. Do total de vendas 
diárias de cada departamento a loja destina 3,5% a uma ONG se esta 
(venda) ultrapassar R$5.500,00. Escrever programa para ler a venda 
diária de cada departamento e exibir o montante destinado à citada 
ONG.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

#define porcent_ONG 0.035

int main(){
    setlocale(LC_ALL, "Portuguese");

    int aux, repetir;
    float vendadepart[10], soma;

    soma = 0;

    do{
    for(aux = 0; aux < 10; aux ++){
        printf("\nDigite a venda do departamento %d: ", aux + 1);
        scanf("%f", &vendadepart[aux]);
        if(vendadepart[aux] > 5500){
            soma = soma + (vendadepart[aux]*porcent_ONG);
        }
    }
    printf ("\nO montante destinado a ONG sera de : R$ %.2f", soma);
    printf("\n");
    printf("\nDeseja repetir? [1] Sim [2] Nao ");
    scanf("%d", &repetir);

    }while(repetir == 1);
    return 0;
}   