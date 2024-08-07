class Reproducao:
    def __init__(self, titulo, tempReprod, possuo, comentario):
        self.__titulo = titulo
        self.__tempReprod = tempReprod
        self.__possuo = possuo
        self.__comentario = comentario
        
    def getTitulo(self):
        return self.__titulo
    def setTitulo(self, novo_titulo):
        self.__titulo = novo_titulo
    
    def getTempReprod(self):
        return self.__tempReprod
    def setTempReprod(self, tempReprod_novo):
        self.__tempReprod = tempReprod_novo
        
    def getPossuo(self):
        return self.__possuo
    def setPossuo(self, possuo_novo):
        self.__possuo = possuo_novo
        
    def getComentario(self):
        return self.__comentario
    def setComentario(self, comentario_novo):
        self.__comentario = comentario_novo