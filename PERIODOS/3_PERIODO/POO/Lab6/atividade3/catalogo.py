from CD import CD
from DVD import DVD
from reproducao import Reproducao

class Catalogo:
    def __init__(self):
        self.__registrarReproducao = []
        
    def InserirReproducao(self, reproducao):
        self.__registrarReproducao.append(reproducao)
        
    def RemoverReproducao(self, reproducao):
        if reproducao in self.__registrarReproducao:
            self.__registrarReproducao.remove(reproducao)
            
    def PesquisarCD(self, tituloReproducao):
        for reproducao in self.__registrarReproducao:
            if reproducao.get_titulo() == tituloReproducao:
                print("Item Encontrado")
                return reproducao
            else:
                print("Item Encontrado")
            return None
        
    def ImprimirReproducao(self):
        print("CDs:\n")
        for reproducao in self.__registrarReproducao:
            if isinstance(reproducao, CD):
                print(reproducao.getTitulo())
        print("--------------")
        print("--------------")
        print("DVDs:\n")
        for reproducao in self.__registrarReproducao:
            if isinstance(reproducao,DVD):
                print(reproducao.getTitulo())