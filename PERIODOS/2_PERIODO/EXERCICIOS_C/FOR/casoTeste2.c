/*Ambrósio tem 21 primos e quer presenteá-lo, porém ele só tem dinheiro para 3 presentes, 
e teve uma ideia para selecionar os três primos entre os 21. A ideia é distribuir os presentes 
de acordo com as estaturas, sendo o menor o que irá receber o primeiro presente, o segundo presente 
será dado ao que tiver altura intermediária dentre os 21 e último presente será recebido pelo mais alto.

Escrever programa em C para ler as alturas de todos os 21 primos, e informar a Ambrósio quais: altura do menor, 
do intermediário e do maior primos.*/

#include <stdio.h>
#include <stdlib.h>


int main(){

    int aux, altura[5], i, j, temp;

    for(aux = 0; aux < 5; aux++){
        printf("\nDigite a altura do primo %d [Em Cm]: ",aux + 1);
        scanf("%d", &altura[aux]);
    }

   // Ordena o altura usando algoritmo de ordenação simples
    for(i=0; i<5; i++){
        for(j=i+1; j<5; j++){
            if(altura[i] > altura[j]){
                temp = altura[i];
                altura[i] = altura[j];
                altura[j] = temp;
            }
        }
    }

    // Imprime o altura ordenado
    for(i=0; i<5; i++)
    {
        printf("%d ", altura[i]);
    }


    
return 0;
}