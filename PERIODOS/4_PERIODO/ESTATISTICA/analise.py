"""
Descrição das variáveis do arquivo CANCER.TXT:


	coluna 1: Identificação do paciente.
	coluna 2: Diagnóstico: 
		1 = Falso-negativo: diagnosticados como não tendo a 
			doença quando na verdade a tinham. 
		2 = Negativo: diagnosticados como não tendo a doença 
			quando de fato não não a tinham. 
		3 = Positivo: diagnosticados corretamente como tendo a doença.
		4=Falso-positivo: diagnosticados como tendo a doença quando na 
			verdade não tinham.
	coluna 3: Idade.
	coluna 4: Espectro químico da análise do sangue-alkaliine phosphatose (AKP). 
	coluna 5: Concentração de fosfato no sangue (P).
	coluna 6: Enzima, lactate dehydrogenase (LDH).
	coluna 7: Albumina (ALB).
	coluna 8: Nitrogênio na uréia (N).
	coluna 9: Glicose (GL).
"""

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
grupo_array = base['Grupo'].values

# Printa o shape da coluna Grupo: (362,)
print(grupo_array.shape)

# Faz um reshape para reconhecer ela como apenas uma coluna
grupo_array_reshape = grupo_array.reshape(-1, 1)
# Printa o shape corrigido: (362,1)
print(grupo_array_reshape.shape)

print(grupo_array_reshape)

print("\n")

# Supondo que 'grupo_array' contenha seus valores
grupo_array_flat = np.array(
    [item for sublist in grupo_array_reshape for item in sublist])

# Encontrando os valores únicos e suas contagens
valores, contagens = np.unique(grupo_array_flat, return_counts=True)

# Exibindo a contagem de cada valor
for valor, contagem in zip(valores, contagens):
    print(f"{valor}: tem quantidade {contagem}")
