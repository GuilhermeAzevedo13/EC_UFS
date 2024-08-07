from CD import CD
from DVD import DVD
from catalogo import Catalogo

cd1 = CD("Star Trek", 90, "Capitao Kirk", 13, True, "Todos aos seus postos!")
cd2 = CD("Star Wars", 200, "Comandante Scott", 20, True, "Engenharia")
cd3 = CD("Batman", 70, "Bruce Wayne", 89, True, "Im Vegance")

dvd1 = DVD("Ultimato", 50, "Earth", True, "Im Iron Man")
dvd2 = DVD("300", 100, "Disney", True, "Perfeito")
dvd3 = DVD("Oloko meu", 400, "HBO", True, "Belo")

meuCatalogo = Catalogo()
meuCatalogo.InserirCD(cd1)
meuCatalogo.InserirCD(cd2)
meuCatalogo.InserirCD(cd3)
meuCatalogo.InserirDVD(dvd1)
meuCatalogo.InserirDVD(dvd2)
meuCatalogo.InserirDVD(dvd3)

meuCatalogo.ImprimirCD()
meuCatalogo.ImprimirDVD()