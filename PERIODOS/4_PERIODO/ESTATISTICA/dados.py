# Abra o arquivo de texto para leitura
with open('cancer.txt', 'r') as file:
    linhas = file.readlines()  # Lê todas as linhas do arquivo

# Remove espaços em branco extras e substitui espaços por ponto e vírgula
linhas_formatadas = [linha.strip().replace(' ', ';') for linha in linhas]

# Cria um novo arquivo CSV com os dados formatados
with open('cancer_formatados.csv', 'w') as file:
    for linha in linhas_formatadas:
        file.write(f"{linha}\n")
