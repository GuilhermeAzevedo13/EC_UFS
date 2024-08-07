class Estudante:
    def __init__(self, nome, matricula, num_creditos):
        self.__nome = nome
        self.__matricula = matricula
        self.__numcreditos = num_creditos
        
    def get_nome(self): #pegar o nome
        return self.__nome
    
    def set_nome(self, nome): #alterar o nome
        self.__nome = nome
        
    def get_matricula(self): #pegar a matricula
        return self.__matricula
    
    def set_matricula(self, matricula): #alterar a matricula
        self.__matricula = matricula
        
    def get_numcreditos(self): #pegar o numero de creditos
        return self.__numcreditos
    
    def set_num_creditos(self, num_creditos): #alterar o num_creditos
        self.__numcreditos = num_creditos
        
    def add_creditos(self, creditos):
        self.__numcreditos += creditos

def main():
    # Criando uma lista de objetos Estudante
    estudantes = [Estudante("Guilherme", "202200025804", 0), Estudante("Maria", "202200025805", 0), Estudante("João", "202200025806", 0)]
    
    # Lendo o nome e número de créditos
    nome = input("Digite o nome do estudante: ")
    creditos = int(input("Digite o número de créditos: "))
    
    # Verificando se o nome corresponde a algum estudante e incrementando os créditos
    for estudante in estudantes: 
        if estudante.get_nome() == nome:
            estudante.add_creditos(creditos)
    
    # Imprimindo os nomes dos estudantes e o total de créditos
    for estudante in estudantes:
        print("Nome:", estudante.get_nome())
        print("Créditos:", estudante.get_numcreditos())
        print()
    
    # Calculando o total de créditos
    total_creditos = sum(estudante.get_numcreditos() for estudante in estudantes)
    print("Total de créditos:", total_creditos)

if __name__ == "__main__":
    main()