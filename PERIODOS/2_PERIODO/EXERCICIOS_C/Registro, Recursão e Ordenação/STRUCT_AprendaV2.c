#include <stdio.h>

struct TpAluno{
  char Nome[21];  
  float Nota1;  
  float Nota2;  
  float Nota3;  
  int Frequencia;
};

struct TpAluno Turma[3];

int main(){
  system("clear");
  printf("\n\n> Aprenda C na UFS <\n");
  printf("> INSERINDO  DADOS < \n\n");
  for (int a=0; a<3; a++){
    printf("Aluno %d: ",a+1);
    scanf(" %s",Turma[a].Nome);
    printf("Nota 1: ");
    scanf("%f",&Turma[a].Nota1);
    printf("Nota 2: ");
    scanf("%f",&Turma[a].Nota2);
    printf("Nota 3: ");
    scanf("%f",&Turma[a].Nota3);
    printf("Frequência: ");
    scanf("%d",&Turma[a].Frequencia);
    printf("\n");}

  system("clear");
  printf("\n\n> Aprenda C na UFS <\n");
  printf("> EXIBINDO  RESULTADOS < \n\n");
  for (int a=0; a<3; a++){
    printf("Aluno %d: %s \n",a+1,Turma[a].Nome);
    printf("Nota 1: %.1f \n",Turma[a].Nota1);
    printf("Nota 2: %.1f \n",Turma[a].Nota2);
    printf("Nota 3: %.1f \n",Turma[a].Nota3);
    printf("Frequência: %d \n",Turma[a].Frequencia);  
    float Media;
    Media = (Turma[a].Nota1 + Turma[a].Nota2 + Turma[a].Nota3)/3;
  printf("Média: %.1f\n",Media);
  if (Turma[a].Frequencia>75)
    if (Media>=5.0)
      printf("APROVADO");
    else
      printf("REPROVADO POR MÉDIA");
  else
    printf("REPROVADO POR FREQUÊNCIA");
  printf("\n\n");}
  return 0;
}