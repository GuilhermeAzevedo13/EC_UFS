from Veiculo import Veiculo
from carro import Carro
from moto import Moto
from bike import Bike

carro1 = Carro("ABC-1234", "Ford", "4", "SUV", "4")

moto1 = Moto("EFG-5522", "Yamaha", "2", "Dia-a-Dia", "100")

bike1 = Bike("FJK-8899", "Caloi", "2", "Sport", "6")

print("CARRO")
carro1.imprime()
print("\n")
print("MOTO")
moto1.imprime()
print("\n")
print("BIKE")
bike1.imprime()


