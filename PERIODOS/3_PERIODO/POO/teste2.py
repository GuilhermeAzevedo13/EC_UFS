from teste1 import Servidor


class Servidores:
    def __init__(self):
        self.__registro = list()

    def QuantidadeServidores(self):
        return len(self.__registro)

    def InserirServidor(self, nome, salario):
        servidor = Servidor(nome, salario)
        self.__registro.append(servidor)

    def RemoverServidor(self, servidor):
        if servidor in self.__registro:
            self.__registro.remove(servidor)
            print("Nota Removida com Sucesso!!!\n")
        else:
            print("Esta não é uma nota válida")

    def ListarServidor(self):
        index = 0
        while index < self.QuantidadeServidores():
            print(self.__registro[index].getNomeServidor())
            print(self.__registro[index].getNumeroMatricula())
            print(self.__registro[index].getSalarioServidor())
            index += 1

    def ExistenciaServidor(self, nomeServidor):
        for servidor in self.__registro:
            if servidor.getNomeServidor() == nomeServidor:
                return True

        return False
