#include <stdio.h>

int main(){
    int x = 10;
    int *ponteiro;
    ponteiro = &x;

    int y = 20;
    int *ponteiro2;
    ponteiro2 = &y;

    printf("%d\n", x);

    printf("%d\n", ponteiro);

    printf("%d %d\n", x, y);

    printf("%d\n", ponteiro2);

    return 0;
}

// Acessar endereço de memoria, basta apenas botar o & na fente da variavel como esta no codigo acima