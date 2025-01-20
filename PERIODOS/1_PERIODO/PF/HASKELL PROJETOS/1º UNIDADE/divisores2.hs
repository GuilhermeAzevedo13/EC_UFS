primo :: Int -> Bool 
primo a
 | a == 0 = undefined
 | quant_div a [1..a] == 2 = True  
 | otherwise = False


quant_div :: Int -> [Int] -> Int
quant_div _ [] = 0
quant_div a (x:xs) = divisivel a x + quant_div a xs

divisivel :: Int -> Int -> Int
divisivel a b
 | a `mod` b == 0 = 1
 | otherwise = 0