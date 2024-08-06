#include <stdio.h>

void inverter(int N)

/*Inverte a ordem dos algarismos de um número inteiro.*/
{
  if (N<10)
    printf("%d",N);
  else
    {
	  printf("%d",N%10);
	  inverter(N/10);
	}
}


int main(){
   inverter(1724);
return 0;}
