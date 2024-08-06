-- Atividade 1
metade :: [Float] -> [Float]
metade [] = []
metade (x:xs) =  (1/2) * x : metade xs

-- Atividade 2
produto :: [Int] -> Int
produto [] = 1
produto (h:t) = h * produto t

-- Atividade 3
pertence :: Int -> [Int] -> Bool
pertence n [] = False
pertence n (x:xs)
 | x == n = True
 | otherwise = pertence n xs

-- Atividade 4
ultimo :: [Int] -> [Int]
ultimo [z] = []
ultimo (z:zs) = if zs /= [] then z : ultimo zs else []