from CD import CD
from DVD import DVD

class Catalogo:
    def __init__(self):
        self.__registrarCD = []
        self.__registrarDVD = []
        
    def InserirCD(self, CD):
        self.__registrarCD.append(CD)
        
    def RemoverCD(self, CD):
        if CD in self.__registrarCD:
            self.__registrarCD.remove(CD)
            
    def PesquisarCD(self, tituloCD):
        for CD in self.__registrarCD:
            if CD.get_titulo() == tituloCD:
                print("Item Encontrado")
                return CD
            else:
                print("Item Encontrado")
            return None
        
    def ImprimirCD(self):
        for CD in self.__registrarCD:
            print(CD.get_titulo())
            
    def InserirDVD(self, DVD):
        self.__registrarDVD.append(DVD)
        
    def RemoverDVD(self, DVD):
        if DVD in self.__registrarDVD:
            self.__registrarDVD.remove(DVD)
            
    def PesquisarDVD(self, tituloDVD):
        for DVD in self.__registrarDVD:
            if DVD.get_titulo() == tituloDVD:
                print("Item Encontrado")
                return DVD
            else:
                print("Item Encontrado")
            return None
        
    def ImprimirDVD(self):
        for DVD in self.__registrarDVD:
            print(DVD.get_titulo()) 