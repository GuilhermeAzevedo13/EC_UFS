// Entrada: Uma sequência de n números 〈a1, a2, ..., an〉.
// Saída: Uma permutação (reordenação) 〈a′1, a′2,..., a′n〉 da sequência de entrada, tal que a′1≤ a′2≤ ... ≤ a′n.
#include <iostream>
#include <vector>
using namespace std;

class InsertionSorter {
private:
    vector<int> data; // Dados a serem ordenados

public:
    // Construtor para inicializar os dados
    InsertionSorter(const vector<int>& input) : data(input) {}

    // Método para realizar o Insertion Sort
    void sort() {
        int n = data.size();
        for (int i = 1; i < n; i++) {
            int chave = data[i];
            int j = i - 1;

            // Mover os elementos maiores que 'chave' uma posição à frente
            while (j >= 0 && data[j] > chave) {
                data[j + 1] = data[j];
                j--;
            }

            // Inserir a 'chave' na posição correta
            data[j + 1] = chave;
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
    InsertionSorter sorter(numeros);

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

