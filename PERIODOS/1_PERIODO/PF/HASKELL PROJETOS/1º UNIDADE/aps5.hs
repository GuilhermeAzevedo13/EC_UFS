-- Fatorial de um número
{-# OPTIONS_GHC -Wno-incomplete-patterns #-}
{-# OPTIONS_GHC -Wno-unrecognised-pragmas #-}
{-# HLINT ignore "[]" #-}
{-# HLINT ignore "[Replace {rtype = Expr, pos = SrcSpan {startLine = 41, startCol = 8, endLine = 41, endCol = 15}, subts = [("x",SrcSpan {startLine = 41, startCol = 9, endLine = 41, endCol = 14})], orig = "x"}]" #-}
fatorial :: Integer -> Integer
fatorial n
 | n == 0 = 1
 | n > 0 = n * fatorial (n - 1)

-- Potencia de Dois
pot2 :: Integer -> Integer
pot2 n
 | n == 0 = 1
 | n > 0 = 2 * pot2 (n-1)

-- Sequencia de Fibonacci
fib :: Integer -> Integer
fib n
 | n == 0 = 0
 | n == 1 = 1
 | n > 0 = fib (n-2) + fib (n-1)

-- Par ou Impar? 
par :: Int -> Bool
par n
 | n == 0 = True
 | n > 0 = impar (n-1)
 | otherwise = par (-n)
impar :: Int -> Bool
impar n
 | n == 0 = False
 | n > 0 = par (n-1)
 | otherwise = impar (-n)


 