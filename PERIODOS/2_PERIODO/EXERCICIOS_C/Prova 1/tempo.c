// conversao de tempo
// 3600 + 60 + 20 = 3680 -> 1 hora, 1 minuto e 20 segundos

#include <stdio.h>

void ConverteTempo(int SIn, int *H, int *M, int *SOut){
  *H = SIn / 3600;
  SIn = SIn % 3600;
  *M = SIn / 60;
  SIn = SIn % 60;
  *SOut = SIn;
}
	

int main(){
  int Tempo,Horas,Minutos,Segundos;
  printf("Tempo (em s): ");
  scanf("%d",&Tempo);
  ConverteTempo(Tempo,&Horas,&Minutos,&Segundos);
  printf("Resultado: %d horas, %d minutos e %d segundos",Horas,Minutos,Segundos);
  return 0;
}
