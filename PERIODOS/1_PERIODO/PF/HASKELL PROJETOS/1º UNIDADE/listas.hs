-- Listas
-- Tipo de Lista
-- Operações com Listas
-- Strings
caracteres :: [Char]
caracteres = ['a', 'b', 'c']
numeros :: [Float]
numeros = [1,0,3,6,8]
palavras :: [String]
palavras = ["Mano Gui","Pedrinha","Mr.Prince","Modjonga","RenatoO"]
logica :: [Bool]
logica = [True, False, True, True]
vazio = []
-- Usar o operador null [] ; para saber se a lista está vazia ou nao
{-
Prelude > :{
Prelude| numeros :: [Float]
Prelude| numeros = [1,5,6]
Prelude| :}
Prelude> null numeros
False 

null checa se n (numeros de elementos da lista) = 0 (Que representa
nenhum elemento) ou seja:

n = 0 -- null []
n > 0 -- null [1,2,5,4]

-- Usar head para selecionar o primeiro elemento de uma lista
Prelude > head [1,2,3,4,5]
1
head [3]
3

-- tail: seleciona a cauda de uma lista, ou seja, a lista formada por todos
os elementos exceto o primeiro,

Prelude > tail [1,2,3,4,5]
[2,3,4,5]

Prelude > tail ['a','b','c','d']
['b','c','d'] ou bcd

Prelude > tail [5*4,5*6]
[30]

-- length: Calcula o tamanho da lista (Quant. de Elementos)

-- (!!) seleciona o i-ésimo elemento de uma lista (0 <= i < n)
Prelude > [1,2,3,4,5] !! 2
Prelude 3

-- take: seleciona os primeiros n elementos de uma lista
Prelude > take 3 [1,2,3,4,5]
[1,2,3]

-- init: retorna a lista sem o ultimo elemento

-- drop: remove os primeiros n elementos de uma lista
Prelude > drop 3 [1,2,3,4,5]
[4,5]

sum: calcula a soma dos elementos de uma lista de números
Prelude > sum [1,2,3,4,5]
15

-- product: calcula o produto dos elementos de uma lista de números
Prelude > product [1,2,3,4,5]
120

-- (++): Concatena duas listas: 
Prelude> [1,2,3] ++ [4,5]
[1,2,3,4,5]

-- reverse: inverte uma lista
Prelude> reverse [1,2,3,4,5]
[5,4,3,2,1]

-- zip: junta duas listas em uma única lista formada pelos pares dos
elementos correspondentes

-- elem: recebe

Prelude> zip ["pedro","ana","carlos"] [19,17,22]
[("pedro",19),("ana",17),("carlos",22)]
-}

