#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define A 0.3172
#define m 0.0351
#define sigma_m 0.0001
#define sigmaA 0.0003

int main(){
    float sigma_c;

    sigma_c = sqrt(((A * sigma_m / (m * m)) * (A * sigma_m / (m * m))) + ((sigmaA/m) * (sigmaA/m)));

    printf("\nO valor final eh: %f", sigma_c);

    return 0;
}