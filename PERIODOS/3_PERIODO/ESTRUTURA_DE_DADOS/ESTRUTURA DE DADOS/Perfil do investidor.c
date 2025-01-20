#include <stdio.h>
#include <math.h>

float perfil(float rf_nac, float rf_int, float rv_nac, float rv_int) {
	scanf("%f %f %f %f", &rf_nac, &rf_int, &rv_nac, &rv_int);

	float soma, RV = 0.0;
	soma = rf_nac + rf_int + rv_nac + rv_int;
	RV = rv_nac + rv_int;

	return ((RV/soma)*100);		
}

int main() {
	float rf_nac, rf_int, rv_nac, rv_int, investidor = 0.0;
	investidor = perfil(rf_nac, rf_int, rv_nac, rv_int);

	if (investidor <= 10) {
		printf("\nConservador (%.2f%%)", investidor);
	} else if (investidor > 10 && investidor <= 30) {
		printf("\nArrojado (%.2f%%)", investidor);
	} else {
		printf("\nAgressivo (%.2f%%)", investidor);
	}
	return 0;	
}

