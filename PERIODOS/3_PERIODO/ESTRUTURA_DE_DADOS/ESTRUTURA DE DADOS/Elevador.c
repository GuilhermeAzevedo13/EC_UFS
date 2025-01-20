#include <stdio.h>

int AnalisarSensor(int N, int C){
	
	int aux, Saida = 0, Entrada = 0, noElevador = 0, cont = 0;
	
	for(aux = 0; aux < N; aux++){
		scanf("%d %d", &Saida, &Entrada);
		
		noElevador = noElevador - Saida;
		noElevador = noElevador + Entrada;
		
		if((noElevador) > C){
			cont++;
		}
		
		
	}
	
	if(cont == 0){
		printf("N");
	}else{
		printf("S");
	}
	
return 0;
}

int main(){
	
	int N, C;
	
	scanf("%d %d", &N, &C);
	
	AnalisarSensor(N, C);
	
return 0;
}
