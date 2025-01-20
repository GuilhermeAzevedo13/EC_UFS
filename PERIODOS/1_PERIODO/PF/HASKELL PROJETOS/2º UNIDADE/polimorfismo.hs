areaCirc :: Floating a => a -> a
areaCirc raio = pi * raio^2

numDegraus :: (Integral b, RealFrac a) => a -> a -> b
numDegraus alturaDegrau alturaDesejada = ceiling (alturaDesejada / alturaDegrau)

dobro :: Num a => a -> a
dobro x = 2*x

aprovado :: (Num a, Ord a) => a -> Bool
aprovado nota = nota >= 6

myLog :: Floating a => a -> a -> a
myLog x b = log x / log b

