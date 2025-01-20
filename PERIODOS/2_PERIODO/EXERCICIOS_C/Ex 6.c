#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    printf("==== FESTA DE ARROMBA ====");

    printf("\n");

    //Para usar acentos
    setlocale(LC_ALL, "");

    //Definindo variáveis
    int na, nv, nb;
	double amarela, vermelha, branca, total;

    printf("\n Digite o valor das Rosas Amarelas: R$ ");
    scanf("%lf", &amarela);
    
    system("pause");
    system("cls");
    
    printf("\n Digite o valor das Rosas Vermelhas: R$ ");
    scanf("%lf", & vermelha);
    
    system("pause");
    system("cls");
    
    printf("\n Digite o valor das Rosas Brancas: R$ ");
    scanf("%lf", &branca);
    
    system("pause");
    system("cls");
    
    printf("\n Digite a quantidade Rosas Amarelas: ");
    scanf("%d", &na);
    
    system("pause");
    system("cls");
    
    printf("\n Digite a quantidade Rosas Vermelhas: ");
    scanf("%d", &nv);
    
    system("pause");
    system("cls");
    
    printf("\n Digite a quantidade Rosas Brancas: ");
    scanf("%d", &nb);
    
    system("pause");
    system("cls");
    
    total = (amarela*na) + (vermelha*nv) + (branca*nb);
    
    printf("\n O valor do Buquê será de R$ %.2lf", total);
    printf("\n");
    system("pause");
    
    return 0;   
}
