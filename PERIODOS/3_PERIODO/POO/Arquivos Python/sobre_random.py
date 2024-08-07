# random(): Retorna um número de ponto flutuante aleatório no intervalo [0.0, 1.0).

import random

num = random.random()
print(num)  # Saída: um número entre 0.0 e 1.0 (exclusivo)

#2 randrange(start, stop, step): Retorna um número aleatório dentro de um intervalo 
# especificado, seguindo um passo opcional.
import random

num = random.randrange(1, 10, 2)  # Números ímpares de 1 a 9
print(num)  # Saída: um número ímpar entre 1 e 9

#3 randint(a, b): Retorna um número inteiro aleatório no intervalo [a, b].
import random

num = random.randint(1, 100)
print(num)  # Saída: um número inteiro entre 1 e 100 (inclusive)

#4 choice(seq): Retorna um elemento aleatório de uma sequência (lista, tupla, string, etc.).
import random

fruits = ["apple", "banana", "orange", "grape"]
random_fruit = random.choice(fruits)
print(random_fruit)  # Saída: uma das frutas aleatoriamente

#5 shuffle(lst): Mistura aleatoriamente os elementos de uma lista.
import random

cards = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
random.shuffle(cards)
print(cards)  # Saída: a lista original com os elementos embaralhados

#6 sample(population, k)
import random

population = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
sampled_items = random.sample(population, 3)
print(sampled_items)  # Saída: uma lista com 3 elementos aleatórios da população

#7 uniform(a, b): Retorna um número de ponto flutuante aleatório no intervalo [a, b).
import random

num = random.uniform(2.5, 5.5)
print(num)  # Saída: um número de ponto flutuante entre 2.5 (inclusive) e 5.5 (exclusivo)

