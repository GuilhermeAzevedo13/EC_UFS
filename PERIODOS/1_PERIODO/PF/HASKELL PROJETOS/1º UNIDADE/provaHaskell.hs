{- 1. Elabore uma função recursiva que receba uma lista de inteiros 
e identifique se algum elemento da lista é negativo. 
Por exemplo:
para a entrada [2,3,4] a função deve retornar False;
para a entrada [2,-1,0] a função deverá retornar True.
-}

negativo :: [Int] -> Bool
negativo [] = False
negativo (h:t) = (h < 0) || (negativo t)

{- Dadas duas listas de inteiros, representando dois conjuntos A e B, 
   elabore uma função que retorne a lista que representa a diferença 
   destes conjuntos, ou seja o conjunto formado pelos elementos de A 
   que não estão em B. Por representarem conjuntos, 
   estas listas não possuem elementos repetidos.
-}
diferencaAux :: [Int] -> [Int] -> Bool
diferencaAux []

diferenca :: [Int] -> [Int] -> [Int]
