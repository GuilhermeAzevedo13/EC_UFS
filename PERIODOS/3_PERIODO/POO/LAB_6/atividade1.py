class CD:
    def __init__(self, titulo, tempo_reproducao, artista, num_trilhas, possuo, comentario):
        self._titulo = titulo
        self._tempo_reproducao = tempo_reproducao
        self._artista = artista
        self._num_trilhas = num_trilhas
        self._possuo = possuo
        self._comentario = comentario

    def get_titulo(self):
        return self._titulo

    def set_titulo(self, novo_titulo):
        self._titulo = novo_titulo

    def get_tempo_reproducao(self):
        return self._tempo_reproducao

    def set_tempo_reproducao(self, novo_tempo):
        self._tempo_reproducao = novo_tempo

    def get_artista(self):
        return self._artista

    def set_artista(self, novo_artista):
        self._artista = novo_artista

    def get_num_trilhas(self):
        return self._num_trilhas

    def set_num_trilhas(self, novo_num_trilhas):
        self._num_trilhas = novo_num_trilhas

    def get_possuo(self):
        return self._possuo

    def set_possuo(self, novo_possuo):
        self._possuo = novo_possuo

    def get_comentario(self):
        return self._comentario

    def set_comentario(self, novo_comentario):
        self._comentario = novo_comentario


class DVD:
    def __init__(self, titulo, tempo_reproducao, diretor, possuo, comentario):
        self._titulo = titulo
        self._tempo_reproducao = tempo_reproducao
        self._diretor = diretor
        self._possuo = possuo
        self._comentario = comentario

    def get_titulo(self):
        return self._titulo

    def set_titulo(self, novo_titulo):
        self._titulo = novo_titulo

    def get_tempo_reproducao(self):
        return self._tempo_reproducao

    def set_tempo_reproducao(self, novo_tempo):
        self._tempo_reproducao = novo_tempo

    def get_diretor(self):
        return self._diretor

    def set_diretor(self, novo_diretor):
        self._diretor = novo_diretor

    def get_possuo(self):
        return self._possuo

    def set_possuo(self, novo_possuo):
        self._possuo = novo_possuo

    def get_comentario(self):
        return self._comentario

    def set_comentario(self, novo_comentario):
        self._comentario = novo_comentario
