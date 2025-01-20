primo :: Integer -> Integer -> String
primo a b
 |a == b && (a==1 || a==(-1) || a==0) = "Nao e primo"
 |a == b && (a>0 && b>0) = positivo a b
 |a == b && (a<0 && b<0) = negativo a b
 |otherwise = "Os valores dos argumentos devem ser iguais."
positivo :: Integer -> Integer -> String
positivo a b
 |a `mod` (b-1) /= 0 = positivo a (b-1)
 |a `mod` (b-1) == 0 && (b-1>1) = "Nao e primo."
 |otherwise = "Esse numero e primo."
negativo :: Integer -> Integer -> String
negativo a b
 |a `mod` (b+1) /= 0 = negativo a (b+1)
 |a `mod` (b+1) == 0 && (b+1<(-1)) = "Nao e primo."
 |otherwise = "Esse numero e primo."