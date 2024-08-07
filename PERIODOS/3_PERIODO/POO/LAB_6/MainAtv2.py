from atividade1 import *
from atividade2 import *

cd1 = CD("Programação Orientada ao Balanço", 60, "Admilson", 10, True, "Um Estouro")
dvd1 = DVD("12 metodos e 1 classe", 120, "Carlos Alberto", False, "Qual a relação entre os metodos e as classes?")


catalogo = Catalogo()

catalogo.inserir_cd(cd1)
catalogo.inserir_dvd(dvd1)


print("")
cd_encontrado = catalogo.pesquisar_cd("Programação Orientada ao Balanço")
dvd_encontrado = catalogo.pesquisar_dvd("12 metodos e 1 classe")

catalogo.imprimir_cds()
catalogo.imprimir_dvds()

catalogo.remover_cd(cd1)
catalogo.remover_dvd(dvd1)

