#include <stdio.h>
#include <math.h>

float AnalisarSituacao(float nota1, float nota2, float nota3, float nota4){
	float soma = 0.0;
	soma = nota1*1 + nota2*2 + nota3*3 + nota4*4;
	
	return soma/10;
}

int main(){
	float media, nota1 = 0.0, nota2 = 0.0, nota3 = 0.0, nota4 = 0.0;
	scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
	
	media = AnalisarSituacao(nota1, nota2, nota3, nota4);
	
	if(media >= 9){
		printf("aprovado com louvor");
	}else if(media >= 7 && media < 9){
		printf("aprovado");
	}else if(media >= 3 && media < 7){
		printf("prova final");
	}else{
		printf("reprovado");
	}
	
return 0;	
}
