#include <stdio.h>
#include <string.h>

int main(){
	char letra = 'a', frase[100];
	
	int i = 0, cont = 0;
	
	fflush(stdin);
	
	fgets(frase, sizeof(frase), stdin);
	
	while((frase[i] != '\0') && (i <= 100)){
		
		if(frase[i] == letra){
			cont++;
		}
		
		i++;	
	}
	
	printf("%d", cont);
	
return 0;
	
}
