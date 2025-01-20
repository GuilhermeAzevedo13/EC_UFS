
forca :: Double -> Double -> Double -> Double 
forca m1 m2 d = (grav*(m1 * m2))/(d^2)
    where
        grav = 6.67e-11

{-  
    constGrav = 6.67e-11 N.m²/Kg²
    m1 = 6e24 kg
    m2 = 1e23 kg
    d = 4e8 m  
-}