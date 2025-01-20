-- Atividade 1
perfeitos :: [Int] -> [Int]
perfeitos lista = filter verificar lista

divisores :: Int -> [Int]
divisores n = [x | x <- [1..n], n `mod` x == 0]

verificar :: Int -> Bool
verificar n = if n == ((foldl (+) 0 (divisores n)) - n) then True else False

perfect :: Int -> Bool
perfect n = n == sum [i | i <- [1..n-1], n `mod` i == 0]

perfeitos2 :: [Int] -> [Int]
perfeitos2 lista = filter perfect lista

perfeitos3 :: [Int] -> [Int]
perfeitos3 (x:xs) = [x | x <- xs, perfect x]
-- Atividade 2
lula :: Num a => [a] -> a
lula (x:y:[]) = x*y
lula (_:x:_:_) = x
lula [] = 0
lula (x:[]) = 0

-- Atividade 3
tamanho :: [a] -> Int
tamanho [] = 0
tamanho (_:xs) = 1 + tamanho xs

-- Atividade 4
data Lista a = Nil | Cons a 

ultimo :: Lista [a] -> a
ultimo (Cons []) = undefined
ultimo (Cons [x]) = x
ultimo (Cons (_:xs)) = ultimo (Cons(xs))

-- Atividade 5
fatorial :: Integer -> Integer
fatorial 0 = 1
fatorial n = n * fatorial (n-1)

batman :: [Integer] -> [Integer] 
batman lista = map fatorial lista

