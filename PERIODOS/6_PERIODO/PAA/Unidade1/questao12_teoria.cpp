#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Implementação da Busca Binária
int buscaBinaria(const vector<int>& A, int x) {
    int i,k = 0;
    int j = A.size() - 1;

    while (true) {
        int k = floor((i + j) / 2); // Cálculo do índice do meio

        if (A[k] < x) {
            i = k;
        } else {
            j = k;
        }

        // Verifica se o valor foi encontrado ou se o intervalo se tornou inválido
        if (A[k] == x || i >= j) {
            break;
        }
    }

    // Retorna o valor encontrado ou -1 se não estiver presente
    if (A[k] == x) {
        return x;
    } else {
        return -1;
    }
}

int main() {
    // Vetor de teste (ordenado e com valores distintos)
    vector<int> A = {1,3,5,9,13,15,17,19,22};

    // Testar valores
    int x;
    cout << "Digite o valor que deseja buscar: ";
    cin >> x;

    int resultado = buscaBinaria(A, x);

    if (resultado != -1) {
        cout << "Valor " << x << " encontrado no vetor." << endl;
    } else {
        cout << "Valor " << x << " nao encontrado no vetor." << endl;
    }

    return 0;
}
