#include <stdio.h>
void selection_sort (int vetor[],int max) {
  int i, j, min, aux;
  for (i = 0; i < (max - 1); i++) {
    /* O minimo é o inicialmente o primeiro */
    min = i;
    for (j = i+1; j < max; j++) {
    /* Caso haja numero menor, faz-se a troca do índice minimo */
    if (vetor[j] < vetor[min]) {
        min = j;}}
    /* Se o índice minimo for diferente do índice do iésimo número não ordenado, faz-se a troca dos valores */    
    if (i != min) {
      aux = vetor[i];
      vetor[i] = vetor[min];
      vetor[min] = aux;}}
  /* Imprime o vetor ordenado */
  for (i = 0; i < max; i++) 
    printf ("%d ",vetor[i]);
  printf ("\n");}

main () {
  int max, i;
  /* Lê tamanho do vetor*/
  scanf ("%d",&max);
    int  vetor[max];
  /* Lê os algarismos do vetor */
  for (i = 0; i < max; i++) {
    scanf ("%d",&vetor[i]);  }
   selection_sort (vetor, max);}

