#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definicao da estrutura do carro
typedef struct {
    char placa[10];
    char modelo[20];
    char nome[20];
    char cor[10];
    int horas_entrada;
    int minutos_entrada;
} Carro;

// Funcao para adicionar um carro na lista
void adicionarCarro(Carro *listaCarros, int *numCarros) {

    system("cls");

    Carro novoCarro;

    //Limpa o Buffer
    setbuf(stdin, 0);

    printf("Digite a placa do carro: Ex: [ABC1234] ");
    scanf("%s", novoCarro.placa);
    
    printf("Digite o modelo do carro: ");
    scanf("%s", novoCarro.modelo);

    printf("Digite o nome do Motorista: ");
    scanf("%s", novoCarro.nome);

    printf("Digite a cor do carro: ");
    scanf("%s", novoCarro.cor);

    printf("Digite as Horas e os Minutos de Entrada: ");
    scanf("%d:%d", novoCarro.horas_entrada, novoCarro.minutos_entrada);

    listaCarros[*numCarros] = novoCarro;

    (*numCarros)++;

    printf("Carro adicionado com sucesso!\n");

    system("pause");
}

// Funcao para remover um carro da lista
void removerCarro(Carro *listaCarros, int *numCarros) {
    char placa[10];

    int i, j;
    int horas_entrada;
    int minutos_entrada;
    int hora_saida, minuto_saida, duracao_horas, duracao_minutos;
    float pagamento;

    printf("\nDigite a placa do carro que deseja remover: \n");
    scanf("%s", placa);

    hora_saida = 0;
    minuto_saida = 0;
    duracao_horas = 0;
    duracao_minutos = 0;
    pagamento = 0;

    for (i = 0; i < *numCarros; i++) {
        if (strcmp(listaCarros[i].placa, placa) == 0) {
            for (j = i; j < *numCarros-1; j++) {
                listaCarros[j] = listaCarros[j+1];

                printf("Digite a hora e o minuto de saida (hh:mm): ");
                scanf("%d:%d", &hora_saida, &minuto_saida);

                // calcula a duracao em minutos
                int duracao_total_minutos = (hora_saida * 60 + minuto_saida) - (horas_entrada * 60 + minutos_entrada);

                // converte a duracao em minutos para horas e minutos
                duracao_horas = duracao_total_minutos / 60;
                duracao_minutos = duracao_total_minutos % 60;

                printf("Duracao: %d horas e %d minutos\n", duracao_horas, duracao_minutos);
                pagamento = 1*duracao_horas + 0.5*duracao_minutos;
            }
            (*numCarros)--;
            printf("Carro removido com sucesso, PAGAR: R$ %.2f!\n", pagamento);
            return;
        }
    }
    printf("Carro nao encontrado!\n");
    system("pause");
}

// Funcao para exibir a lista de carros estacionados
void exibirLista(Carro *listaCarros, int numCarros) {
    int i;
    printf("Lista de carros estacionados:\n");
    for (i = 0; i < numCarros; i++) {
        printf("\nPlaca: %s\n Modelo: %s\n Nome: %s\n Cor: %s\n Horário de Entrada: %d:%d", listaCarros[i].placa, listaCarros[i].modelo, listaCarros[i].nome, listaCarros[i].cor, listaCarros[i].horas_entrada, listaCarros[i].minutos_entrada);
        printf("\n");
    }

    system("pause");
}

void pagamento() {
    int hora_entrada, minuto_entrada, hora_saida, minuto_saida, duracao_horas, duracao_minutos;

    printf("Digite a hora e o minuto de entrada (hh:mm): ");
    scanf("%d:%d", &hora_entrada, &minuto_entrada);

    printf("Digite a hora e o minuto de saida (hh:mm): ");
    scanf("%d:%d", &hora_saida, &minuto_saida);

    // calcula a duracao em minutos
    int duracao_total_minutos = (hora_saida * 60 + minuto_saida) - (hora_entrada * 60 + minuto_entrada);

    // converte a duracao em minutos para horas e minutos
    duracao_horas = duracao_total_minutos / 60;
    duracao_minutos = duracao_total_minutos % 60;

    printf("Duracao: %d horas e %d minutos\n", duracao_horas, duracao_minutos);

    return;
}

int main() {
    Carro listaCarros[100];
    int numCarros = 0;
    int opcao;
    
    while (1) {
        system("cls");
        printf(">>>>> ESTACIONAMENTO CAPIVARA FELIZ <<<<<");
        printf("\n");
        printf("\n[1] CADASTRAR ENTRADA DO VEICULO");
        printf("\n[2] REMOVER O CARRO E PAGAMENTO");
        printf("\n[3] MOSTRAR A VAGA DO VEICULO");
        printf("\n[0] SAIR\n");
        printf("\nOPCAO: ");
        scanf("%d", &opcao);
        
        switch(opcao) {
            case 0:
                printf("Encerrando programa...\n");
                return 0;
            case 1:
                adicionarCarro(listaCarros, &numCarros);
                break;
            case 2:
                removerCarro(listaCarros, &numCarros);
                break;
            case 3:
                exibirLista(listaCarros, numCarros);
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    }
    
    return 0;
}


