// campeonato

#include <stdio.h>

int main(){
  int VitoriasC, EmpatesC, GolsC;
  int VitoriasF, EmpatesF, GolsF;
  printf("Vitorias do Cormengo: ");
  scanf("%d",&VitoriasC);
  printf("Empates do Cormengo: ");
  scanf("%d",&EmpatesC);
  printf("Saldo de Gols do Cormengo: ");
  scanf("%d",&GolsC);
  printf("Vitorias do Flaminthians: ");
  scanf("%d",&VitoriasF);
  printf("Empates do Flaminthians: ");
  scanf("%d",&EmpatesF);
  printf("Saldo de Gols do Flaminthians: ");
  scanf("%d",&GolsF);
  if ((3*VitoriasC + EmpatesC) > (3*VitoriasF + EmpatesF))
    printf("Vitoria do Cormengo");
  else
    if ((3*VitoriasF + EmpatesF) > (3*VitoriasC + EmpatesC))
      printf("Vitoria do Flaminthians");
    else
      if (GolsC > GolsF)
        printf("Vitoria do Cormengo");
      else
        if (GolsF > GolsC)
          printf("Vitoria do Flaminthians");
        else
          printf("Empate entre Cormengo e Flaminthians");
   return 0;
}
