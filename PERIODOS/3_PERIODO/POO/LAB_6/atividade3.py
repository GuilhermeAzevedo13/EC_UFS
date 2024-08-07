from atividade1 import *
from atividade2 import *

class Item:
    def __init__(self, titulo, tipo, tempo_reproducao, comentario, possuo):
        self._titulo = titulo
        self._tipo = tipo
        self._tempo_reproducao = tempo_reproducao
        self._comentario = comentario
        self._possuo = possuo

    def get_titulo(self):
        return self._titulo

    def get_tipo(self):
        return self._tipo

    def get_tempo_reproducao(self):
        return self._tempo_reproducao

    def get_comentario(self):
        return self._comentario

    def get_possuo(self):
        return self._possuo

    def set_possuo(self, possuo):
        self._possuo = possuo

class CD(Item):
    def __init__(self, titulo, tempo_reproducao, artista, num_trilhas, comentario, possuo):
        super().__init__(titulo, "CD", tempo_reproducao, comentario, possuo)
        self._artista = artista
        self._num_trilhas = num_trilhas

    def get_artista(self):
        return self._artista

    def get_num_trilhas(self):
        return self._num_trilhas

class DVD(Item):
    def __init__(self, titulo, tempo_reproducao, diretor, comentario, possuo):
        super().__init__(titulo, "DVD", tempo_reproducao, comentario, possuo)
        self._diretor = diretor

    def get_diretor(self):
        return self._diretor

class Catalogo:
    def __init__(self):
        self.catalogo = []

    def inserir_item(self, item):
        self.catalogo.append(item)

    def pesquisar_item(self, titulo):
        for item in self.catalogo:
            if item.get_titulo() == titulo:
                print("ITEM ENCONTRADO")
                return item
            else:
                print("ITEM NÃO ENCONTRADO")
        return None

    def imprimir_itens(self):
        for item in self.catalogo:
            print(f"{item.get_tipo()}: {item.get_titulo()}")

    def remover_item(self, item):
        if item in self.catalogo:
            self.catalogo.remove(item)

