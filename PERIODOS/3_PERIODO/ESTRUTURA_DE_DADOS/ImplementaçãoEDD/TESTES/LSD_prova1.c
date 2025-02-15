#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX 1000

typedef int ITEM;

typedef struct {
    ITEM **itens;
    int tamanho;
} LISTA;

int tamanho(LISTA *l) {
    return l->tamanho;
}

bool inserir(ITEM item, LISTA *l) {
    if (tamanho(l) == MAX) {
        return false; // Lista Cheia
    } else {
        ITEM *novoItem = (ITEM *)malloc(sizeof(ITEM));
        if (novoItem == NULL) {
            return false; // Falha na alocação
        }
        *novoItem = item;
        
        l->itens[l->tamanho++] = novoItem;
    }
    return true;
}

bool removerDaPos(ITEM *item, int i, LISTA *l) {
    if (i >= 0 && i < tamanho(l)) {
        *item = *(l->itens[i]);
        free(l->itens[i]);

        // Movendo os apontadores dos elementos seguintes uma posição para trás
        int j;
        for (j = i; j < tamanho(l) - 1; j++) {
            l->itens[j] = l->itens[j + 1];
        }

        l->tamanho--;
        return true;
    }
    return false;
}

void inserirLISTA(LISTA *l) {
    printf("=> TESTE DE INSERIR\n");
    int quantidade, i;
    printf("Quantos itens deseja guardar na lista? ");
    scanf("%d", &quantidade);

    ITEM item;
    for (i = 0; i < quantidade; i++) {
        printf("Digite o valor para a posicao [%d]: ", i);
        scanf("%d", &item);
        inserir(item, l);
    }
}

void exibirItem(ITEM i) {
    printf("%d ", i);
}

void exibirLista(LISTA *l) {
    int i;
    printf("[");
    for (i = 0; i < tamanho(l);) {
        exibirItem(*l->itens[i++]);
        if (i < tamanho(l)) {
            printf(",");
        }
    }
    printf("]\n");
}

void exibirListaReversa(LISTA *l) {
    int i;
    printf("[");
    for (i = tamanho(l) - 1; i >= 0; i--) {
        exibirItem(*l->itens[i]);
        if (i > 0) {
            printf(",");
        }
    }
    printf("]\n");
}

void inverterLista(LISTA *l) {
    int inicio = 0;
    int fim = tamanho(l) - 1;

    while (inicio < fim) {
        // Troca os apontadores entre as posições inicio e fim
        ITEM *temp = l->itens[inicio];
        l->itens[inicio] = l->itens[fim];
        l->itens[fim] = temp;

        // Move os índices para a próxima posição e a anterior, respectivamente
        inicio++;
        fim--;
    }
}

void ordenaLista(LISTA *l) {
    int i, j;

    for (i = 0; i < tamanho(l) - 1; i++) {
        for (j = 0; j < tamanho(l) - i - 1; j++) {
            if (*(l->itens[j]) > *(l->itens[j + 1])) {
                // Troca os apontadores
                ITEM *temp = l->itens[j];
                l->itens[j] = l->itens[j + 1];
                l->itens[j + 1] = temp;
            }
        }
    }
}

int buscarEm(ITEM item, int inicio, int fim, LISTA *l) {
    if (inicio < 0) inicio = 0;
    if (fim >= tamanho(l)) fim = tamanho(l) - 1;

    int pos;
    for (pos = inicio; pos <= fim; pos++) {
        if (*(l->itens[pos]) == item) {
            return pos; // achou
        }
    }
    return -1; // nao achou
}

int buscar(ITEM item, LISTA *l) {
    return buscarEm(item, 0, tamanho(l) - 1, l);
}

void limparLista(LISTA *l) {
    int i;
    for (i = 0; i < tamanho(l); i++) {
        free(l->itens[i]);
    }
    l->tamanho = 0;
}

int main(void) {
    LISTA l;
    l.tamanho = 0; // Inicializa o tamanho da lista como 0
    l.itens = (ITEM **)malloc(MAX * sizeof(ITEM *)); // Alocando espaço para os apontadores

    inserirLISTA(&l);

    printf("\nLista antes da inversao:\n");
    exibirLista(&l);

    printf("\nLista apos a inversao:\n");
    inverterLista(&l);
    exibirLista(&l);

    printf("\nLista em ordem crescente:\n");
    ordenaLista(&l);
    exibirLista(&l);

    printf("\nLista em ordem decrescente:\n");
    exibirListaReversa(&l);

    printf("\nLista apos a remocao da posicao:\n");
    int posicao;

    printf("Digite a posicao que deseja remover: ");
    scanf("%d", &posicao);

    ITEM itemRemovido;
    if (removerDaPos(&itemRemovido, posicao, &l)) {
        printf("Item removido: %d\n", itemRemovido);
        exibirLista(&l);
    } else {
        printf("Posicao invalida.\n");
    }

    printf("\nDigite o item que deseja buscar: ");
    ITEM itemBusca;
    scanf("%d", &itemBusca);

    int posicaoEncontrada = buscar(itemBusca, &l);

    if (posicaoEncontrada != -1) {
        printf("Item encontrado na posicao: %d\n", posicaoEncontrada);
    } else {
        printf("Item nao encontrado.\n");
    }

    // Liberando a memória alocada para os itens e apontadores
    limparLista(&l);
    free(l.itens);

    getchar();
    return 0;
}
