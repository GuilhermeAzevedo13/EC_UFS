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
gl_array = base['GL'].values

# Printa o shape da coluna Grupo: (362,)
print(gl_array.shape)

# Faz um reshape para reconhecer ela como apenas uma coluna
gl_array_reshape = gl_array.reshape(-1, 1)
# Printa o shape corrigido: (362,1)
print(gl_array_reshape.shape)

print(gl_array_reshape)

print("\n")

print("Array GL em Rol\n")
gl_array_reshape = np.sort(gl_array_reshape, axis=0)
print(gl_array_reshape)
print("\n")
print(gl_array_reshape.shape)
print("\n")

# Soma todos os valores na matriz ldh_array_reshape
soma_valores_gl = np.sum(gl_array_reshape)
print("Soma dos valores de GL:", soma_valores_gl)
print("\n")
media = soma_valores_gl/362
print("Média dos Valores GL: {:.2f}".format(media))

# Calcula a mediana dos valores na matriz akp_array_reshape
mediana = np.median(gl_array_reshape)

# Exibe a mediana com duas casas decimais
print(f"Mediana dos valores de GL: {round(mediana, 2)}")


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


# Exemplo de uso com gl_array_reshape
# flattten() transforma o shape de bidimensional (362,1) para unidimensional com 362 valores
valores_repetidos = valores_mais_repetidos(gl_array_reshape.flatten())
print(f"Valores mais repetidos: {valores_repetidos}")

print("\n")
variancia = np.var(gl_array_reshape)
desvio_padrao = np.std(gl_array_reshape)
coeficiente_variacao = np.std(
    gl_array_reshape) / np.mean(gl_array_reshape) * 100

print("Variância:", round(variancia, 2))
print("Desvio Padrão:", round(desvio_padrao, 2))
print("Coeficiente de Variação:", round(coeficiente_variacao, 2))

print("\n")

valor_maximo = np.max(gl_array_reshape)
valor_minimo = np.min(gl_array_reshape)

print("Valor Máximo:", valor_maximo)
print("Valor Minimo:", valor_minimo)
