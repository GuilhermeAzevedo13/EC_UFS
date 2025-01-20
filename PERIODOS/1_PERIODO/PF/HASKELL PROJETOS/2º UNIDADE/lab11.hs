-- Atividade 1
compLista :: [t] -> Int
compLista [] = 0
compLista (x:xs) = 1 + compLista xs

-- Atividade 2
somaLista :: Num a => [a] -> a
somaLista [] = 0
somaLista (x:xs) = x + somaLista xs

-- Atividade 3
dobroLista :: Num a => [a] -> [a]
dobroLista [] = []
dobroLista (x:xs) = 2*x : dobroLista xs

-- Atividade 4
somaPares :: Num a => [(a, a)] -> [a]
somaPares pairList = [m+n | (m,n) <- pairList]

-- Atividade 5
zipar :: [a] -> [b] -> [(a,b)]
zipar [] a = []
zipar a [] = []
zipar (x:xs) (y:ys) = (x,y) : zipar xs ys

-- Atividade 6
ziparX :: [a] -> [b] -> [(a,b)]
ziparX (x:xs) (y:ys) = (x,y) : zipar xs ys
ziparX _ _ = []