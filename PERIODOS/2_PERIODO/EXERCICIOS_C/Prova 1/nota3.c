// calcula 3a nota ponderada

#include <stdio.h>

int main(){
  float n1, n2, n3;
  printf("Nota 1: ");
  scanf("%f",&n1);
  printf("Nota 2: ");
  scanf("%f",&n2); 
  n3 = (42 - n1 - 2 * n2)/3;
  printf("Nota 3: %.1f",n3);
  return 0;
}
