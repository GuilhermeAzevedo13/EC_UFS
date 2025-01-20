-- Listas.
-- Definição de Listas: Conjunto de dados do mesmo tipo.
{-
    Exemplos de conjuntos.

    Conjunto dos Inteiros -> Lista de Inteiros -> [Int]
        Ex: [1,2,3,4,5,6,7,..,100,101,102,..]
            [..,-10,-9,-8,-7,-6,-5,-4,-3,-2,-1,0,1,2,3,4,..]
            [1..100]

    Conjunto dos Reais -> Lista de Float -> [Float]
        Ex: [1.5,2.5,3.5,4.5,5.5,6.5,7.5,8.5,9.5,..,50.2,..]
            [..,-5.5,-5.4,-5.3,-5.2,-5.0,-4.1,..]
            [1.5..10.5]

    Conjunto dos Caracteres -> Lista de Char -> [Char] ou String
        Ex: ['a','b','c','d','e','1','0','4','#','.']
            "arroz feijao batata"
            "Hello World"

    Conjunto das Palavras -> Lista de String -> [String]
        Ex: ["Hello","World"]
            ["Palavras","Aleatorias","qualquer coisa","KKKKKKKKKK"]
            ["ahsduiahsd","askdhaudhaslid","asjhdaiudhausdh","aljsdhaljshdajshdajs"]

    Conjunto de Valores Lógicos -> Lista de Booleano -> [Bool]
        Ex: [True,False]
            [True,True,True,True,True,False]
            [False,False,False,False,False,True]
-}

-- Definição de Lógica com Listas:

{-
    Por definição, a estrutura de uma lista se baseia em:
        * Primeiro elemento se chama Cabeça ou Head.
        * O resto após a cabeça se chama de Cauda ou Tail.
        * Ao se representar Listas em uma função é possível utilizar apenas uma variavél.
        * Por convenção utiliza-se a variavél xs para sua representação, mas não se limita a isso.
        Ex:
-}

testeLista :: [Int] -> [Int]
testeLista xs = xs

testeLista2 :: [Int] -> [Int]
testeLista2 qualquercoisa = qualquercoisa

-- Ambas funções retornam a lista de entrada.

{-
    (Continuação)
        * Por definição é possível escrever a variável de entrada como (x:xs) onde x irá representar a cabeça e xs a cauda.
        * É possível definir n elementos desta mesma forma como (x:y:xs) ou até mais. Nesse caso o y será chamado de pescoço.
-}

testeCabeca :: [Int] -> Int
testeCabeca (x:xs) = x

testeCauda :: [Int] -> [Int]
testeCauda (x:xs) = xs

testePescoco :: [Int] -> Int
testePescoco (x:y:xs) = y

testePescoco2 :: [Int] -> Int
testePescoco2 (x:y:z:w:q:e:xs) = w

-- A primeira função irá retornar apenas a cabeça enquanto a segunda retornará apenas a cauda.
-- A terceira função irá retornar o segundo elemento.
-- A quarta função irá retornar quarto elemento da lista.


-- Funções Básicas de Listas.
{-
    A seguir estão listadas algumas funções para se trabalhar com listas.
        
        01. head: Rertona a cabeça da lista.
        02. last: Retorna o último elemento da lista.
        03. tail: Retorna a lista sem o primeiro elemento.
        04. init: Retorna a lista sem o último elemento.
        05. reverse: Retorna a lista de trás pra frente.
        06. length: Retorna a quantidade de elementos de uma lista.
        07. concat: Junta todas as listas de uma lista de listas.
        08. sum: Soma todos os elementos de uma lista de Inteiros [Int] ou de Reais [Float].
        09. product: Aplica a multiplicação entre todos os elementos de uma lista de Inteiros [Int] ou de Reais [Float].
        10. take: Pega n elementos de uma lista.
        11. drop: Pula n elementos e retorna o resto. (Retorna o que sobrar do take).
        12. maximum: Retorna o elemento da lista com maior valor.
        13. minimum: Retorna o elemento da lista com menor valor.
        14. replicate: Replica um elemento n vezes.
-}



funcao01 :: [Int] -> Int
funcao01 xs = head xs

funcao02 :: [Int] -> Int
funcao02 xs = last xs

funcao03 :: [Int] -> [Int]
funcao03 xs = tail xs

funcao04 :: [Int] -> [Int]
funcao04 xs = init xs

funcao05 :: [Int] -> [Int]
funcao05 xs = reverse xs

funcao06_1 :: [Int] -> Int
funcao06_1 xs = length xs

funcao06_2 :: [Bool] -> Int
funcao06_2 xs = length xs 

funcao06_3 :: String -> Int
funcao06_3 xs = length xs

funcao07 :: [[Int]] -> [Int]
funcao07 xs = concat xs

funcao08_1 :: [Int] -> Int
funcao08_1 xs = sum xs

funcao08_2 :: [Float] -> Float
funcao08_2 xs = sum xs

funcao09_1 :: [Int] -> Int
funcao09_1 xs = product xs

funcao09_2 :: [Float] -> Float
funcao09_2 xs = product xs

funcao10 :: Int -> [Int] -> [Int]
funcao10 x xs = take x xs

funcao11 :: Int -> [Int] -> [Int]
funcao11 x xs = drop x xs

funcao12_1 :: [Int] -> Int
funcao12_1 xs = maximum xs

funcao12_2 :: [Float] -> Float
funcao12_2 xs = maximum xs

funcao12_3 :: [String] -> String
funcao12_3 xs = maximum xs

funcao12_4 :: [Bool] -> Bool
funcao12_4 xs = maximum xs

funcao12_5 :: String -> Char
funcao12_5 xs = maximum xs

funcao13_1 :: [Int] -> Int
funcao13_1 xs = minimum xs

funcao13_2 :: [Float] -> Float
funcao13_2 xs = minimum xs

funcao13_3 :: [String] -> String
funcao13_3 xs = minimum xs

funcao13_4 :: [Bool] -> Bool
funcao13_4 xs = minimum xs

funcao13_5 :: String -> Char
funcao13_5 xs = minimum xs

funcao14_1 :: Int -> Int -> [Int]
funcao14_1 n x = replicate n x

funcao14_2 :: Int -> Float -> [Float]
funcao14_2 n x = replicate n x

funcao14_3 :: Int -> [Int] -> [[Int]]
funcao14_3 n x = replicate n x


-- Introdução a Recursão.

reverter :: [Int] -> [Int]
reverter [] = []
reverter (x:xs) = reverter xs ++ [x]

{-
    -- Passos lógicos da função.

reverter [1,2,3]
reverter (1:[2,3]) = reverter [2,3] ++ [1]

reverter [2,3] ++ [1]
reverter [3] ++ [2] ++ [1]
reverter [] ++ [3] ++ [2] ++ [1]
[] ++ [3] ++ [2] ++ [1]

-}

-- Essa auxiliar aux é pré-definida no haskell com o nome de elem
aux :: Int -> [Int] -> Bool
aux _ [] = False
aux x (y:ys)
 |x == y = True
 |otherwise = aux x ys

diferenca :: [Int] -> [Int] -> [Int]
diferenca xs [] = xs
diferenca [] _ = []
diferenca (x:xs) ys
 |aux x ys = diferenca xs ys
 |otherwise = x : diferenca xs ys


produtoAux :: Int -> [Int] -> [Int]
produtoAux _ [] = []
produtoAux x (y:ys) = x*y : produtoAux x ys

produto :: [Int] -> [Int]
produto xs = produtoAux (maximum xs) xs