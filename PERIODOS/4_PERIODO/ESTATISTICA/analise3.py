import pandas as pd
import numpy as np

# Importa o banco de dados para ser lido pelo Pandas
caminho_arquivo = "C:\\Users\\guilh\\OneDrive\\Documents\\4_Periodo_UFS\\ESTATISTICA\\cancer_formatados.csv"

# O Pandas analisa todo o arquivo csv e retira os espaços em branco.
base = pd.read_csv(caminho_arquivo, sep=';', converters={
                   'Grupo': lambda x: str(x).replace('\u200b', '')})

# Printa o shape: (362,9)
print(base.shape)

# Separa a coluna desejada das demais
akp_array = base['AKP'].str.replace(',', '.').astype(float).values

# Printa o shape da coluna Grupo: (362,)
print(akp_array.shape)

# Faz um reshape para reconhecer ela como apenas uma coluna
akp_array_reshape = akp_array.reshape(-1, 1)
# Printa o shape corrigido: (362,1)
print(akp_array_reshape.shape)

print(akp_array_reshape)

print("\n")

print("Array AKP em Rol\n")
akp_array_reshape = np.sort(akp_array_reshape, axis=0)
print(akp_array_reshape)
print("\n")
print(akp_array_reshape.shape)
print("\n")

# Soma todos os valores na matriz akp_array_reshape
soma_valores_akp = np.sum(akp_array_reshape)
print("Soma dos valores de AKP:", soma_valores_akp)
print("\n")
media = soma_valores_akp/362
print("Média dos Valores AKP: {:.2f}".format(media))

# Calcula a mediana dos valores na matriz akp_array_reshape
mediana = np.median(akp_array_reshape)

# Exibe a mediana com duas casas decimais
print(f"Mediana dos valores de AKP: {round(mediana, 2)}")


def valores_mais_repetidos(valor):
    frequencias = {}
    for item in valor:
        if item in frequencias:
            frequencias[item] += 1
        else:
            frequencias[item] = 1

    frequencia_maxima = max(frequencias.values())

    moda = [item for item, freq in frequencias.items() if freq ==
            frequencia_maxima]
    return moda


# Exemplo de uso com akp_array_reshape
# flattten() transforma o shape de bidimensional (362,1) para unidimensional com 362 valores
valores_repetidos = valores_mais_repetidos(akp_array_reshape.flatten())
print(f"Valores mais repetidos: {valores_repetidos}")

print("\n")
variancia = np.var(akp_array_reshape)
desvio_padrao = np.std(akp_array_reshape)
coeficiente_variacao = np.std(
    akp_array_reshape) / np.mean(akp_array_reshape) * 100

print("Variância:", round(variancia, 2))
print("Desvio Padrão:", round(desvio_padrao, 2))
print("Coeficiente de Variação:", round(coeficiente_variacao, 2))

print("\n")

valor_maximo = np.max(akp_array_reshape)
valor_minimo = np.min(akp_array_reshape)

print("Valor Máximo:", valor_maximo)
print("Valor Minimo:", valor_minimo)
