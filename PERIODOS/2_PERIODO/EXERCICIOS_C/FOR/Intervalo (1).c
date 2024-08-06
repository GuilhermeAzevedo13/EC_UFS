/* Escrever programa para ler N números e identificar quantos estão 
dentro do intervalo entre 10 e 20, e quantos estão fora desse mesmo 
intervalo.*/

#include <stdio.h>

int main() {
  int Quant; //Quantidade de número. Equivale a N.
  int V; //Para valores a serem lidos.
  int Dentro=0; //Conta valores dentro do intervalo.
  int Fora=0; //Conta valores fora do intervalo.
  printf("Qual a quantidade de números? ");
  scanf("%d",&Quant);
  for (int Cont=1; Cont<=Quant; Cont++){
    printf("Valor: ");
    scanf("%d",&V);
    if ((V>=10) && (V<=20))
      Dentro++;
    else
      Fora++;}
  printf("Dentro do intervalo: %d\n",Dentro);
  printf("Fora do intervalo: %d",Fora);
  return 0;
}
