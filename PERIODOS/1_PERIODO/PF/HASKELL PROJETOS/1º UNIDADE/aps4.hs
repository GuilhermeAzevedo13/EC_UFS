{-# OPTIONS_GHC -Wno-incomplete-patterns #-}
valorAbsoluto :: Int -> Int
valorAbsoluto n = if n >= 0 then n else -n

vabs :: Integer -> Integer
vabs n
    | n >= 0 = n
    | n < 0 = -n

sinal :: Float -> Float
sinal n
    | n < 0 = -1
    | n == 0 = 0
    | otherwise = 1   
