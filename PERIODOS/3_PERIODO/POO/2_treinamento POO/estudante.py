class Estudante:
    def __init__(self, nome, matricula, creditos):
        self.__nome = nome
        self.__matricula = matricula
        self.__numCreditos = creditos

    def AddCreditos(self, creditos):
        self.__numCreditos += creditos

    def getNome(self):
        return self.__nome
    def setNome(self, nome):
        self.__nome = nome

    def getMatricula(self):
        return self.__matricula
    def setMatricula(self, matricula):
        self.__matricula = matricula

    def getCreditos(self):
        return self.__creditos
    def setCreditos(self, creditos):
        self.__creditos = creditos
    
    def ExibirInformacoes(self):
        print(self.__nome, self.__matricula, self.__numCreditos)
