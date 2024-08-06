-- Guilherme Menezes de Azeved0

-- Questão 1
calculo :: Float -> Float -> Float -> (Float, Float)
calculo a b c
    |delta > 0.0 = ((-b + sqrt delta)/(2*a), (-b - sqrt delta)/(2*a))
    |delta == 0.0 = (-b/(2*a), -b/(2*a))
    |delta < 0.0 = undefined
    where
        delta = b^2 -4*a*c

-- Questão 2
retornar :: Num a => [a] -> a
retornar (x:y:z:[]) = x + y
retornar (x:_:_:y:_) = x
retornar _ = 0

-- Questão 3
ultimoX :: a -> [a] -> [a]
ultimoX n [] = [n]
ultimoX n (x:xs) = x : ultima n xs


-- Questão 4
data Lista a = Nil | Cons [a] 

primeiro :: Lista a -> a
primeiro (Nil) = undefined
primeiro (Cons [x]) = x
primeiro (Cons (x:_:xs)) = primeiro (Cons (x:xs))

-- Questão 5
divisores :: Int -> [Int]
divisores n = [x | x <- [1..n], n `mod` x == 0]

primo :: Int -> Bool
primo n = divisores n == [1,n]

filtraPrimos :: [Int] -> [Int]
filtraPrimos lista = filter primo lista