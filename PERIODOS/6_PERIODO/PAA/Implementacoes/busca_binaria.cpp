#include <iostream>
#include <vector>
using namespace std;

class BuscaBinaria {
public:
    // Função para realizar a busca binária
    int search(const vector<int>& data, int target) {
        int baixo = 0;
        int alto = data.size() - 1;

        while (baixo <= alto) {
            int meio = baixo + (alto - baixo) / 2; // Evita estouro de inteiros

            // Verifica se o elemento do meio é o alvo
            if (data[meio] == target) {
                return meio; // Retorna o índice do elemento encontrado
            }

            // Decide qual metade continuar a busca
            if (data[meio] < target) {
                baixo = meio + 1; // Busca na metade direita
            } else {
                alto = meio - 1; // Busca na metade esquerda
            }
        }

        return -1; // Retorna -1 se o elemento não for encontrado
    }
};

int main() {
    int size_array;

    // Entrada: Quantidade de números
    cout << "Digite quantos numeros deseja inserir (array deve estar ordenado): ";
    cin >> size_array;

    // Inserir os números no vetor
    vector<int> numeros(size_array);
    cout << "Digite os numeros em ordem crescente: ";
    for (int i = 0; i < size_array; i++) {
        cin >> numeros[i];
    }

    // Entrada do número a ser procurado
    int target;
    cout << "Digite o numero que deseja buscar: ";
    cin >> target;

    // Criar objeto e realizar a busca binária
    BuscaBinaria bb;
    int resultado = bb.search(numeros, target);

    // Exibir o resultado
    if (resultado != -1) {
        cout << "Numero encontrado na posicao: " << resultado << endl;
    } else {
        cout << "Numero nao encontrado." << endl;
    }

    return 0;
}
