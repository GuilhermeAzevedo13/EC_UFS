from Veiculo import Veiculo

class Moto(Veiculo):
    def __init__(self, placaveiculo, fabricanteveiculo, numerorodas, tipoveiculo, cilindrada):
        super().__init__(placaveiculo, fabricanteveiculo, numerorodas, tipoveiculo)
        self.__cilindrada = cilindrada
        
    def get_cilindrada(self):
        return self.__cilindrada
    def set_cilindrada(self, cilindrada):
        self.__cilindrada = cilindrada
        
    def imprime(self):
            print("\nNumero de Cilindrada: " + str(self.__cilindrada))
            super().imprime()