#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define CRITERIOS 3

void converterMinusculas(char **palavra) {
    int i = 0;
    while (palavra[i] != '\0') {
        palavra[i] = tolower(palavra[i]);
        i++;
    }
}

void recebeCriterios(int *criterios, int quantidade){
    int cont = 0;

    for(cont = 0; cont < quantidade; cont++){
        scanf("%d", criterios);
    }
}

int RelacionarTime1(char **time1, int *criterios_time1){

    *time1 = (char *)malloc(20 * sizeof(char));
    scanf(" %s", *time1);

    converterMinusculas(time1);

    criterios_time1 = malloc(sizeof(int) * 3);

    recebeCriterios(criterios_time1, CRITERIOS);

    return 0;
}

int RelacionarTime2(char **time2, int *criterios_time2){

    *time2 = (char *)malloc(20 * sizeof(char));
    scanf(" %s", *time2);

    converterMinusculas(time2);

    criterios_time2 = malloc(sizeof(int) * 3);

    recebeCriterios(criterios_time2, CRITERIOS);

    return 0;
}





int main(){

    char *time1, *time2;
    int *criterios_time1, *criterios_time2;

    RelacionarTime1(time1, criterios_time1);

    RelacionarTime2(time1, criterios_time2);

    free(time1);
    free(time2);
    free(criterios_time1);
    free(criterios_time2);
    
    return 0;
}
