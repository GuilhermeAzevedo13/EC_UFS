#include <stdio.h>

// Definição da estrutura para o aluno
struct Aluno {
    char nome[50];
    float notas[3];
    float frequencia;
};

int main() {
    // Variável para armazenar o aluno
    struct Aluno aluno;

    // Leitura dos dados do aluno
    printf("Digite o nome do aluno: ");
    fgets(aluno.nome, 50, stdin);
    printf("Digite as tres notas do aluno: ");
    for (int i = 0; i < 3; i++) {
        scanf("%f", &aluno.notas[i]);
    }
    printf("Digite a frequencia do aluno (em %%): ");
    scanf("%f", &aluno.frequencia);

    // Cálculo da média das notas
    float soma = 0;
    for (int i = 0; i < 3; i++) {
        soma += aluno.notas[i];
    }
    float media = soma / 3;

    // Exibição dos dados do aluno
    printf("\n--- Dados do Aluno ---\n");
    printf("Nome: %s", aluno.nome);
    printf("Notas: %.2f, %.2f, %.2f\n", aluno.notas[0], aluno.notas[1], aluno.notas[2]);
    printf("Frequencia: %.2f%%\n", aluno.frequencia);
    printf("Media: %.2f\n", media);

    return 0;
}
