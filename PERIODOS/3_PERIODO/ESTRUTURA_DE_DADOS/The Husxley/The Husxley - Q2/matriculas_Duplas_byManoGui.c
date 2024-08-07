#include <stdio.h>
#include <stdlib.h>

#define Prog1 45
#define Prog2 30

int CompararMatriculas(int *alunos_prog1, int *alunos_prog2, int *matriculas_comuns) {
    int i, j, k = 0;
    
    for (i = 0; i < Prog1; i++) {
        for (j = 0; j < Prog2; j++) {
            if (alunos_prog1[i] == alunos_prog2[j]) {
                matriculas_comuns[k] = alunos_prog1[i];
                k++;
                break;
            }
        }
    }
    
    return k;
}

int ReceberMatriculas(int **alunos_prog1, int **alunos_prog2) {
    int i1 = 0, i2 = 0;
    
    *alunos_prog1 = malloc(sizeof(int) * Prog1);
    *alunos_prog2 = malloc(sizeof(int) * Prog2);
    
    for (i1 = 0; i1 < Prog1; i1++) {
        scanf("%d", &(*alunos_prog1)[i1]);
    }
    
    for (i2 = 0; i2 < Prog2; i2++) {
        scanf("%d", &(*alunos_prog2)[i2]);
    }
    
    return 0;
}

int main(void) {
    int *alunos_prog1, *alunos_prog2;
    int *matriculas_comuns;
    int num_comuns, i;
    
    ReceberMatriculas(&alunos_prog1, &alunos_prog2);
    
    matriculas_comuns = malloc(sizeof(int) * Prog1);
    
    num_comuns = CompararMatriculas(alunos_prog1, alunos_prog2, matriculas_comuns);
    
    for (i = 0; i < num_comuns; i++) {
        printf("%d ", matriculas_comuns[i]);
    }
    
    printf("\n");
    
    free(alunos_prog1);
    free(alunos_prog2);
    free(matriculas_comuns);
    
    return 0;
}





