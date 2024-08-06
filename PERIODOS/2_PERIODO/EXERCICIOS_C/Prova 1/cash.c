// cash bancário

#include <stdio.h>

int main(){
  //Leitura
  int Saque;
  printf("Valor do saque: ");
  scanf("%d",&Saque);
  int c100 = Saque / 100;
  Saque = Saque % 100; 
  // Saque = Saque - c100 * 100;
  int c50 = Saque / 50;
  Saque = Saque % 50; 
  int c20 = Saque / 20;
  Saque = Saque % 20; 
  int c10 = Saque / 10;
  Saque = Saque % 10;
  int c5 = Saque / 5;
  Saque = Saque % 5; 
  int c2 = Saque / 2;
  Saque = Saque % 2;
  printf("Cedulas: %d x 100 + %d x 50 + %d x 20 + %d x 10 + %d x 5 + %d x 2",c100,c50,c20,c10,c5,c2);
  return 0;
}
