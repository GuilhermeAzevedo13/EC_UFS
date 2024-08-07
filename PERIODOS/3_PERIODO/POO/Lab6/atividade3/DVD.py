from reproducao import Reproducao

class DVD(Reproducao):
    def __init__(self, titulo, tempReprod, diretor, possuo, comentario):
        super().__init__(titulo, tempReprod, possuo, comentario)
        self.__diretor = diretor
        
    def get_diretor(self):
        return self.__diretor
    def set_diretor(self, novo_diretor):
        self.__diretor = novo_diretor
