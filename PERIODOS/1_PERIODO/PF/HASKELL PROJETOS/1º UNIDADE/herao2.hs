{-
    s a b c = sqrt (p*(p-a)*(p-b)*(p-c))
        where
            p = (a+b+c)/2
-}
triangulo :: Float-> Float-> Float -> Float
triangulo a b c
                | a < b + c && 
                  b < a + c && 
                  c < a + b = condicao
                | otherwise = 0
                where
                    condicao = sqrt (p*(p-a)*(p-b)*(p-c))
                    p = (a+b+c) / 2        