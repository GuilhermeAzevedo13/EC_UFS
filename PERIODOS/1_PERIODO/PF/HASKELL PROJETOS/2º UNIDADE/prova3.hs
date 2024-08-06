-- Sinônimos de Tipos X Tipos Algébricos

type Nome = String
data Pessoa = Pessoa String Int deriving Show

fazNada :: Pessoa -> Pessoa
fazNada (Pessoa nome idade) = Pessoa nome idade

-- map (\x -> x * 2) [1..10]

-- foldr1: A lista deve ter pelo menos 1 elemento
-- foldr: Para qualquer lista

-- Filter: filtra o que eu desejo
-- [x │ x <- [1..10], x == 10]

busca :: (Eq a) => [a] -> a -> Int
busca [] _ = -1 
busca (x:xs) n
 | x == n = 0
 | otherwise = 1 + busca xs n

maior :: [Int] -> Int
maior [] = undefined
maior [x] = x
maior (x:xs)
 | (maior xs) > x = maior xs
 | otherwise = x

maior2 :: [Int] -> Int
maior2 [] = undefined
maior2 [x] = x
maior2 (x:y:xs)
 | x > y = maior (x:xs)
 | otherwise = maior (y:xs)

ordena :: (Int, Int, Int) -> (Int, Int, Int)
ordena (a, b, c) = (menor, meio, maior)
 where
    menor = min a $ min b c
    maior = max a $ max b c
    meio = a + b + c - menor - maior

impares :: [Int] -> Bool
impares xs = [] == [x | x <- xs, even x]

-- map :: (a -> b) -> [a] -> [b]

mapear :: (a -> b) -> [a] -> [b]
mapear _ [] = []
mapear n (x:xs) = n x : mapear n xs

mapear2 :: (a -> b) -> [a] -> [b]
mapear2 n (x:xs) = [n x | x <- xs]

-- filter :: (a -> Bool) -> [a] -> [a]
filtro :: (a -> Bool) -> [a] -> [a]
filtro _ [] = []
filtro n (x:xs)
 | n x = x : filtro n xs
 | otherwise = filtro n xs

filtro2 :: (a -> Bool) -> [a] -> [a]
filtro2 n (x:xs) = [x | x <- xs, n x]
