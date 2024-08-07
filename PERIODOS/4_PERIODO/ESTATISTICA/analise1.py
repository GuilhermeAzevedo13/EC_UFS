import matplotlib.pyplot as plt
from collections import defaultdict
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
Idade_array = base['Idade'].values

# Printa o shape da coluna Grupo: (362,)
print(Idade_array.shape)

# Faz um reshape para reconhecer ela como apenas uma coluna
Idade_array_reshape = Idade_array.reshape(-1, 1)
# Printa o shape corrigido: (362,1)
print(Idade_array_reshape.shape)

print(Idade_array_reshape)

print("\n")

print("Array Idades em Rol\n")
Idade_array_reshape = np.sort(Idade_array_reshape, axis=0)
print(Idade_array_reshape)
print("\n")
print(Idade_array_reshape.shape)
print("\n")

# Criação das faixas de idade
faixas_idade = [9, 19, 29, 39, 49, 59, 69, 79, 89, 99, 109]

# Contagem de ocorrências de cada faixa de idade
contagem_por_faixa = np.histogram(Idade_array, bins=faixas_idade)[0]

# Exibindo a contagem para cada faixa
print("Exibindo a contagem para cada faixa")
for i, faixa in enumerate(faixas_idade[:-1]):
    print(
        f'Faixa de idade: [{faixa}, {faixas_idade[i+1]}) - Ocorrências: {contagem_por_faixa[i]}')
print("\n")

# Calculando Ponto Medio:
print("Calculando Ponto Medio")
for i, faixa in enumerate(faixas_idade[:-1]):
    ponto_medio = 0
    ponto_medio = (faixa + faixas_idade[i+1])/2
    print(
        f'Faixa de idade: [{faixa}, {faixas_idade[i+1]}) - Ponto Médio: {ponto_medio}')

print("\n")

# Criando dicionário para armazenar os intervalos de idade por grupo
intervalos_por_grupo = defaultdict(list)

# Associando cada grupo com o intervalo de idade correspondente
for i, idade in enumerate(Idade_array):
    for faixa in zip(faixas_idade[:-1], faixas_idade[1:]):
        if idade >= faixa[0] and idade < faixa[1]:
            intervalos_por_grupo[base['Grupo'][i]].append(faixa)

# Mostrando os intervalos de idade por grupo
for grupo, intervalos in intervalos_por_grupo.items():
    intervalos_unicos = set(map(tuple, intervalos))
    print(f'Grupo {grupo}: Intervalos de idade - {intervalos_unicos}')

print("\n")

# Convertendo a coluna Grupo para inteiros
base['Grupo'] = base['Grupo'].astype(int)

# Criando um dicionário para armazenar a contagem de grupos por faixa de idade
contagem_por_faixa = {faixa: {grupo: 0 for grupo in range(
    1, 5)} for faixa in zip(faixas_idade[:-1], faixas_idade[1:])}

# Associando cada grupo com a faixa de idade correspondente
for i, idade in enumerate(Idade_array):
    for faixa in zip(faixas_idade[:-1], faixas_idade[1:]):
        if idade >= faixa[0] and idade < faixa[1]:
            contagem_por_faixa[faixa][base['Grupo'][i]] += 1

# Mostrando a contagem de grupos por faixa de idade
for faixa, grupos in contagem_por_faixa.items():
    print(f'Faixa de idade {faixa}: {grupos}')

print("\n")


# Criando listas vazias para armazenar os dados de cada grupo
dados_grupo_1 = []
dados_grupo_2 = []
dados_grupo_3 = []
dados_grupo_4 = []

# Preenchendo as listas com a quantidade de idades por grupo em cada faixa de idade
for faixa in zip(faixas_idade[:-1], faixas_idade[1:]):
    contagem_por_grupo = {1: 0, 2: 0, 3: 0, 4: 0}
    for i, idade in enumerate(Idade_array):
        if idade >= faixa[0] and idade < faixa[1]:
            contagem_por_grupo[base['Grupo'][i]] += 1
    dados_grupo_1.append(contagem_por_grupo[1])
    dados_grupo_2.append(contagem_por_grupo[2])
    dados_grupo_3.append(contagem_por_grupo[3])
    dados_grupo_4.append(contagem_por_grupo[4])

# Criando os gráficos de pizza para cada intervalo de idade
for i, faixa in enumerate(zip(faixas_idade[:-1], faixas_idade[1:])):
    dados = [dados_grupo_1[i], dados_grupo_2[i],
             dados_grupo_3[i], dados_grupo_4[i]]
    grupos = ['Grupo 1', 'Grupo 2', 'Grupo 3', 'Grupo 4']

    plt.figure(figsize=(8, 6))
    plt.pie(dados, labels=grupos, autopct='%1.1f%%')
    plt.title(
        f'Distribuição de idades por grupo na faixa [{faixa[0]},{faixa[1]})')
    plt.legend(loc='center left', bbox_to_anchor=(1, 0.9))
    plt.show()
