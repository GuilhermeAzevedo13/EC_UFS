-- Atividade 1
concatena :: [Int] -> [Int] -> [Int]
concatena a b = a ++ b

-- Atividade 2
concatenada :: [Char] -> [Char] -> Char
concatenada a b
 | null a == True && null b == True = '0'
 | otherwise = (head (a ++ b))


-- Atividade 3
verificar :: [Int] -> Bool
verificar lista
 | length lista == 0 = null []
 | length lista > 0 = null lista

-- Atividade 4
produto :: [Int] -> Int
produto lista = (product lista)

-- Atividade 5
ultimo :: [Char] -> Char
ultimo lista = (head (reverse lista))

-- Atividade 6
penultimo :: [Int] -> Int
penultimo lista
 | lista == [] = -1
 | otherwise = (reverse lista) !! 1
