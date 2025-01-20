class CD:
    def __init__(self, titulo, reproducao, artista, trilhas, possuo, comentario):
        self.__titulo = titulo
        self.__reproducao = reproducao
        self.__artista = artista
        self.__trilhas = trilhas
        self.__possuo = possuo
        self.__comentario = comentario
        
    def get_titulo(self):
        return self.__titulo
    def set_titulo(self, novo_titulo):
        self.__titulo = novo_titulo
        
    def get_reproducao(self):
        return self.__reproducao
    def set_reproducao(self, novo_reproducao):
        self.__reproducao = novo_reproducao
        
    def get_artista(self):
        return self.__artista
    def set_artista(self, novo_artista):
        self.__artista = novo_artista
        
    def get_trilhas(self):
        return self.__trilhas
    def set_trilhas(self, nova_trilha):
        self.__trilhas = nova_trilha
        
    def get_possuo(self):
        return self.__possuo    
    def set_possuo(self, nova_possuo):
        self.__possuo = nova_possuo
        
    def get_comentario(self):
        return self.__comentario
    def set_comentario(self, novo_comentario):
        self.__comentario = novo_comentario