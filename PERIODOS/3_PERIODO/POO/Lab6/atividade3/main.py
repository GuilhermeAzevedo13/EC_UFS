from CD import CD
from DVD import DVD
from catalogo import Catalogo
from reproducao import Reproducao

cd1 = CD("Star Trek", 90, "Capitao Kirk", 13, True, "Todos aos seus postos!")
cd2 = CD("Star Wars", 200, "Comandante Scott", 20, True, "Engenharia")
cd3 = CD("Batman", 70, "Bruce Wayne", 89, True, "Im Vegance")

dvd1 = DVD("Ultimato", 50, "Earth", True, "Im Iron Man")
dvd2 = DVD("300", 100, "Disney", True, "Perfeito")
dvd3 = DVD("Oloko meu", 400, "HBO", True, "Belo")

meuCatalogo = Catalogo()
meuCatalogo.InserirReproducao(cd1)
meuCatalogo.InserirReproducao(dvd1)
meuCatalogo.InserirReproducao(cd2)
meuCatalogo.InserirReproducao(dvd2)
meuCatalogo.InserirReproducao(cd3)
meuCatalogo.InserirReproducao(dvd3)

meuCatalogo.ImprimirReproducao()