triangulo :: Int -> Int -> Int -> String
triangulo a b c
 | a < b + c && b < a + c && c < a + b &&
   a == b && b == c = "Existe. Equilatero"
 | a < b + c && b < a + c && c < a + b &&
   a == b && a /= c = "Existe. Isosceles"
 | a <= b + c && b < a + c && c < a + b &&
   a /= b && b /= c && a /= c = "Existe. Escaleno"    
 | otherwise = "Nao Existe"