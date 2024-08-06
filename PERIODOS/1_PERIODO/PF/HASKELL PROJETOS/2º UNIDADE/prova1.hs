-- Atividade 1
divisores :: Int -> [Int]
divisores n = [x | x <- [1..n], n `mod` x == 0]

-- Atividade 2
ribamar :: Num a => [a] -> a
ribamar [] = 0
ribamar (x:[]) = 0
ribamar (x:y:[]) = x*y
ribamar (_:x:_) = 

-- Atividade 5
fatorial :: Integer -> Integer
fatorial 0 = 1
fatorial n = n * Fatorial (n-1)

batman :: [Int] -> [Int] deriving (Show)
batman lista = map fatorial lista

