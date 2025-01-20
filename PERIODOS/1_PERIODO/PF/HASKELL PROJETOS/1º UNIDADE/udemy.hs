{-
Função que verifica se duas listas são iguais

O que é serem iguais?

 - Mesmo número de elementos
 - Possuírem os mesmos elementos
 - Os elementos estarem na mesma posição 

[1,2,3] e [1,2,3] = True (São Iguais!!!)
[3,2,1] e [1,2,3] = False
[] e [1,2,3] = False
[1,2] e [] = False
-}
{-# OPTIONS_GHC -Wno-incomplete-patterns #-}
{-# OPTIONS_GHC -Wno-unrecognised-pragmas #-}
{-# HLINT ignore "Redundant if" #-}
{-
Função que verifica se duas listas são iguais

O que é serem iguais?

 - Mesmo número de elementos
 - Possuírem os mesmos elementos
 - Os elementos estarem na mesma posição 

[1,2,3] e [1,2,3] = True (São Iguais!!!)
[3,2,1] e [1,2,3] = False
[] e [1,2,3] = False
[1,2] e [] = False
-}
{-# OPTIONS_GHC -Wno-incomplete-patterns #-}
{-# OPTIONS_GHC -Wno-unrecognised-pragmas #-}
{-# HLINT ignore "Redundant if" #-}
import System.Win32 (COORD(x), _open_osfhandle)
import Data.Array (listArray)

comp_listas :: [Int] -> [Int] -> Bool
comp_listas [] [] = True
comp_listas [] _ = False
comp_listas _ [] = False
comp_listas (a:x) (b:y)
 | a == b = comp_listas x y
 | otherwise = False

{-
Função que recebe uma lista 
e retorna o inverso dessa lista 

Exemplo de entrada: [1,2,3]
Exemplo de saída: [3,2,1]
-> Para generalizar os tipos usamos :: [t] para receber
qualquer tipo!
-}
reverterAux :: [t] -> [t] -> [t]
reverterAux [] lista_inv = lista_inv
reverterAux (x:xs) lista_inv = reverterAux xs lista_inv ++ [x]

reverter :: [t] -> [t]
reverter [] = []
reverter lista = reverterAux lista []
-- Na linha 39 temos a função reverter recebendo uma lista
-- e retornando um reverterAux lista [], pois o Aux irá acumular
-- sempre o último elemento da lista no simbolso de lista vazia

reverterX :: [t] -> [t]
reverterX [] = []
reverterX (x:xs) = reverterX xs ++ [x]
-- O reverterX passa o corpo da função  que é o xs
-- e concatena com a cabeça da lista se tornando o ultimo termo

{-
  Verificar se o elemento pertence a lista apresentada
-}

pertence :: [Int] -> Int -> Bool
pertence [] _ = False
pertence (x:xs) n
 | x == n = True
 | otherwise = pertence xs n

{-
  Maior elemento de uma lista
-}
maior :: [Int] -> Int
maior [x] = x
maior (x:xs)
 | x > maior xs = x
 | otherwise = maior xs

{- 
  Recebe uma lista e Verifica se todos
  os elementos são pares!
-}
todosPares :: [Int] -> Bool
todosPares [] = True
todosPares (x:xs)
 | mod x 2 == 1 = False
 | otherwise = todosPares xs

{-
  Recebe um número e uma lista e excui o numero apresentado
  da lista
-}
semoNum :: Int -> [Int] -> [Int]
semoNum n [] = []
semoNum n (x:xs)
 | n == x = semoNum n xs
 | otherwise = x:semoNum n xs

{-
  Elabore uma função chamada “unicorr” que recebe uma lista de 
  números inteiros e um número  inteiro e verifica se existe 
  uma única ocorrência do número na lista. (Ex: 2 [2,1,5,3,2] = False)
-}
unicorr :: Int -> [Int] -> Bool
unicorr n [] = False
unicorr n (x:xs)
 | x == n = if unicorr n xs then False else True
 | otherwise = unicorr n xs

{-
  Elabore a função “maiormenor” que recebe uma lista 
  de números inteiros e devolve como  resposta o maior 
  e o menor deles. (Ex: [24,12,3] = [24,3] 
-}
maiorX :: [Int] -> Int
maiorX [x] = x
maiorX (x:xs)
 | x > maiorX xs = x
 | otherwise = maiorX xs

menorY :: [Int] -> Int
menorY [y] = y
menorY (y:ys)
 | y < menorY ys = y
 | otherwise = menorY ys

maiormenor :: [Int] -> [Int]
maiormenor [z] = [z]
maiormenor lista = maiorX lista : [menorY lista]

{-
  Defina a função “repetido” que recebe uma lista de números 
  inteiros e responde se na lista  existe algum elemento repetido.
-}
repetido :: [Int] -> Bool
repetido [] = False
repetido (x:xs)
 | unicorr x xs = True
 | otherwise = repetido xs

{-
  Defina a função “parimpar” que recebe uma lista 
  de números inteiros e devolve duas novas  listas, onde 
  a primeira contém apenas números pares e a segunda os 
  números impares. 
-} 
par :: [Int] -> [Int]
par [] = []
par (x:xs)
 | mod x 2 == 0 = x : par xs
 | otherwise = par xs 

impar :: [Int] -> [Int]
impar  [] = []
impar (y:ys)
 | mod y 2 == 1 = y : impar ys
 | otherwise = impar ys

parimpar :: [Int] -> ([Int], [Int])
parimpar [] = ([],[])
parimpar lista = (par lista , impar lista)

{-
  Elabore uma função chamada “palindroma” que recebe 
  uma cadeia de caracteres (palavra) e  verifica se 
  ela é palíndroma ou não. (Ex: “ana” = True) 
-}
reverso :: [t] -> [t]
reverso [] = []
reverso (x:xs) = reverso xs ++ [x]

palindroma :: String -> Bool
palindroma [] = False
palindroma lista = if lista == reverso lista then True else False

{-
  Elabore uma função chamada “concatena” que recebe duas listas 
  quaisquer e retorna uma lista com os elemtnos da primeira 
  no início e os elementos da segunda no final.
-}
concatena :: [Int] -> [Int] -> [Int]
concatena x y = x ++ y

{-
  Elabore uma função chamada “uniao” que recebe duas listas 
  de números inteiros, as listas não devem conter elementos 
  repetidos, e retorna uma lista com todos os elementos das 
  duas listas originais (sem repetição).
-}
uniaoAux :: Int -> [Int] -> [Int]
uniaoAux x [] = []
uniaoAux x (y:ys)
 | x == y = uniaoAux x ys
 | otherwise = y : uniaoAux x ys

uniao :: [Int] -> [Int] -> [Int]
uniao [x] lista = x : uniaoAux x lista
uniao (y:ys) lista = y : uniao ys (uniaoAux y lista)

{-
  Suponha que o computador não possua a operação de multiplicação. 
  Construa a função “multiplica” para calcular o valor da multiplicação 
  de dois números inteiros, m por n.
-}

multiplica :: Int -> Int -> Int
multiplica m n
 | m == 0 || n == 0 = 0
 | n > 0 = m + multiplica m (n-1)
 | n < 0 = (-m) + multiplica m (n+1)

{-
  Elabore a função “fatorial” que recebe um número inteiro
   n e exibe o fatorial do número informado.
-} 
fatorial :: Integer -> Integer
fatorial n
 | n == 0 = 1
 | n > 0 = n * fatorial (n - 1)

{-
  Elabore uma função chamada “consumo” para calcular o valor 
  da conta de luz a ser paga para um equipamento, usando a 
  seguinte fórmula:
   - consumo (Kwh) = ((potência do aparelho em Watts)x(horas de funcionamento por mês))/1000
   - valor da conta em (R$) = consumo (Kwh) x valor da tarifa (ex: 0,722173)
-} 
consumo :: Float -> Float -> Float -> Float
consumo pot horas tarifa = ((pot * horas) /1000) * tarifa

{-
  Elabore a função “ordena” que recebe 3 números inteiros e retorna 
  os mesmos em ordem crescente.
-}

minimo :: [Int] -> Int
minimo [] = undefined
minimo [x] = x 
minimo (x:xs)
 | x <= minimo xs = x
 | otherwise = minimo xs

remove :: Int -> [Int] -> [Int]
remove a [] = []
remove a (x:xs)
 | a == x = xs
 | otherwise = x : remove a xs

ordena :: [Int] -> [Int]
ordena [] = []
ordena xs = [x] ++ ordena (remove x xs)
 where
  x = minimo xs


-- recursividade da função drop
dropX :: Int -> [t] -> [t]
dropX 0 xs = xs
dropX n [] = []
dropX n (x:xs)
 | n > 0 = dropX (n-1) xs

-- recursividade da função Zip
zipX :: [a] -> [b] -> [(a,b)]
zipX [] t = []
zipX t [] = []
zipX (x:xs) (y:ys) = (x,y) : zipX xs ys 
  
                                 



