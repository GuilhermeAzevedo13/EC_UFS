#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define VALORES 3

void RecebeValores(int *v, int numero);
void Minuscula(char *v, char *w, int tam1, int tam2);
char *Compara(int *v, char *p, int *w, char *q);

int main(){

    char time1[10], time2[10], *p1, *p2;
    int *vet1, *vet2;

    scanf(" %s", time1);
    p1 = time1;

    vet1 = malloc(sizeof(int) * 3);
    RecebeValores(vet1, VALORES);

    scanf("%s", time2);
    p2 = time2;

    vet2 = malloc(sizeof(int) * 3);
    RecebeValores(vet2, VALORES);

    Minuscula(p1, p2, strlen(p1), strlen(p2));

    char *resultado = Compara(vet1, p1, vet2, p2);
    printf("%s", resultado);

    return 0;
}


void RecebeValores(int *v, int numero){

    for(int i = 0; i < numero; ++i){
        scanf("%d", v + i);
    }

}

void Minuscula(char *v, char *w, int tam1, int tam2){

    for(int i = 0; i < tam1; ++i){
        *(v + i) = tolower(*(v + i));
    }

    for(int i = 0; i < tam2; ++i){
        *(w + i) = tolower(*(w + i));
    }

}

char *Compara(int *v, char *p, int *w, char *q){

    int i = 0;
    
    if(*(v + i) > *(w + i)){
        return p;
    }else if(*(v + i) < *(w + i)){
        return q;
    }else{
        i++;
        if(*(v + i) > *(w + i)){
            return p;
        }else if(*(v + i) < *(w + i)){
            return q;
        }else{
            i++;
            if(*(v + i) > *(w + i)){
                return p;
            }else if(*(v + i) < *(w + i)){
                return q;
            }else{
                return "EMPATE";
            }
        }            
    }
}