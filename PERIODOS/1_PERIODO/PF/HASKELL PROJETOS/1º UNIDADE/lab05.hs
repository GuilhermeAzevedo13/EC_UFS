-- Atividade 1
{-# OPTIONS_GHC -Wno-incomplete-patterns #-}
impar :: Int -> Bool
impar n = if n `mod` 2 /= 0 then True else False

-- Atividade 2
max2 :: Int -> Int -> Int
max2 x y = if (x > y) then x else y

-- Atividade 3
max3 :: Int -> Int -> Int -> Int
max3 x y z
  | (x > y) = x
  | (z > y) = z
  | otherwise = 0

-- Atividade 4
min3 :: Float -> Float -> Float -> Float
min3 x y z
 | x < y && x < z = x
 | y < x && y < z = y
 | z < x && z < y = z
 {-
   Colocar os argumentos entre parenteses ao rodar a função no terminal
 -}

-- Atividade 5
analisaIMC :: Float -> Float -> String
analisaIMC peso altura
 | imc <= 18.5 = "Pessoa Magra"
 | imc <= 25 = "Pessoa Normal"
 | imc <= 30 = "Pessoa Gorda"
 | otherwise = "Pessoa muito Gorda"
 where
    imc = peso/altura^2                 