#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_VAGAS 10

int main() {
  int vagas[MAX_VAGAS] = {0}, opcao = 0; // Vetor de controle das vagas
  int entrada, saida, vaga, valor; // Variáveis para entrada, saída, vaga e valor
  time_t t = time(NULL); // Obtém o horário atual do sistema
  struct tm tm = *localtime(&t); // Converte o horário para uma struct tm

  printf("Horário atual: %02d:%02d:%02d\n", tm.tm_hour, tm.tm_min, tm.tm_sec);

  while (1) {
    // Menu de opções
    system("cls");
    printf(">>>>> ESTACIONAMENTO CAPIVARA FELIZ <<<<<");
    printf("\n");
    printf("\n[1] CADASTRAR ENTRADA DO VEICULO");
    printf("\n[2] REMOVER O CARRO E PAGAMENTO");
    printf("\n[0] SAIR DO PROGRAMA\n");
    printf("\nOPCAO: ");
    scanf("%d", &opcao);

    switch (opcao) {
      case 1: // Entrada de veículo
        printf("Digite a vaga de estacionamento (de 1 a %d): ", MAX_VAGAS);
        scanf("%d", &vaga);
        if (vaga < 1 || vaga > MAX_VAGAS) {
          printf("Vaga inválida.\n");
          break;
        }
        if (vagas[vaga - 1] == 1) {
          printf("Vaga ocupada.\n");
          break;
        }
        vagas[vaga - 1] = 1; // Marca a vaga como ocupada
        printf("Digite o horário de entrada (HH:MM): ");
        scanf("%d:%d", &entrada, &saida);
        system("pause");
        break;

      case 2: // Saída de veículo
        printf("Digite a vaga de estacionamento (de 1 a %d): ", MAX_VAGAS);
        scanf("%d", &vaga);
        if (vaga < 1 || vaga > MAX_VAGAS) {
          printf("Vaga inválida.\n");
          break;
        }
        if (vagas[vaga - 1] == 0) {
          printf("Vaga vazia.\n");
          break;
        }
        vagas[vaga - 1] = 0; // Marca a vaga como vazia
        printf("Digite o horário de saída (HH:MM): ");
        scanf("%d:%d", &saida, &entrada);
        // Cálculo do valor a ser pago (considerando R$ 5,00 por hora de permanência)
        valor = (saida - entrada) * 5;
        printf("Valor a ser pago: R$ %d,00\n", valor);
        system("pause");
        break;
        
      case 0: // Sair do programa
        return 0;
      default: // Opção inválida
        printf("Opção inválida.\n");
        break;
    }
  }

  return 0;
}