
import random

class Servidor:
    def __init__(self, nomeServidor, salarioServidor):
        self.__nomeServidor = nomeServidor
        self.__salarioServidor = salarioServidor
        self.__matriculaServidor = "{:05d}".format(random.randint(0, 99999))
        
    def getNomeServidor(self):
        return self.__nomeServidor
    
    def getSalarioServidor(self):
        return self.__salarioServidor
    
    def getMatriculaServidor(self):
        return self.__matriculaServidor
    
    def setNomeServidor(self, nomeServidor):
        self.__nomeServidor = nomeServidor
        
    def setSalarioServidor(self, salarioServidor):
        self.__salarioServidor = salarioServidor
    
    def setNumeroMatricula(self, numeroMatricula):
        self.__matriculaServidor = numeroMatricula

    def ExibirInformacoes(self):
        print("Nome do Servidor: {}\nSalario do Servidor: {}\nMatricula do Servidor: {}\n".format(
            self.__nomeServidor, self.__salarioServidor, self.__matriculaServidor))