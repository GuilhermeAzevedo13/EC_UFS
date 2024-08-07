import os

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
    
    def set_numcreditos(self, num_creditos): #alterar o num_creditos
        self.__numcreditos = num_creditos
        
    def add_creditos(self, creditos):
        self.__numcreditos += creditos
        
    def ExibirInformacoes(self):
        return "Nome: {}\nMatricula: {}\nCreditos: {}".format(self.__nome, self.__matricula, self.__numcreditos)

def main():
    # Criando uma instância de Estudante
    estudante1 = Estudante("Guilherme", "202200025804", 0)
    
    # Obtendo e imprimindo as informações do estudante1
    os.system("cls")
    print(estudante1.ExibirInformacoes())
    
    # Adicionando créditos e imprimindo o novo número de créditos
    valor = float(input("Digite a quantidade de Creditos: "))
    estudante1.add_creditos(valor)
    #estudante1.set_numcreditos(valor)
    print("Novo número de créditos:", estudante1.get_numcreditos())

if __name__ == "__main__":
    main()
