from atividade3 import *


cd1 = CD("Programação Orientada a AC/DC", 60, "Admilson", 10, True, "Um Estouro")
dvd1 = DVD("12 metodos e 1 classe", 120, "Carlos Alberto", False, "Qual a relação entre os metodos e as classes?")


catalogo = Catalogo()

catalogo.inserir_item(cd1)
catalogo.inserir_item(dvd1)

cd_encontrado = catalogo.pesquisar_item("AC/DC")
dvd_encontrado = catalogo.pesquisar_item("12 metodos e 1 classe")

catalogo.imprimir_itens()
catalogo.imprimir_itens()

catalogo.remover_item(cd1)
catalogo.remover_item(dvd1)
