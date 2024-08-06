import System.Process

-- Fator para receber numeros na interatividade com ponto flutuante
rDouble :: IO Double
rDouble = do
    line <- getLine
    return (read line :: Double)

-- Fator para receber numeros Inteiros na interatividade 
rInt :: IO Int
rInt = do
    line <- getLine
    return (read line :: Int)

-- Fator para receber numeros Float na Interatividade
rFloat :: IO Float
rFloat = do
        line <- getLine
        return (read line :: Float)

main :: IO ()
main = do
            system "cls"
            putStr "\nBom dia, como você está?, por favor digite um número: "
            num1 <- rDouble
            putStr "\nÓtimo, agora digite outro número: "
            num2 <- rDouble
            putStr "\nA soma desses dois números será: "
            putStrLn $ (show(num1+num2)) ++ "\n."