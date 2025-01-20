-- Atividade 1: Fatoriais
fatorial :: Integer -> Integer
fatorial 0 = 1
fatorial n = n * fatorial (n-1)

fatoriais :: [Integer] -> [Integer]
fatoriais [] = []
fatoriais (x:xs) = fatorial x : fatoriais xs

-- Atividade 2: usando map
fatoriaisX :: [Integer] -> [Integer]
fatoriaisX lista = map fatorial lista

-- Atividade 3: Filtra Primos
divisores :: Integer -> [Integer]
divisores n = [x | x <- [1..n], n `mod` x == 0]

primo :: Integer -> Bool
primo n = divisores n == [1,n]

filtraPrimos :: [Integer] -> [Integer]
filtraPrimos lista = filter primo lista

-- Atividade 4
soma :: [Integer] -> Integer
soma lista = foldr (+) 0 lista