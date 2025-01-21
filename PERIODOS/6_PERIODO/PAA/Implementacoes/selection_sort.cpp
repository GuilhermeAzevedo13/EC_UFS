#include <iostream>
#include <vector>
using namespace std;

class SelectionSort {
private:
    vector<int> data; // Dados a serem ordenados

public:
    // Construtor para inicializar os dados
    SelectionSort(const vector<int>& input) : data(input) {}

    // Método para realizar o Selection Sort
    void sort() {
    int tamanho = data.size();

    for (int i = 0; i < tamanho - 1; i++) {
        int minIndex = i; // Índice do menor elemento encontrado
        for (int j = i + 1; j < tamanho; j++) {
            if (data[j] < data[minIndex]) {
                minIndex = j; // Atualiza o índice do menor elemento
            }
        }

        // Troca o menor elemento encontrado com o elemento da posição atual
        if (minIndex != i) {
            int aux = data[i];
            data[i] = data[minIndex];
            data[minIndex] = aux;
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
    SelectionSort sorter(numeros);

    // Aplicar o método de ordenação
    sorter.sort();

    // Exibir os valores ordenados
    cout << "Array ordenado: ";
    sorter.print();

    // Liberar a memória alocada
    delete[] vetor;

    return 0;
}