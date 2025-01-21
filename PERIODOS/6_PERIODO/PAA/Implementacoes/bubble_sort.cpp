#include <iostream>
#include <vector>
using namespace std;

class BubbleSort {
private:
    vector<int> data; // Dados a serem ordenados

public:
    // Construtor para inicializar os dados
    BubbleSort(const vector<int>& input) : data(input) {}

    // Método para realizar o Bubble Sort
    void sort() {
      int tamanho = data.size();
      bool trocar;

      for (int i = 0; i < tamanho - 1; i++) {
          trocar = false; // Variável para verificar se houve troca

          for (int j = 0; j < tamanho - i - 1; j++) {
              if (data[j] > data[j + 1]) {
                  // Troca os elementos adjacentes
                  int temp = data[j];
                  data[j] = data[j + 1];
                  data[j + 1] = temp;

                  trocar = true;
              }
          }

          // Se nenhuma troca foi feita, o array está ordenado
          if (!trocar) {
              break;
          }
      }
    }


    // Método para imprimir os dados
    void print() const {
        for (int num : data) {
            cout << num << " ";
        }
        cout << endl;
    }
};

int main() {
    int size_array = 0;

    // Entrada: Quantidade de números
    cout << "Digite quantos numeros deseja inserir: ";
    cin >> size_array;

    // Alocar memória dinamicamente para o array
    int* vetor = new int[size_array];

    // Inserir os números no array
    for (int i = 0; i < size_array; i++) {
        cout << "Digite o numero da posicao vetor[" << i << "]: ";
        cin >> vetor[i];
    }

    // Converter o array dinâmico para um vetor (std::vector)
    vector<int> numeros(vetor, vetor + size_array);

    // Criar objeto da classe InsertionSorter
    BubbleSort sorter(numeros);

    // Aplicar o método de ordenação
    sorter.sort();

    // Exibir os valores originais
    cout << "Array original: ";
    for (int i = 0; i < size_array; i++) {
        cout << vetor[i] << " ";
    }
    printf("\n");

    // Exibir os valores ordenados
    cout << "Array ordenado: ";
    sorter.print();

    // Liberar a memória alocada
    delete[] vetor;

    return 0;
}