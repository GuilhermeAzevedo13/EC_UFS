import random


class Servidor:
    def __init__(self, nomeServidor, salarioServidor):
        self.__nomeServidor = nomeServidor
        self.__numeroMatricula = "{:04d}".format(random.randint(0, 9999))
        self.__salarioServidor = salarioServidor

    def getNomeServidor(self):
        return self.__nomeServidor

    def getNumeroMatricula(self):
        return self.__numeroMatricula

    def getSalarioServidor(self):
        return self.__salarioServidor

    def setNomeServidor(self, nomeServidor):
        self.__nomeServidor = nomeServidor

    def setSalarioServidor(self, salarioServidor):
        self.__salarioServidor = salarioServidor

    def setNumeroMatricula(self, numeroMatricula):
        self.__numeroMatricula = "{:04d}".format(numeroMatricula)

    def ExibirInformacoes(self):
        print("Nome do Servidor: {}\nMatricula do Servidor: {}\nSalario do Servidor: {}\n".format(
            self.__nomeServidor, self.__numeroMatricula, self.__salarioServidor))


"""
self.__numeroMatricula = str(random.randint(0, 9)) + str(random.randint(0, 9)) + str(
            random.randint(0, 9)) + str(random.randint(0, 9))
"""
