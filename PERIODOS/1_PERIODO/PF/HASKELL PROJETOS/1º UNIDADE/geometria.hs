-- Area Triangulo
areaTri :: Float -> Float -> Float 
areaTri base altura = (base*altura) / 2
-- Area Quadrilatero
areaQuad :: Float -> Float -> Float
areaQuad lado1 lado2 = lado1*lado2
-- Area Losango
areaLos :: Float -> Float -> Float
areaLos d1 d2 = (d1*d2) / 2
-- Area / Comprimento do Circulo
compCirc :: Float -> Float
compCirc r = 2*pi*r

areaCirc :: Float -> Float
areaCirc r = pi*(r^2)
-- Lei do Cosseno
{- * x é o Cosseno do angulo
   * teta é o angulo dado no triangulo
-}

a = sqrt ((b^2) + (c^2) - 2*b*c*x)
    where
        x = cos 