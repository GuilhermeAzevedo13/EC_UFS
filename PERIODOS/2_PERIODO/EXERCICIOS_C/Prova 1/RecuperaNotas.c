#include <stdio.h>
#include <stdlib.h>

int main(){
  float N1, N2, N3, N4, Media;
  char Outro;
  do{	
    system("cls");
	printf("Quais as notas do aluno? ");
	scanf("%f%f%f",&N1,&N2,&N3);
	Media = (N1 + N2 + N3) / 3;
	printf("\nMedia obtida: %.1f",Media);
	if (Media >=7)
	  printf("\nALUNO APROVADO");
	else
	  if (Media < 3)
	    printf("\nALUNO REPROVADO");
	  else{ 
		printf("\nALUNO EM RECUPERACAO");  
	    printf("\nQual a nota obtida na recuperacao? ");
	    scanf("%f",&N4);
	    Media = (Media + N4) / 2;
	    if (Media >= 5)
	      printf("\nALUNO APROVADO APOS RECUPERACAO");
	    else
	      printf("\nALUNO REPROVADO APOS RECUPERACAO");}
	printf("\nDeseja verificar outro aluno? S/N");
	scanf(" %c",&Outro);}
  while ((Outro == 'S') || (Outro == 's'));
  return 0;
}
