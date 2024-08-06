{- Defina uma função chamada ultimo que seleciona o último elemento 
   de uma lista não vazia, usando as
   funções do prelúdio.
-}

ultimo lista = head (reverse lista)

ultimoX lista = lista !! (length lista - 1)

ultimoY lista = head (drop (length lista - 1) lista)

{- 
   Defina uma função chamada primeiros que seleciona todos os elementos 
   de uma lista não vazia, exceto último, usando as funções do prelúdio.
-}

primeiros lista = reverse (tail (reverse lista))

{- 
   Usando funções da biblioteca, defina a função metade 
   que divide uma lista em duas metades. 
   Por exemplo:
   > metade [1, 2, 3, 4, 5, 6]
   ([1, 2, 3], [4, 5, 6])
   > metade [1, 2, 3, 4, 5]
   ([1, 2], [3, 4, 5])
-}

metade lista = (take k lista, drop k lista)
  where
    k = div (length lista) 2

{- 
    Maior: recebe uma lista de números e retorna o maior. 
-}

maior :: [Int] -> Int
maior [h] = h
maior(h:t)
 | h > maior t = h
 | otherwise = maior t

{- 
    nro-elementos: recebe uma lista qualquer e retorna 
    o número de elementos na lista.
-}

nelementos lista = (length lista)

contar :: [Int] -> Int
contar [] = 0
contar (h:t) = 1 + contar t

{- 
   conta-ocorrencias: recebe um elemento e uma lista qualquer 
   e retorna o número de ocorrências do elemento na lista.
-}

contador :: Int -> [Int] -> Int
contador n [] = 0
contador n (h:t)
 | n == h = 1 + contador n t
 | otherwise = contador n t

{- 
   Unica-ocorrencia: recebe um elemento e uma lista e verifica se existe uma
   única ocorrência do elemento na lista .
   ex.: 
       unica-ocorrencia 2 [1,2,3,2] = False
       unica-ocorrencia 2 [3,1] = False
       unica-ocorrencia 2 [2] = True 
-}

uContador :: Int -> [Int] -> Bool
uContador n [] = False
uContador n (h:t)
 | h == n = if (uContador n t) then False else True
 | otherwise = uContador n t

{- 
   Maiores-que: recebe um número e uma lista de números e retorna 
   uma lista com os números que são maiores do que o valor informado.
   ex.: 
       maiores-que 10 [4 6 30 3 15 3 10 7] ==> [30 15]
-}

maioresQue :: Int -> [Int] -> [Int]
maioresQue n [] = []
maioresQue n (h:t)
 | h > n = h : maioresQue n t
 | otherwise = maioresQue n t

{- 
    concatena: recebe duas listas quaisquer e retorna 
    uma terceira lista com os elementos da primeira no início e os 
    elementos da segunda no fim.
    ex.: 
        concatena [] [] ==> []
        concatena [1 2] [3 4] ==> [1 2 3 4]
-}

concatena :: [Int] -> [Int] -> [Int]
concatena a b = a ++ b


{- 
  duplica: recebe uma lista e retorna uma nova lista contendo 
  a duplicação dos elementos da lista original.
   ex: duplica [1, 2, 3] ==> [1,1,2,2,3,3]
-}

duplica :: [Int] -> [Int]
duplica [] = []
duplica (h:t) = h : h : duplica t


