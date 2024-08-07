# len(lista)
frutas = ['maçã', 'banana', 'laranja', 'uva']
tamanho = len(frutas)
print(tamanho)  # Saída: 4

# lista.append(elemento): Adiciona um elemento ao final da lista
numeros = [1, 2, 3]
numeros.append(4)
print(numeros)  # Saída: [1, 2, 3, 4]

# lista.insert(indice, elemento): Insere um elemento em uma posição específica da lista.
pessoas = ['Alice', 'Bob', 'Carol']
pessoas.insert(1, 'David')
print(pessoas)  # Saída: ['Alice', 'David', 'Bob', 'Carol']

# lista.remove(elemento): Remove a primeira ocorrência do elemento na lista.
numeros = [1, 2, 3, 2]
numeros.remove(2)
print(numeros)  # Saída: [1, 3, 2]

# lista.pop([índice]): Remove e retorna o elemento no índice especificado
# (ou o último elemento se nenhum índice for fornecido).
frutas = ['maçã', 'banana', 'laranja']
fruta_removida = frutas.pop(1)
print(frutas)         # Saída: ['maçã', 'laranja']
print(fruta_removida)  # Saída: 'banana'

# lista.index(elemento): Retorna o índice da primeira ocorrência do elemento na lista.
numeros = [10, 20, 30, 40]
indice = numeros.index(30)
print(indice)  # Saída: 2

# elemento in lista: Verifica se um elemento está presente na lista (retorna True ou False).
letras = ['a', 'b', 'c']
existe_a = 'a' in letras
print(existe_a)  # Saída: True

# lista.count(elemento): Retorna o número de ocorrências do elemento na lista.
numeros = [1, 2, 2, 3, 2, 4]
ocorrencias = numeros.count(2)
print(ocorrencias)  # Saída: 3

# lista.sort(): Ordena a lista em ordem crescente.
numeros = [3, 1, 4, 2]
numeros.sort()
print(numeros)  # Saída: [1, 2, 3, 4]

# lista.reverse(): Inverte a ordem dos elementos da lista.
letras = ['a', 'b', 'c']
letras.reverse()
print(letras)  # Saída: ['c', 'b', 'a']
