/*Considere um double (sem considerar casas decimais) não divisível por 5. 
Deseja-se trocar os dígitos de duas posições distintas para obter um número que seja divisível por 5 
e queremos que o número resultante após a troca seja o maior número divisível por 5 possível. 
Exemplo: dado 7 3 0 1 0 5 6 9 7 5 4 2, entre trocar o dígito da 6a posição com o da última obtendo 
7 3 0 1 0 2 6 9 7 5 4 5 é preferível trocar o da 3a posição com a última obtendo 7 3 2 1 0 5 6 9 7 5 4 2 
uma vez que o 2o valor obtido, 732.105.697.542 é maior que 730.102.607.545. Dado um número na entrada, 
não divisível por 5, escrever programa em C para obter o maior número divisível por 5 que pode ser obtido 
com exatamente uma troca de dígitos entre duas posições distintas. Caso não seja possível obter um número 
divisível por 5, exiba uma mensagem de erro. Ao concluir uma exibição, perguntar ao usuário se ele deseja inserir outra entrada.

Caso de Teste 1:
7 3 0 1 0 5 6 9 7 5 4 2
Saída 1:
7 3 2 1 0 5 6 9 7 5 4 0

Caso de Teste 2:
7 4 1 2 9
Saída 2:
-1

Caso de Teste 3:
0 0 7 8 4 5 3 1
Saída 3
1 0 7 8 4 5 3 0*/

#include <stdio.h>

// Função que verifica se um número é divisível por 5
int divisivelpor5(int num) {
    return num % 5 == 0;
}

// Função que realiza a troca de dois dígitos em um número
int trocadigitos(int num, int i, int j) {
    int digit_i = (num / i) % 10;
    int digit_j = (num / j) % 10;
    return num - digit_i * i - digit_j * j + digit_i * j + digit_j * i;
}

int main() {
    int num;
    char opcao;
    do {
        // Leitura do número
        printf("Digite um numero nao divisivel por 5: ");
        scanf("%d", &num);

        // Verifica se o número é divisível por 5
        if (divisivelpor5(num)) {
            printf("O numero digitado ja e divisivel por 5.\n");
            continue;
        }

        int maiorDiv5 = -1;
        // Realiza a troca de dois dígitos em todas as posições possíveis
        for (int i = 1; i <= 1000000000; i *= 10) {
            for (int j = i * 10; j <= 1000000000; j *= 10) {
                // Verifica se os dígitos em i e j são diferentes
                if (((num / i) % 10) != ((num / j) % 10)) {
                    int newNum = trocadigitos(num, i, j);
                    // Verifica se o novo número é divisível por 5 e é maior que o atual
                    if (divisivelpor5(newNum) && newNum > maiorDiv5) {
                        maiorDiv5 = newNum;
                    }
                }
            }
        }

        // Verifica se foi possível obter um número divisível por 5
        if (maiorDiv5 == -1) {
            printf("Nao e possivel obter um numero divisivel por 5 com uma troca de digitos.\n");
        } else {
            printf("Maior numero divisivel por 5: %d\n", maiorDiv5);
        }

        // Pergunta ao usuário se deseja inserir outra entrada
        printf("Deseja inserir outra entrada? (s/n): ");
        scanf(" %c", &opcao);
    } while (opcao == 's' || opcao == 'S');

    return 0;
}