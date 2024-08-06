/*Faca um programa que leia uma matriz de 5 linhas e 4 colunas contendo as seguintes
informacoes sobre alunos de uma disciplina, sendo todas as informacoes do tipo inteiro: ˜
• Primeira coluna: numero de matrıcula (use um inteiro)
• Segunda coluna: media das provas
• Terceira coluna: media dos trabalhos
• Quarta coluna: nota final
Elabore um programa que:
5
(a) Leia as tres primeiras informaçoes de cada aluno
(b) Calcule a nota final como sendo a soma da media das provas e da media dos
trabalhos
(c) Imprima a matrıcula do aluno que obteve a maior nota final (assuma que so existe
uma maior nota)
(d) Imprima a media aritmetica das notas finais*/

#include <stdio.h>
#include <stdlib.h>

#define LINHAS 5
#define COLUNAS 4

int main() {
    int matriz[LINHAS][COLUNAS];
    int i, maior_nota_final, aluno_com_maior_nota_final;

    // (a) Leitura das informações de cada aluno
    for (i = 0; i < LINHAS; i++) {
        printf("Informe o numero de matricula do aluno %d: ", i+1);
        scanf("%d", &matriz[i][0]);
        printf("Informe a media das provas do aluno %d: ", i+1);
        scanf("%d", &matriz[i][1]);
        printf("Informe a media dos trabalhos do aluno %d: ", i+1);
        scanf("%d", &matriz[i][2]);

        // (b) Cálculo da nota final
        matriz[i][3] = matriz[i][1] + matriz[i][2];
    }

    // (c) Identificação do aluno com a maior nota final
    maior_nota_final = matriz[0][3];
    aluno_com_maior_nota_final = matriz[0][0];
    for (i = 1; i < LINHAS; i++) {
        if (matriz[i][3] > maior_nota_final) {
            maior_nota_final = matriz[i][3];
            aluno_com_maior_nota_final = matriz[i][0];
        }
    }

    // (d) Cálculo da média aritmética das notas finais
    float media_notas_finais = 0.0;
    for (i = 0; i < LINHAS; i++) {
        media_notas_finais += matriz[i][3];
    }
    media_notas_finais /= LINHAS;

    // Impressão dos resultados
    printf("Matricula do aluno com maior nota final: %d\n", aluno_com_maior_nota_final);
    printf("Media aritmetica das notas finais: %.2f\n", media_notas_finais);

    return 0;
}