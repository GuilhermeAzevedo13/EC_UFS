-- Atividade 1
pertQuad :: (Int, Int) -> (Int, Int) -> (Int, Int) -> Int
pertQuad (x0, y0) (x1, y1) (x, y) -- x0, y0 = Ponto inferior esquerdo do retangulo / x1, y1 = Ponto superior esquerdo do retangulo
 | x >= x0 && x <= x1 && y <= y0 && y >= y1 = 1 
 | otherwise = 0


-- Atividade 2
casassuc :: [Int] -> Int
casassuc [] = 0
casassuc (x:_) = x + 1

-- Atividade 3
retorne3lista :: [Int] -> Int
retorne3lista [] = 0
retorne3lista (x:[]) = 0
retorne3lista (x:y:[]) = 0
retorne3lista (x:y:z:_) = z

-- Atividade 4
torre :: [Int] -> Int
torre [] = 0
torre (x:[]) = 0
torre (x:y:[]) = x + y