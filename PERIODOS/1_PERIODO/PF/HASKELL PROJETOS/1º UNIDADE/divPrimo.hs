
divisores :: Int -> [Int]
divisores n = [x | x <- [1..n], n `mod` x == 0]

primo :: Int -> Bool
primo n = divisores n == [1,n]

primos :: Int -> [Int]
primos n = [x | x <- [2..n], primo x]

primos2 :: Int -> Bool
primos2 a = sum(map (verifica a) [1..a] ) == 2
   
   where 
    verifica :: Int -> Int -> Int
    verifica b c
     | b `mod`c == 0 = 1
     | otherwise = 0
