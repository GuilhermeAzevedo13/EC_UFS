from Veiculo import Veiculo


class Bike(Veiculo):
    def __init__(self, placaveiculo, fabricanteveiculo, numerorodas, tipoveiculo, marchas):
        super().__init__(placaveiculo, fabricanteveiculo, numerorodas, tipoveiculo)
        self.__marchas = marchas
        
    def get_marchas(self):
        return self.__marchas
    def set_marchas(self, marchas):
        self.__marchas = marchas
        
    def imprime(self):
            print("\nNumero de Marchas: " + str(self.__marchas))
            super().imprime()