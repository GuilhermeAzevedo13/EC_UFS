/* Calculo da Hipotenusa de um triangulo feito em módulo */

#include <stdio.h>
#include <math.h>

double quadrado (double x) {
	
	return (x*x);
}

int main () {
	
	double c1, c2, hipotenusa;
	
	printf("\n Digite o Cateto 1 [cm]: ");
	scanf("%lf", &c1);
	
	printf("\n Digite o Cateto 2 [cm]: ");
	scanf("%lf", &c2);
	
	hipotenusa = sqrt (quadrado (c1) + quadrado (c2));
	
	printf("\n A hipotenusa desse triângulo vale: %.2lf cm quadrados", hipotenusa);
	
	return 0;
}
