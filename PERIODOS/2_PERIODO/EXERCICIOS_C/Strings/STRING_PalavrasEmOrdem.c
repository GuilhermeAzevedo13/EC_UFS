#include <stdio.h>
#include <string.h>
int main(){
  char P1[21], P2[21], P3[21];
  printf("Digite 3 palavras: ");
  scanf("%s%s%s",P1,P2,P3);
  if (strcmp(P1,P2)<0 && strcmp(P1,P3)<0)
    {if (strcmp(P2,P3)<0)
      printf("A ordem eh %s, %s e %s.",P1,P2,P3);
    else
      printf("A ordem eh %s, %s e %s.",P1,P3,P2);}
  if (strcmp(P2,P1)<0 && strcmp(P2,P3)<0)
    {if (strcmp(P1,P3)<0)
      printf("A ordem eh %s, %s e %s.",P2,P1,P3);
    else
      printf("A ordem eh %s, %s e %s.",P2,P3,P1);}
  if (strcmp(P3,P2)<0 && strcmp(P3,P1)<0)
    {if (strcmp(P2,P1)<0)
      printf("A ordem eh %s, %s e %s.",P3,P2,P1);
    else
      printf("A ordem eh %s, %s e %s.",P3,P1,P2);}
  return 0;}
