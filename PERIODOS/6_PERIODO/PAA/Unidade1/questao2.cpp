#include <iostream>
#include <vector>

using namespace std;

int encontrar_maximo(vector <int> a, int n){
  int inicio = 0;
  int fim = n-1;

  while(inicio < fim){

    int meio = (inicio + fim)/2;

    //Se o elemento do meio é menor que o proximo, o maximo esta pela direita
    if(a[meio] < a[meio+1]){
      inicio = meio + 1;
    }
    //Se o elemento do meio é maior que o proximo, o maximo esta pela esquerda
    else{
      fim = meio;
    }
  }

  return a[inicio];
}


int main(){


  vector <int> vetor1 =  {10,8,3,2,1};
  vector <int> vetor2 = {1,4,5,7,8,9,20};
  vector <int> vetor3 = {0,2,5,7,13,9,8,7,2};

  int n1 = vetor1.size();
  int n2 = vetor2.size();
  int n3 = vetor3.size();

  cout << "Maximo do Vetor1: " << encontrar_maximo(vetor1, n1) << endl;
  cout << "Maximo do Vetor2: " << encontrar_maximo(vetor2, n2) << endl;
  cout << "Maximo do Vetor3: " << encontrar_maximo(vetor3, n3) << endl;



  return 0;
}