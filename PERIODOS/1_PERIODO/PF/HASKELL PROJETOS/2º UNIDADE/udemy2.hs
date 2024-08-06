-- Tuplas 
-- Número de dados heterogêneos
-- fst : pegar o primeiro elemento do par de uma tupla
-- snt : pegar o segundo elemmento do par de uma tupla
-- zip : organizar em pares de tuplas duas listas dadas em uma nova lista

nomes :: (String, String, String)
nomes = ("Guilherme", "UFS", "Haskell")

select_primeiro (x,_,_) = x
select_segundo (_,y,_) = y
select_terceiro (_,_,z) = z 

type Nome = String
type Idade = Int 
type Linguagem = String
type Pessoa = (Nome, Idade, Linguagem)

pessoa :: Pessoa
pessoa = ("Guilherme", 23, "Haskell")

my_fst :: Pessoa -> Nome
my_fst (n, i, l) = n

-- Compreensão de listas
fatores1 = [x + 1 | x <- [1,2,3]]
fatores2 = [x - 1 | x <- [1,2,3]]
fatores3 = [x * x | x <- [1,2,3]]

par :: Int -> [Int]
par x = [x | x <- [1 .. x], mod x 2 == 0]

combinar :: (Int, Int) -> [(Int, Int)]
combinar (x,y) = [(x,y) | x <- [1 .. ], y <- []