primoAux :: Int -> Int -> Bool 
primoAux x 1 = True
primoAux x y
 | x `mod` y == 0 = False
 | otherwise = primoAux x (y-1)

primo :: Int -> Bool
primo 1 = True
primo n = primoAux n (n-1) 