#include <iostream>
#include <vector>
using namespace std;

class QuickSort {
private:
    vector<int> data; // Dados a serem ordenados

    // Função para particionar os dados
    int particionar(int baixo, int alto) {
        int pivot = data[baixo]; // Escolhe o primeiro elemento como pivô
        int i = baixo + 1;       // Começa logo após o pivô
        int j = alto;            // Começa no fim

        while (true) {
            // Avança i enquanto o elemento for menor ou igual ao pivô
            while (i <= j && data[i] <= pivot) {
                i++;
            }

            // Retrocede j enquanto o elemento for maior que o pivô
            while (i <= j && data[j] > pivot) {
                j--;
            }

            if (i >= j) {
                break; // Condição de saída: i e j se cruzam
            }

            // Troca data[i] com data[j]
            swap(data[i], data[j]);
        }

        // Coloca o pivô na posição correta
        swap(data[baixo], data[j]);

        return j; // Retorna o índice do pivô
    }

public:
    // Construtor para inicializar os dados
    QuickSort(const vector<int>& input) : data(input) {}

    // Método para realizar o Quick Sort
    void sort(int baixo, int alto) {
        if (baixo < alto) {
            // Encontra o índice do pivô
            int pi = particionar(baixo, alto);

            // Ordena os subarrays à esquerda e à direita do pivô
            sort(baixo, pi - 1);
            sort(pi + 1, alto);
        }
    }

    // Método para iniciar o processo de ordenação
    void sort() {
        sort(0, data.size() - 1);
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

    // Criar objeto da classe QuickSort
    QuickSort sorter(numeros);

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
