#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){

    printf("==== FESTA DE ARROMBA ====");

    printf("\n");

    //Para usar acentos
    setlocale(LC_ALL, "");

    //Definindo vari�veis
    float nota1, nota2, nota3;
    
    //Recebendo valores
    printf("\n Digite a primeira nota seguido da segunda nota: ");
    scanf("%f %f", &nota1, &nota2);
    
    nota3 = (42 - nota1 - (2*nota2))/3;
    
    printf("\n O aluno precisa tirar na 3� Prova para passar com m�dia 7: %.2f", nota3);
    
    return 0;
}
