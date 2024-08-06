#include <stdio.h>

char calcular_resultado(int pontuacao){
	 if (pontuacao < 100){
	 	return 'R';
	 }else{
	 	return 'A';
	 }
}

int main (){
	int inscritos = 0, pontos = 0, contador = 0, aux = 0;
	char resultado;

    printf("\nInscritos: ");
    scanf("%d", &inscritos);

    while(inscritos > 0){
	  contador = 0;
      aux = 0; // Adicionando essa linha para reiniciar o contador a cada iteração do loop while

      while(aux < 6){
        printf("\nPontos: ");
        scanf("%d", &pontos);
        contador = contador + pontos;
        aux = aux + 1;
      }
      
      printf("\nPontos Total: %d", contador);
      
      resultado = calcular_resultado(contador);
      
      printf("\nRESULTADO: %c", resultado);
      
      inscritos = inscritos - 1;
    }
return 0;
}

