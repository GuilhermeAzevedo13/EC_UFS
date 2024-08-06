-- Prova 1
-- Nome do Aluno: Guilherme Menezes de Azevedo

-- Questao 1
bissexto :: Int -> Bool
bissexto ano
 | ano `mod` 400 == 0 = True
 | ano `mod` 4 == 0 && ano `mod` 100 /= 0 = True
 | otherwise = False

-- Questão 2
somaAnt :: Int -> Int
somaAnt x
 | x == 0 = 0
 | x > 0 = x + somaAnt (x-1)
 | x < 0 = undefined   


-- Questão 3
insere :: Int -> [Int] -> [Int]
insere n [] = [n]
insere n lista = n : lista

-- Questão 4
reverter :: String -> String
reverter [] = []
reverter (x:xs) = reverter xs ++ [x]

-- Questão 5

ultimo :: [Int] -> Int
ultimo [] = undefined
ultimo [x] = x
ultimo (x:xs) = ultimo xs
