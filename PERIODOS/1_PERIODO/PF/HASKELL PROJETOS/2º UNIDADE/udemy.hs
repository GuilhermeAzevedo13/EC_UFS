import Data.Array

-- função lambda
f_lambda = \x -> (x * x)

f x = x * x

-- usar :t para saber o tipo de dado de uma função pre definida no prelude

-- Matrizes em Haskell
-- OBS: colocar import Data.Array na linha 1 do codigo
get_array = array (1,4) [(1, 'A'), (2, 'B'), (3, 'C'), (4, 'D')]
-- array (1,4) = Matriz 1x4
-- operadores: !: Saber o elemento na posição dita elems: saber quais elementos na matriz.
get_array2 = array ((1,1), (2,2)) [((1,1), "A1"), ((1,2), "A2"), ((2,1), "B1"), ((2,2), "B2")]