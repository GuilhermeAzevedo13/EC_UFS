import os


class Vendedor:
    def __init__(self, nome):
        self.__nome = nome
        self.__vendas = 0

    def vendeu(self, vendas):
        self.__vendas = vendas

    def bateu_meta(self, meta):
        if self.__vendas > meta:
            print(self.__nome, "bateu as metas")
        else:
            print(self.__nome, "não bateu a meta")


os.system("cls")
vendedor1 = Vendedor('Guilherme')
vendedor1.vendeu(1000)
vendedor1.bateu_meta(600)


# A classe serve para generalizar diversas funcoes que podemos gerar!
