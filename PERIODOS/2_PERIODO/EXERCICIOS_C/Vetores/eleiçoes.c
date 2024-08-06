/*Escreva um programa que 
transforme o computador numa urna eletrônica, em segundo 
turno, para presidente de um país chamado Ambrolândia. 
Nessas eleições concorrem os candidatos 83-Alibabá e 93-
Alcapone. Cada voto deve ser dado pelo número do candidato, 
permitindo-se ainda o voto 0 para voto em branco. Qualquer 
voto diferente dos já citados é considerado nulo. No final da 
eleição o programa deve emitir um relatório contendo a 
votação de cada candidato, a quantidade votos em branco, a 
quantidade de votos nulos e o candidato eleito.
A entrada consiste de um conjunto de números inteiros, um 
por linha. A eleição termina quando o número digitado é -1.
A saída é composta de: quantidade de votos do candidato 
Alibabá, quantidade de votos do candidato Alcapone, 
quantidade de votos em branco, quantidade de votos nulos, e 
qual foi o candidato vencedor*/

#include <stdio.h>
#include <stdlib.h>

int votar[4]; // Variável global para armazenar os votos

void votacao(int escolha){
        if(escolha == 83){
            votar[0] = votar[0] + 1;
            printf("\nVoce votou no ALIBABA!\n");
            printf("\n");
        }else if(escolha == 93){
            votar[1] = votar[1] + 1;
            printf("\nVoce votou no ALCAPONE!\n");
            printf("\n");
        }else if(escolha == 0){
            votar[2] = votar[2] + 1;
            printf("\nVoce votou NULO!\n");
            printf("\n");
        }else if(escolha == -1){
            printf("\nA eleicao terminou, vamos para os resultados!!!");
            printf("\n");
            printf("\n %d pessoas votaram no ALIBABA", votar[0]);
            printf("\n %d pessoas votaram no ALCAPONE", votar[1]);
            printf("\n %d pessoas votaram NULO", votar[2]);
            printf("\n %d pessoas votaram em BRANCO", votar[3]);
            if(votar[0] > votar[1]){
                printf("\nO vencedor foi ALIBABA\n");
            }else{
                printf("\nO vencedor foi ALCAPONE\n");
            }
        }else{
            votar[3] = votar[3] + 1;
            printf("\nVoce votou em BRANCO!\n");
            printf("\n");
        }
        system("pause");
}

int main(){

    int opcao;

    // Zera o vetor "votar" antes de iniciar a votação
    votar[0] = 0;
    votar[1] = 0;
    votar[2] = 0;
    votar[3] = 0;

    printf("\n>>>>> ELEICAO CIDADE CAPIVARA <<<<<");
    printf("\nDIGITE ABAIXO EM QUEM IRA VOTAR:");
    printf("\nDIGITE [83] - ALIBABA");
    printf("\nDIGITE [93] - ALCAPONE");
    printf("\nDIGITE [0] - NULO");
    printf("\nDIGITE [-1] - ENCERRAR ELEICAO");
    printf("\n");
    while(opcao != -1){
        printf("\nOPCAO: ");
        scanf("%d", &opcao);
        votacao(opcao);
        if(opcao == -1){
            break;
        }
    }
return 0;
}