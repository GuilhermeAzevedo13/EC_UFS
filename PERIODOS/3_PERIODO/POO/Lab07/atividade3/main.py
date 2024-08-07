from Veiculo import Veiculo
from carro import Carro
from moto import Moto
from bike import Bike
from frota import Frota

carro1 = Carro("ABC-1234", "Ford", "4", "SUV", "4")

moto1 = Moto("EFG-5522", "Yamaha", "2", "Dia-a-Dia", "100")

bike1 = Bike("FJK-8899", "Caloi", "2", "Sport", "6")

minhaFrota = Frota()

minhaFrota.InserirFrota(carro1)
minhaFrota.InserirFrota(moto1)
minhaFrota.InserirFrota(bike1)

minhaFrota.ImprimirReproducao()