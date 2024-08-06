#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>



void Cadastro (char placa[7], char nome[21], int *numCarros){

    //Limpa o Buffer
    setbuf(stdin, 0);

    printf("\nDigite a placa do Carro. Ex: [ABC123]: \n");
    scanf("%s", placa);

    printf("\nDigite o nome do Proprietario: ");
    scanf("%s", nome);

    (*numCarros)++;

    printf("Carro adicionado com sucesso!\n");

    printf("Pressione enter para voltar ao menu principal\n");
    getchar(); // espera o usuario pressionar enter
    return; // retorna para a funcao principal

}

int main(int *numCarros){
    setlocale(LC_ALL, "Portuguese");

    int opcao = 0;
    
    while(1){
    printf(">>>>> ESTACIONAMENTO CAPIVARA FELIZ <<<<<");
    printf("\n[1] CADASTRAR ENTRADA DO VEICULO\n");
    printf("\n[2] MOSTRAR A VAGA DO VEICULO\n");
    printf("\n[3] PAGAMENTO\n");
    printf("\n[0] SAIR\n");
    printf("\nOPCAO: \n");
    scanf("%d", &opcao);

    switch(opcao){
        case 0:
            printf("Encerrando programa...\n");
            return 0;
        case 1:
            char placa[7], nome[21];
            Cadastro (placa, nome, &numCarros);
            break;
        case 2:
        case 3:
        default:
            printf("\n Opcao invalida");
            break;
    }
    }
return 0;
}
