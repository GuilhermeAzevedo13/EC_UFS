/*Implementar programa para ler total de vendas, de um 
determinado mês, dos 10 vendedores da “Matura”, 
calcular a média de vendas do grupo de vendedores, e 
exibir quantos vendedores apresentaram desempenho 
(vendas) abaixo da média.*/

#include <stdio.h>
#include <stdlib.h>

int desempenho(int vendas[10]){

    int aux, soma, media_vendas, quant;

    soma = 0;
    for(aux = 0; aux < 10; aux++){
        soma = soma + vendas[aux];
    }

    media_vendas = soma/10;

    quant = 0;
    for(aux = 0; aux < 10; aux++){
        if(vendas[aux] < media_vendas){
            quant = quant + 1;
        }
    }
return quant;   
}

int main(){
    int vendedores[10], cont;
    int teste;

    for(cont = 0; cont < 10; cont++){
        printf("\nVendedor %d >> Informe o numero de vendas: ", cont + 1);
        scanf("%d", &vendedores[cont]);
    }

    teste = desempenho(vendedores);

    printf("\nO numero de Vendedores abaixo da media eh: %d", teste);
return 0;
}