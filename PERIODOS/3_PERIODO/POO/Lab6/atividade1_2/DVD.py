class DVD:
    def __init__(self, titulo, tempoReprod, diretor, possuo, comentario):
        self.__titulo = titulo
        self.__tempoReprod = tempoReprod
        self.__diretor = diretor
        self.__possuo = possuo
        self.__comentario = comentario
        
        
    def get_titulo(self):
        return self.__titulo
    def set_titulo(self, novo_titulo):
        self.__titulo = novo_titulo
        
    def get_tempo_reproducao(self):
        return self.__tempoReprod
    def set_tempo_reproducao(self, novo_tempo):
        self.__tempoReprod = novo_tempo

    def get_diretor(self):
        return self.__diretor
    def set_diretor(self, novo_diretor):
        self.__diretor = novo_diretor

    def get_possuo(self):
        return self.__possuo
    def set_possuo(self, novo_possuo):
        self.__possuo = novo_possuo

    def get_comentario(self):
        return self.__comentario
    def set_comentario(self, novo_comentario):
        self.__comentario = novo_comentario