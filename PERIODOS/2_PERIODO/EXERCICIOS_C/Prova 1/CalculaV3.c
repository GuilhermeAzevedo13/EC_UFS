// Objetivo didático: testa switch-case, char, funções, repetição.

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

char menu(){
  char Opcao;
  printf("Qual operacao realizar? \n");
  printf("A - Adicao \n");  
  printf("S - Subtracao \n");
  printf("M - Multiplicacao \n");
  printf("D - Divisao \n");
  scanf(" %c", &Opcao);
  return Opcao;}

void somar(float V1, float V2){
	printf("A soma eh: %.1f",V1+V2);}

void subtrair(float V1, float V2){
	printf("A subtracao eh: %.1f",V1-V2);}	

void multiplicar(float V1, float V2){
	printf("A multiplicacao eh: %.1f",V1*V2);}	

void dividir(float V1, float V2){
	if (V2!=0)
      printf("A divisao eh: %.1f",V1/V2);
	else
	  printf("ERRO: Tentativa de divisao por zero.");}

int main(){
  float Num1, Num2;
  char Operador, Sair;
  do{ 
    system("cls");
    printf("Qual o 1o valor? ");
    scanf("%f", &Num1);
    printf("Qual o 2o valor? ");
    scanf("%f", &Num2);
    Operador = menu();
    Operador=toupper(Operador);
    switch (Operador){
      case 'A': somar(Num1,Num2); break;
      case 'S': subtrair(Num1,Num2); break;
      case 'M': multiplicar(Num1,Num2); break;
      case 'D': dividir(Num1,Num2); break;	
      default: printf("Opcao Invalida!!!");}
    do{
      printf("\n Deseja continuar? 1 - Sim  2 - Nao \n");
      scanf(" %c",&Sair);}
    while ((Sair != '1') && (Sair != '2'));}
  while (Sair == '1');
return 0;}	
