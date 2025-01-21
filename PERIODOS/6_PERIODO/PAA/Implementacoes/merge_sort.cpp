#include <iostream>
#include <vector>
using namespace std;

class MergeSort {
private:
    vector<int> data; // Dados a serem ordenados

    // Função para mesclar dois subarrays ordenados
    void merge(int inicio, int meio, int fim) {
        int tamanhoEsquerda = meio - inicio + 1;
        int tamanhoDireita = fim - meio;

        // Vetores temporários
        vector<int> esquerda(tamanhoEsquerda);
        vector<int> direita(tamanhoDireita);

        // Copiar os dados para os vetores temporários
        for (int i = 0; i < tamanhoEsquerda; i++)
            esquerda[i] = data[inicio + i];
        for (int j = 0; j < tamanhoDireita; j++)
            direita[j] = data[meio + 1 + j];

        // Mesclar os vetores temporários de volta em data
        int i = 0, j = 0, k = inicio;

        while (i < tamanhoEsquerda && j < tamanhoDireita) {
            if (esquerda[i] <= direita[j]) {
                data[k] = esquerda[i];
                i++;
            } else {
                data[k] = direita[j];
                j++;
            }
            k++;
        }

        // Copiar os elementos restantes, se houver
        while (i < tamanhoEsquerda) {
            data[k] = esquerda[i];
            i++;
            k++;
        }

        while (j < tamanhoDireita) {
            data[k] = direita[j];
            j++;
            k++;
        }
    }

    // Função recursiva para dividir os dados
    void mergeSort(int inicio, int fim) {
        if (inicio < fim) {
            int meio = inicio + (fim - inicio) / 2;

            // Ordenar as metades esquerda e direita
            mergeSort(inicio, meio);
            mergeSort(meio + 1, fim);

            // Mesclar as metades ordenadas
            merge(inicio, meio, fim);
        }
    }

public:
    // Construtor para inicializar os dados
    MergeSort(const vector<int>& input) : data(input) {}

    // Método para iniciar o processo de ordenação
    void sort() {
        mergeSort(0, data.size() - 1);
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

    // Inserir os números no vetor
    vector<int> numeros(size_array);
    for (int i = 0; i < size_array; i++) {
        cout << "Digite o numero da posicao vetor[" << i << "]: ";
        cin >> numeros[i];
    }

    // Criar objeto da classe MergeSort
    MergeSort sorter(numeros);

    // Exibir os valores originais
    cout << "Array original: ";
    sorter.print();

    // Aplicar o método de ordenação
    sorter.sort();

    // Exibir os valores ordenados
    cout << "Array ordenado: ";
    sorter.print();

    return 0;
}
