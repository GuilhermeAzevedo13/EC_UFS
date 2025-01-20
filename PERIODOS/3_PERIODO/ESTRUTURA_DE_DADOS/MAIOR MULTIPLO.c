#include <stdio.h>

int Multiplos(int M, int N) {
    int multiplos;
    
    multiplos = M;
    
    if(multiplos > N){
    	printf("sem multiplos menores que %d", N);
	}else{
		while (multiplos <= N){
			multiplos += M;
		}
		
		printf("%d", multiplos - M);
	}  
    return 0;
}

int main() {
    int M, N;
    
    scanf("%d", &M);
    scanf("%d", &N);
    
    Multiplos(M, N);
    
    return 0;
}

