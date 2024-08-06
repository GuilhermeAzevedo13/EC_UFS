// identificar o maior dentre 3 numeros dados

#include <stdio.h>

int MaiorN(int V1,int V2, int V3){
  if ((V1 > V2) && (V1 > V3))
    return V1;
  else
    if (V2 > V3)
      return V2;
    else
      return V3;
}


int main(){
  int N1, N2, N3;
  printf("Digite os 3 numeros: ");
  scanf("%d%d%d",&N1,&N2,&N3);
  printf("Maior valor: %d",MaiorN(N1,N2,N3));
  return 0;
}
