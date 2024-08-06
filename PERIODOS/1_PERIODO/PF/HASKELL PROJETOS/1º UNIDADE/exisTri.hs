triangulo :: Int -> Int -> Int -> String
triangulo a b c
                | a < b + c && b < a + c && c < a + b = "Esse triangulo existe!"
                | otherwise = "Esse triangulo nao existe"