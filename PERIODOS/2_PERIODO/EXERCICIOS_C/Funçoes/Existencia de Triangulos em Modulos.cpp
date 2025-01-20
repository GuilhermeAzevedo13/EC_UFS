/* Existencia de Triangulos */

int existencia (float a, float b, float c) {
	
	if (a < b + c && b < a + c && c < a + b){
		return 1;
	}else{
		return 0;
	}
}

int main () {
	
	float a, b, c;
	
    printf("\n Digite o primeiro Lado [cm]: ");
	scanf("%f", &a);
	
	printf("\n Digite o segundo Lado [cm]: ");
	scanf("%f", &b);
	
	printf("\n Digite o terceiro Lado [cm]: ");
	scanf("%f", &c);
	
	printf("\n Esse triângulo Existe? ");
	if (existencia (a, b, c) == 1){
		printf("Sim");
	}else{
		printf("Nao");
	}
	
	return 0;
}
