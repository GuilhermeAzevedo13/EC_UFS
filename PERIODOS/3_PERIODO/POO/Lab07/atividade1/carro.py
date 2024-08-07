from Veiculo import Veiculo


class Carro(Veiculo):
    def __init__(self, placaveiculo, fabricanteveiculo, numerorodas, tipoveiculo, numportas):
        super().__init__(placaveiculo, fabricanteveiculo, numerorodas, tipoveiculo)
        self.__numportas = numportas
        
    def get_numportas(self):
        return self.__numportas
    def set_numportas(self, numportas):
        self.__numportas = numportas
        
    def imprime(self):
            print("\nNumero de Portas: " + str(self.__numportas))
            super().imprime()