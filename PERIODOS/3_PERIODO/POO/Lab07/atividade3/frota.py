from Veiculo import Veiculo
from carro import Carro
from moto import Moto
from bike import Bike

class Frota:
    def __init__(self):
        self.__registrarFrota = list()
        
    def InserirFrota(self, frota):
        self.__registrarFrota.append(frota)
        
    def RemoverReproducao(self, frota):
        if self.PesquisarFrota(frota):
            self.__registrarFrota.remove(frota)
            print("Veiculo Removido")
        else:
            print("Veiculo Nao Removido")
            
    def PesquisarFrota(self, frota):
        if frota in self.__registrarFrota:
            return True
        return False
        
    def ImprimirReproducao(self):
        print("Carro:\n")
        for frota in self.__registrarFrota:
            if isinstance(frota, Carro):
                frota.imprime()
        print("--------------")
        print("--------------")
        print("Moto:\n")
        for frota in self.__registrarFrota:
            if isinstance(frota, Moto):
                frota.imprime()
        print("--------------")
        print("--------------")
        for frota in self.__registrarFrota:
            if isinstance(frota, Bike):
                frota.imprime()
        