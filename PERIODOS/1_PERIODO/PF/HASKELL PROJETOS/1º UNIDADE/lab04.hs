-- Atividade 1
salarioFinal :: Double -> Double
salarioFinal a = a + (0.1*a) - (0.07*a)
{- a = salário Base -}

-- Atividade 2
volEsf :: Double -> Double
volEsf r = (4/3)*pi*(r^3)

-- Atividade 3
forca :: Double -> Double -> Double -> Double
forca m1 m2 d = (g*m1*m2)/d^2
    where
        g = 6.67e-11
{-
    g = 6.67e-11 N.m^2/kg
    m1 = 6e24
    m2 = 1e23
    d = 4e8
-}