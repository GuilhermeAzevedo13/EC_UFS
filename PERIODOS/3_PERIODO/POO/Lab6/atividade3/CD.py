from reproducao import Reproducao

class CD(Reproducao):
    def __init__(self, titulo, tempReprod, artista, trilhas, possuo, comentario):
        super().__init__(titulo, tempReprod, possuo, comentario)
        self.__artista = artista
        self.__trilhas = trilhas
           
    def get_artista(self):
        return self.__artista
    def set_artista(self, novo_artista):
        self.__artista = novo_artista
        
    def get_trilhas(self):
        return self.__trilhas
    def set_trilhas(self, nova_trilha):
        self.__trilhas = nova_trilha
