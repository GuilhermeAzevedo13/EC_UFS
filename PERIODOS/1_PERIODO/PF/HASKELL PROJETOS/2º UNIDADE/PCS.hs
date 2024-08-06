data Calculadora = Somar Double Double | Subtrair Double Double | Dividir Double Double | Multiplicar Double Double | Modulo Double  
    | Raiz Double Double | Exponencial Double Double | Logaritmo Double Double | Seno Double | Cosseno Double | Tangente Double
    | Fatorial Double | Fibonacci Double | Distanciar2 [Double] [Double] | Distanciar3 [Double] [Double] | Produtovetorial [Double] [Double]
    | Produtomisto [Double] [Double] [Double]

calculadora :: Calculadora -> [Double]

calculadora ( Somar x y ) = [x + y]
calculadora ( Subtrair x y ) = [x - y]
calculadora ( Dividir x y ) = [x / y]
calculadora ( Multiplicar x y ) = [x * y]
calculadora ( Modulo x ) = [if x > 0 || x == 0 then x else (-1)*x]
calculadora ( Raiz x y ) = [x**(1/y)]
calculadora ( Exponencial x y ) = [x**y]
calculadora ( Logaritmo x y ) = [logBase x y]
calculadora ( Seno x ) = [seno x]
calculadora ( Cosseno x ) = [cosseno x]
calculadora ( Tangente x ) = [tangente x]
calculadora ( Fatorial x ) = [fatorial x]
calculadora ( Fibonacci x ) = fibonacci2 x
calculadora ( Distanciar2 [x,y] [a,b]) = dr2 [x,y] [a,b]
calculadora ( Distanciar3 [x,y,z] [a,b,c]) = dr3 [x,y,z] [a,b,c]
calculadora ( Produtovetorial [x,y,z] [a,b,c]) = pv [x,y,x] [a,b,c]
calculadora ( Produtomisto [x,y,z] [a,b,c] [i,j,k]) = [pm [x,y,x] [a,b,c] [i,j,k]]

ciclo :: Double -> Double
ciclo x  
    |x > 360 = ciclo (x - 360)
    |x < -360 = ciclo (x + 360)
    |otherwise = x

radiano :: Double -> Double
radiano x = 3.14*x/180

seno :: Double -> Double
seno x 
    |(k == 0 || k == 3.14 || k == 2*3.14 || k == -3.14 || k == -2*3.14) = 0
    |(k == 3.14/2 || k == -3*3.14/2) = 1
    |(k == 3*3.14/2 || k == -3.14/2) = (-1)
    |otherwise = sin k
    where
        k = radiano(ciclo x) 


cosseno :: Double -> Double
cosseno x 
    |(k == 0 || k == 2*3.14 || k == -2*3.14) = 1
    |(k == 3.14 || k == -3.14) = (-1)
    |(k == 3.14/2 || k == 3*3.14/2 || k == -3*3.14/2 || k == -3.14/2) = 0
    |otherwise = cos k
    where
        k = radiano(ciclo x)

tangente :: Double -> Double
tangente x 
    |(k == 0 || k == 2*3.14 || k == -2*3.14 || k == 3.14 || k == -3.14) = 0
    |(k == 3.14/4 || k == -3.14*21/12 || k == 3.925 || k == -3*3.14/4) = 1
    |(k == 21*3.14/12 || k == -3.14/4 || k == 3.14*3/4 || k == -3.925) = (-1)
    |otherwise = tan k
    where
        k = radiano(ciclo x)

fatorial :: Double -> Double
fatorial 0 = 1
fatorial 1 = 1
fatorial x = x * fatorial (x-1)

fibonacci2 :: Double -> [Double]
fibonacci2 x = [fibo n | n <- [0..x]]

fibo :: Double -> Double
fibo 0 = 0
fibo 1 = 1
fibo n = fibo (n-1) + fibo (n-2)

dr2 :: [Double] -> [Double] -> [Double]
dr2 [x,y] [a,b] = [((x-a)^2 + (y-b)^2)**(1/2)]

dr3 :: [Double] -> [Double] -> [Double]
dr3 [x,y,z] [a,b,c] = [((x-a)^2 + (y-b)^2 + (z-c)^2)**(1/2)]

pv :: [Double] -> [Double] -> [Double]
pv [x, y, z] [a, b, c] = [(y*c - z*b), (z*a - x*c), (x*b - y*a)]

pm :: [Double] -> [Double] -> [Double] -> Double
pm [x, y, z] [a, b, c] [i, j, k] = x*b*k + y*c*i + z*a*j - z*b*i - y*a*k - x*c*j