import random
print("--------------")
class RandomTester:
    def printOneRandom(self):
        num = random.random()
        print("Numero aleatorio qualquer:", num)
        print("--------------")



    def printMultiRandom(self, num_prints):
        for i in range(num_prints):
            num = random.random()
            print("--------------")
            print(f"Numero aleatorio {i+1}: {num}")

    def throwDice(self):
        return random.randint(1, 6)

    def generateRandom(self, min_val, max_val):
        return random.randint(min_val, max_val)


randTest = RandomTester()
randTest.printOneRandom()

num_prints = int(input("quantos nums aleatorios voce deseja imprimir: "))
randTest.printMultiRandom(num_prints)

thrResult = randTest.throwDice()
print("--------------")
print("Numero do dado: ", thrResult)
print("--------------")

min_value = int(input("Digite o valor min do intervalo: "))
print("--------------")
max_value = int(input("Digite o valor max do intervalo: "))
random_number = randTest.generateRandom(min_value, max_value)
print("--------------")
print(f"num aleatorio entre {min_value} e {max_value}: {random_number}")
print("--------------")
