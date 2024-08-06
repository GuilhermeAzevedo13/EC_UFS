-- Atividade 1
areaVolEsf :: Float -> (Float, Float)
areaVolEsf raio = (area , volume)
                where
                    area = 4 * pi * raio^2
                    volume = (4/3) * pi * raio^3


-- Atividade 2
dist :: (Float, Float) -> (Float, Float) -> Float
dist (x1, y1) (x2, y2) = sqrt ((x1 - x2)^2 + (y1 - y2)^2)

-- Atividade 3
dobraListaC :: Int -> [Int]
dobraListaC n = [n*2 | n <- [1..n]]

-- Atividade 4
somaPares :: [(Int,Int)] -> [Int]
somaPares pairlist = [m+n | (m,n) <- pairlist] -- Colocar ao chamar a função somaPares [(5,6),(7,8)]

-- Atividade 5
impares :: Int -> [Int]
impares x = [x | x <- [1..x], mod x 2 /= 0]