-- fst : pegar o primeiro elemento do par de uma tupla
-- snt : pegar o segundo elemmento do par de uma tupla
-- zip : organizar em pares de tuplas duas listas dadas em uma nova lista

verIdade :: (String, Int) -> Int
verIdade (a,b) = b

divInt :: Int -> Int -> (Int, Int)
divInt a b = (q,r)
        where
            q = div a b
            r = mod a b

divisores :: Int -> [Int]
divisores n = [x | x <- [1..n], mod n x == 0]

eprimo :: Int -> Bool
eprimo n = divisores n == [1,n]

primos :: Int -> [Int]
primos n = [x | x <- [2..n], eprimo x]

-- Exercicios de Tupla
-- Recebe dois Inteiros e retorna o maximo dele e quantas vezes se repitiu 

maxQuant :: Int -> Int -> (Int, Int)
maxQuant x y
                | x == y = (x, 2)
                | otherwise = (max x y, 1)

maxQuantTres :: Int -> Int -> Int -> (Int,Int)
maxQuantTres a b c 
 | a == b && a == c = (a, 3)
 | a == b && a > c = (a, 2)
 | b == c && b > a = (b, 2)
 | c == a && c > b = (c, 2)
 | otherwise = (max (max a b) c, 1)

-- Recebe uma Tupla com três inteiros e retorna em ordem 

elemMid :: Int -> Int -> Int -> Int 
elemMid a b c 
              
-- b ou c < a < c ou b  -> a 
 | (b <= a && a <= c) || (c <= a && a <= b) = a   
              
-- a ou c < b < c ou a  -> b
 | (a <= b && b <= c) || (c <= b && b <= a) = b
              
-- a ou b < c < b ou a  -> c
 | otherwise = c


ordTres :: (Int, Int, Int) -> (Int, Int, Int) 
ordTres (a, b, c) = (menor, meio, maior)
                  where 
                    menor = min (min a b) c
                    meio = elemMid a b c
                    maior = max (max a b) c