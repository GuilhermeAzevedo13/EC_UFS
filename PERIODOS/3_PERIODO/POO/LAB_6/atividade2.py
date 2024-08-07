from atividade1 import *

class Catalogo:
    def __init__(self):
        self.catalogo_cd = []
        self.catalogo_dvd = []

    def inserir_cd(self, cd):
        self.catalogo_cd.append(cd)

    def inserir_dvd(self, dvd):
        self.catalogo_dvd.append(dvd)

    def pesquisar_cd(self, titulo):
        for cd in self.catalogo_cd:
            if cd.get_titulo() == titulo:
                print("CD ENCONTRADO")
                return cd
            else:
                print("CD NÃO ENCONTRADO")
        return None

    def pesquisar_dvd(self, titulo):
        for dvd in self.catalogo_dvd:
            if dvd.get_titulo() == titulo:
                print("DVD ENCONTRADO")
                return dvd
            else:
                print("DVD NÃO ENCONTRADO")
        return None

    def imprimir_cds(self):
        for cd in self.catalogo_cd:
            print(f"CD: {cd.get_titulo()} - Artista: {cd.get_artista()}")

    def imprimir_dvds(self):
        for dvd in self.catalogo_dvd:
            print(f"DVD: {dvd.get_titulo()} - Diretor: {dvd.get_diretor()}")

    def remover_cd(self, cd):
        if cd in self.catalogo_cd:
            self.catalogo_cd.remove(cd)

    def remover_dvd(self, dvd):
        if dvd in self.catalogo_dvd:
            self.catalogo_dvd.remove(dvd)
