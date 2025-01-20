#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void converterMinusculas(char *palavra) {
    int i = 0;
    while (palavra[i] != '\0') {
        palavra[i] = tolower(palavra[i]);
        i++;
    }
}

int main(void) {
    int cont = 0, criterios = 3;

    struct Relacionar {
        char *time1;
        char *time2;
        int *criterios_time1;
        int *criterios_time2;
    }*apontador;

    apontador = (struct Relacionar *)malloc(sizeof(struct Relacionar));

    apontador->time1 = (char *)malloc(20 * sizeof(char));
    apontador->time2 = (char *)malloc(20 * sizeof(char));
    apontador->criterios_time1 = (int *)malloc(sizeof(int) * 3);
    apontador->criterios_time2 = (int *)malloc(sizeof(int) * 3);

    scanf("%s", apontador->time1);
    converterMinusculas(apontador->time1);

    for (cont = 0; cont < criterios; cont++) {
        scanf("%d", &apontador->criterios_time1[cont]);
    }

    scanf("%s", apontador->time2);
    converterMinusculas(apontador->time2);

    for (cont = 0; cont < criterios; cont++) {
        scanf("%d", &apontador->criterios_time2[cont]);
    }

    if (apontador->criterios_time1[0] > apontador->criterios_time2[0]){
        printf("%s", apontador->time1);
    }else if (apontador->criterios_time1[0] < apontador->criterios_time2[0]){
        printf("%s", apontador->time2);
    }else if (apontador->criterios_time1[0] == apontador->criterios_time2[0]){
        if (apontador->criterios_time1[1] > apontador->criterios_time2[1]){
            printf("%s", apontador->time1);
        }else if (apontador->criterios_time1[1] < apontador->criterios_time2[1]){
            printf("%s", apontador->time2);
        }else if (apontador->criterios_time1[1] == apontador->criterios_time2[1]){
            if (apontador->criterios_time1[2] > apontador->criterios_time2[2]){
                printf("%s", apontador->time1);
            }else if (apontador->criterios_time1[2] < apontador->criterios_time2[2]){
                printf("%s", apontador->time2);
            }else if (apontador->criterios_time1[2] == apontador->criterios_time2[2]){
                printf("EMPATE");
            }
        }
    }
    

    free(apontador->time1);
    free(apontador->time2);
    free(apontador->criterios_time1);
    free(apontador->criterios_time2);
    free(apontador);
    getchar();
    return 0;
}

//cont = 0 -> comparar a quantidade de pontos feitas
//cont = 1 -> comparar o saldo de gols
//cont = 2 -> comaparar os gols feitos
