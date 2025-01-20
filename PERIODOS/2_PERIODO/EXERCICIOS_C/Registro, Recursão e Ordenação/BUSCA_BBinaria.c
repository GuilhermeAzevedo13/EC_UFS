#include <stdio.h>

int bbinaria (int chave, int inicio, int fim, int vetor[]) {
   if (fim < inicio) 
     return -1;   
   else {
      int meio = (inicio + fim)/2;
      if (vetor[meio]==chave)
        return meio;
      else{
        if (vetor[meio] < chave)  
          return bbinaria (chave, meio+1, fim, vetor);
        else  
          return bbinaria (chave, inicio, meio-1, vetor);}
   } 
}


int main(){
   int V[] = {6, 12, 20, 31, 43, 66, 78};
   int Pos =bbinaria(31,0,6,V);
   printf("\nPosição do 31: %d",Pos+1);
   Pos =bbinaria(99,0,6,V);
   printf("\nPosição do 99: %d",Pos);
   return 0;}
