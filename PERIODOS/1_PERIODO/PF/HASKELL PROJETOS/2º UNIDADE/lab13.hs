-- Atividade 1
fatorial :: Int -> Int
fatorial 0 = 1
fatorial n = n * fatorial (n-1)

-- Atividade 2
fatoriais :: [Int] -> [Int]
fatoriais [] = []
fatoriais (x:xs) = fatorial x : fatoriais xs

-- Atividade 3
divisores :: Int -> [Int]
divisores n = [x | x <- [1..n], mod n x == 0]

-- Atividade 4
soma :: [Int] -> Int
soma xs = foldr (+) 0 xs

-- Atividade 5
produto :: [Int] -> Int
produto xs = foldr (*) 1 xs