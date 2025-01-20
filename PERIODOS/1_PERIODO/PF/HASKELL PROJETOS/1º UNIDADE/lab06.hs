-- Atividade 1
among :: Integer -> Integer
among x
 | x == 0 = 1
 | x > 0 = among ((x-1)) - 2

-- Atividade 2
mdc :: Integer -> Integer -> Integer
mdc x y
 | (mod x y) == 0 = y
 | otherwise = mdc y (mod x y)

-- Atividade 3
pot :: Int -> Int -> Int
pot x n
 | n == 0 = 1
 | n > 0 = x * pot x (n-1) 

-- Atividade 4
funcao :: Int -> Int -> Int
funcao x y
 | y == 0 = 0
 | otherwise = x + funcao x (y-1)