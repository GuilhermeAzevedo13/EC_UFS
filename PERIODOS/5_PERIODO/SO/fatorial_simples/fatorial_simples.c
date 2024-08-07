#include <stdio.h>

unsigned long long int fatorial(int inicio, int n){
    unsigned long long int resultado = 1;
    for (int i = inicio; i <= n; i++){
        resultado *= i;
    }
    return resultado;
}

int main(){
    int numero = 1000; // Valor de N definido aqui
    printf("%llu\n", fatorial(1,numero));
    return 0;
}
