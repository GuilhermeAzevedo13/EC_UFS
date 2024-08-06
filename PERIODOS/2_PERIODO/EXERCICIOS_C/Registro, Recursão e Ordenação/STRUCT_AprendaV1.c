#include <stdio.h>

struct TpAluno{
  char Nome[21];  
  float Nota1;  
  float Nota2;  
  float Nota3;  
  int Frequencia;
} RgAluno;

int main(){
  system("clear");
  printf("\n\n>>> Aprenda C na UFS <<< \n\n");
  printf("Aluno: ");
  gets(RgAluno.Nome);
  printf("Nota 1: ");
  scanf("%f",&RgAluno.Nota1);
  printf("Nota 2: ");
  scanf("%f",&RgAluno.Nota2);
  printf("Nota 3: ");
  scanf("%f",&RgAluno.Nota3);
  printf("Frequência: ");
  scanf("%d",&RgAluno.Frequencia);
  float Media;
  Media = (RgAluno.Nota1 + RgAluno.Nota2 + RgAluno.Nota3)/3;
  printf("Média: %.1f\n",Media);
  if (RgAluno.Frequencia>75)
    if (Media>=5.0)
      printf("APROVADO");
    else
      printf("REPROVADO POR MÉDIA");
  else
    printf("REPROVADO POR FREQUÊNCIA");
  return 0;
}