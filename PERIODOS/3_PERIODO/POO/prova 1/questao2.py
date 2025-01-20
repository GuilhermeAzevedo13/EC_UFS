from questao1 import Servidor

class Servidores:
    def __init__(self):
        self.__registro = list()

    def QuantidadeServidores(self):
        return len(self.__registro)

    def InserirServidor(self, nome, salario):
        servidor = Servidor(nome, salario)
        self.__registro.append(servidor)

    def RemoverServidor(self, nomeServidor):
        for servidor in self.__registro:
            if servidor.getNomeServidor() == nomeServidor:
                self.__registro.remove(servidor)
                return True
        return False
            
    def ListarServidores(self):
        for servidor in self.__registro:
            print(servidor.getNomeServidor())
            print(servidor.getMatriculaServidor())
            print(servidor.getSalarioServidor())
            print("\n")

   
    def ExistenciaServidor(self, nomeServidor):
        cont = 0
        while cont < self.QuantidadeServidores():
            if self.__registro[cont].getNomeServidor() == nomeServidor:
                return True
            cont += 1
        return False


"""
if servidor in self.__registro:
            self.__registro.remove(servidor)
            print("Servidor Removido com Sucesso!!!\n")

        print("Este não é um servidor válido")
            
            
"""

"""
def RemoverServidor(self, servidor):
        if servidor in self.__registro:
            self.__registro.remove(servidor)
            print("Servidor Removido com Sucesso!!!\n")
        else:
            pass
"""
