somaLista :: [Int] -> Int
somaLista [] = 0
somaLista (h:t) = h + somaLista t



produto :: [Int] -> Int
produto [] = 1
produto (h:t) = h * produto t


dobraLista :: [Int] -> [Int]
dobraLista [] = []
dobraLista (h:t) = 2*h : dobraLista t

tamanhoLista :: [t] -> Int
tamanhoLista [] = 0
tamanhoLista (h:t) = 1 + tamanhoLista t

