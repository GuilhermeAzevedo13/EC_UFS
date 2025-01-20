-- Atividade 1
data Figura = Circulo Double | Retangulo Double Double deriving (Show)
perimetroCirculo :: Figura -> Double
perimetroCirculo (Circulo r) = 2 * pi * r
perimetroRetangulo (Retangulo b h) = (2 * b) + (2 * h)

-- Atividade 2
data FFigura = Triangulo Double Double Double | Ret Double Double | Circ Double deriving (Show)
areaTri :: FFigura -> Double
areaTri (Triangulo x y z) = sqrt (p*(p-x)*(p-y)*(p-z))
                           where
                            p = (x + y + z)/2 
areaRet :: FFigura -> Double
areaRet (Ret base altura) = base * altura
areaCirc :: FFigura -> Double
areaCirc (Circ raio) = pi * (raio^2)

-- Atividade 3 
perimetroTri :: FFigura -> Double
perimetroTri (Triangulo x y z) = x + y + z
perimetroRet :: FFigura -> Double
perimetroRet (Ret base altura) = (2*base) + (2*altura)
perimetroCirc :: FFigura -> Double
perimetroCirc (Circ r) = 2*pi*r

-- Atividade 4
verificar1 :: FFigura -> Bool
verificar1 (Triangulo _ _ _) = False
verificar2 :: FFigura -> Bool
verificar2 (Ret _ _) = False
verificar3 :: FFigura -> Bool
verificar3 (Circ _) = True

-- Atividade 5
regularCirc :: FFigura -> Bool
regularCirc (Circ _) = True

regularTriangulo :: FFigura -> Bool
regularTriangulo (Triangulo x y z) = if x == y || x == z then True else False

regularRet :: FFigura -> Bool
regularRet (Ret x y) = if x == y then True else False