#include <stdio.h>

int Multiplos(int M, int N) {
    int aux, maior, multiplos, i;
    
	if(M <= N){
		if(N == 1){
			printf("1");
		}else if(N != 1){
			for (i = 0, aux = M; aux <= N; i++){
            aux = (i + 1) * M;
        	}
        
        	printf("%d", (i-1) * M);
        
    	}else{
        	printf("sem multiplos menores que %d", N);
		}
	}
return 0;
}


int main() {
    int M, N = 0;
    
    scanf("%d", &M);
    scanf("%d", &N);
    
    Multiplos(M, N);
    
    return 0;
}

