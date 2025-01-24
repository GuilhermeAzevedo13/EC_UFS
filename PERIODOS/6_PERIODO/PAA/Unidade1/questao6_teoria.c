#include <stdio.h>

int main() {
    int n = 0;

    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("\n");

    for (int atual = 0; atual <= n; atual++) { // Itera de 0 até n
        int contador = 1;
        int i = 1;

        while (i <= atual) { // Conta as iterações para o valor atual de n
            i = 2 * i;
            contador++;
        }

        printf("Para n = %d, foram feitas %d iteracoes.\n", atual, contador);
    }

    return 0;
}