#include <iostream>
#include <vector>
using namespace std;

class HeapSort {
private:
    vector<int> data;

    // Função para garantir a propriedade de Max-Heap
    void heapify(int n, int i) {
        int maior = i;         // Inicializa o maior como raiz
        int esquerda = 2 * i + 1; // Filho esquerdo
        int direita = 2 * i + 2;  // Filho direito

        // Se o filho esquerdo for maior que a raiz
        if (esquerda < n && data[esquerda] > data[maior]) {
            maior = esquerda;
        }

        // Se o filho direito for maior que o maior até agora
        if (direita < n && data[direita] > data[maior]) {
            maior = direita;
        }

        // Se o maior não é a raiz
        if (maior != i) {
            swap(data[i], data[maior]);

            // Recursivamente heapify na subárvore afetada
            heapify(n, maior);
        }
    }

public:
    // Construtor para inicializar os dados
    HeapSort(const vector<int>& input) : data(input) {}

    // Método para realizar o HeapSort
    void sort() {
        int n = data.size();

        // Construir o Max-Heap
        for (int i = n / 2 - 1; i >= 0; i--) {
            heapify(n, i);
        }

        // Extraindo os elementos do heap
        for (int i = n - 1; i >= 0; i--) {
            // Move a raiz atual para o final
            swap(data[0], data[i]);

            // Chama heapify no heap reduzido
            heapify(i, 0);
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

    // Inserir os números no vetor
    vector<int> numeros(size_array);
    for (int i = 0; i < size_array; i++) {
        cout << "Digite o numero da posicao vetor[" << i << "]: ";
        cin >> numeros[i];
    }

    // Criar objeto da classe HeapSort
    HeapSort sorter(numeros);

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
