#include <stdio.h>

int main(){
  int N, Cont = 0;
  scanf("%d",&N);
  while (Cont < N){
	Cont++;
	if (Cont % 3 == 0)
	  continue;
	printf("%d ", Cont);}
  return 0;
}

