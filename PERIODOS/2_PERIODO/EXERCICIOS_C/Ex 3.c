#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    printf("==== ESCOLA CAPIVARA FELIZ ====");

    printf("\n");

    //Para usar acentos
    setlocale(LC_ALL, "");

    //Definindo vari�veis
    double nota1, nota2, nota3, media;

    printf(" \n Digite a primeira nota: ");
    scanf("%lf", &nota1);

    system ("pause");
    system ("cls");

    printf(" \n Digite a segunda nota: ");
    scanf("%lf", &nota2);

    system ("pause");
    system ("cls");

    printf(" \n Digite a terceira nota: ");
    scanf("%lf", &nota2);

    system ("pause");
    system ("cls");

    media = (nota1 + nota2 + nota3)/3;

    printf("A m�dia final ser� de %.2lf", media);

    return 0;
}
