-- MMC e 
-- Algoritmo de Euclides
mdc :: Integer -> Integer -> Integer 
mdc a b
 | a < b = mdc b a
 | b == 0 = a
 | otherwise = mdc b (mod a b)
mmc :: Integer -> Integer -> Integer
mmc x y = (x * y) `div` (mdc x y)
mmc3n :: Integer -> Integer -> Integer -> Integer
mmc3n x y z = mmc x (mmc y z)
mdc3n :: Integer -> Integer -> Integer -> Integer
mdc3n x y z = mdc x (mdc y z)

-- Ano Bissexto
ano :: Integer -> String
ano n
 | mod n 4 == 0 = "Bissexto"
 | otherwise = "Nao Bissexto"

