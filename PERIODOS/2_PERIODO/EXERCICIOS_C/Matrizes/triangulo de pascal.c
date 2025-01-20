#include <stdio.h>
#include <stdlib.h>


// Função para calcular o coeficiente binomial
int coeficienteBinomial(int n, int k) {
    int i, coef = 1;
    for (i = 1; i <= k; i++) {
        coef = coef * (n - i + 1) / i;
    }
    return coef;
}

// Função para imprimir o triângulo de pascal
void trianguloPascal(int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", coeficienteBinomial(i, j));
        }
        printf("\n");
    }
}

// Função principal
int main() {
    int n, repetir;
    while(1){
        system("cls");
        n = 0;
        printf("Digite o numero de linhas para imprimir no Triangulo de Pascal: ");
        scanf("%d", &n);
        printf("Triangulo de Pascal com %d linhas:\n", n);
        trianguloPascal(n);

        printf("\nDeseja repetir? [1] Sim [2] Nao ");
        scanf("%d", &repetir);
        if(repetir == 1){
            continue;
        }else{
            break;
        }
    }    
    return 0;
}