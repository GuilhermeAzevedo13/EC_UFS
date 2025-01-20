
delta :: Double -> Double -> Double -> Double
delta a b c = (b^2)-(4*a*c)




r1 :: Double -> Double -> Double -> Double
r1 a b c = (-b + sqrt (delta a b c))/2*a




r2 :: Double -> Double -> Double -> Double
r2 a b c = (-b - sqrt (delta a b c))/2*a



