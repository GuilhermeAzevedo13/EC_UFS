import System.Win32 (COORD(x))
{-
  Criar uma função para descobrir o maior de 3 números
-}

menor2 :: Int -> Int -> Int
menor2 a b = if a < b then a else b 

menor3 :: Int -> Int -> Int -> Int
menor3 a b c = menor2 (menor2 a b) c

{-
  Criar uma função para descobrir a quantidade de vogais em uma String
-}

ehvogal :: Char -> Bool
ehvogal x = elem x vogais
 where
  vogais = ['a','e','i','o','u']

qVogais :: String -> Int
qVogais [] = 0
qVogais (x:xs)
 | ehvogal x = 1 + qVogais xs
 | otherwise = qVogais xs

{-
  Verificar a quantidade de consoantes em uma String
-}
qConsoantes :: String -> Int 
qConsoantes [] = 0
qConsoantes (x:xs)
 | not (ehvogal x) = 1 + qConsoantes xs
 | otherwise = qConsoantes xs

-- Recebe uma String e a Quant. de vezes que ela vai se repetir
repita :: String -> Int -> String
repita s 0 = undefined
repita s 1 = s
repita s n = s ++ repita s (n-1)

{-
  "A Conjectura de Collatz". Considere a seguinte operação sobre um número inteiro 
  positivo arbitrário: Se n é par -> n / 2. Se n é ímpar -> n * 3 + 1. Criar uma função 
  chamada collatz para avaliar repetidamente estas operações, até atingir 1. Devolver o número 
  de passos realizados. Ver o exemplo seguinte, usando 10 como entrada, com 6 passos:
    10 é par - 10 / 2 = 5
    5 é ímpar - 5 * 3 + 1 = 16
    16 é par - 16 / 2 = 8
    8 é par - 8 / 2 = 4
    4 é par - 4 / 2 = 2
    2 é par - 2 / 2 = 1 -> Atingiu 1, portanto, retorna 6 (passos).
-}

collatz :: Int -> Int
collatz 1 = 0
collatz n
 | mod n 2 == 0 = 1 + collatz (n `div` 2)
 | otherwise = 1 + collatz (n * 3 + 1)

-- take de forma recursiva
takeX :: Int -> [Int] -> [Int]
takeX n [] = []
takeX 0 xs = []
takeX n (x:xs) = x : takeX (n-1) xs

{-
  Programa para replicar os elementos de uma lista um determinado número de vezes.
  Ex.: replica [1,2,3] 4 vezes ---> [1,1,1,1,2,2,2,2,3,3,3,3]
-}

minimo :: [Int] -> Int
minimo [] = undefined
minimo [x] = x 
minimo (x:xs)
 | x <= minimo xs = x
 | otherwise = minimo xs

remove :: Int -> [Int] -> [Int]
remove a [] = []
remove a (x:xs)
 | a == x = xs
 | otherwise = x : remove a xs

ordena :: [Int] -> [Int]
ordena [] = []
ordena xs = [x] ++ ordena (remove x xs)
 where
  x = minimo xs

replicar :: Int -> [Int] -> [Int]
replicar 0 [] = undefined
replicar 1 lista = lista
replicar n lista = ordena (lista ++ replicar (n-1) lista)

