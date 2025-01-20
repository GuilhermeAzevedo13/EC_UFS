#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define m 0.0351
#define sigma 0.0001

int main(){

    float M, incerteza = 0;;
    int rept, aux, continuar;


    M = 0;
    continuar = 0;
    while(1){
    for(aux = 1; aux <= rept; aux++){
    M = 0;
    incerteza = 0;
    printf("\nDigite a Massa do Carrinho %d: ", aux);
    scanf("%f", &M);

    incerteza = sqrt(((M * sigma) * (M * sigma)) + ((m * sigma) * (m * sigma)));

    printf("\nA incerteza eh: %f", incerteza);

    }

    printf("\nDeseja Continuar? [1] Sim [2] Nao ");
    scanf("%d", &continuar);

    if(continuar == 1){
        system("cls");
        continue;
    }else{
        break;
    }
    }
return 0;
}