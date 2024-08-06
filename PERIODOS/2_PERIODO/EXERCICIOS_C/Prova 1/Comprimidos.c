// aplica funcao
// retorna número de caixas de medicacao

#include <stdio.h>
#include <math.h>

int QuocienteExato(int Dividendo, int Divisor)
//Quociente arredondado, matematicamente.
{
  float Divisao;
  Divisao = (float) Dividendo / Divisor;
  Divisao = ceil(Divisao);
  return (int) Divisao;
}

int main(){
  int QMensal, QCaixa; //comprimidos
  printf("Quantidade mensal de comprimidos: ");
  scanf("%d",&QMensal);
  printf("Quantidade de comprimidos em caixa: ");
  scanf("%d",&QCaixa);
  printf("Quantidade de Caixas: %d",QuocienteExato(QMensal,QCaixa));
  return 0;
}
