{-
   SUPER CALCULADORA - SAN
-}
import Control.Exception
import System.IO
import System.IO.Error
import System.Process

-- definição dos tipos de dados
type Calculadoras = String

-- Funçao que recebe uma String e retorna uma IO String
getString :: String -> IO String
getString str = do
               putStr str
               res <- getLine
               return res

-- função que inicia o programa
inicio:: IO()
inicio = do
    {catch (ler_arquivo) tratar_erro;}
    where
        -- tenta ler o arquivo
        ler_arquivo = do
        {
            arq <- openFile "calculadoraRibamar.txt" ReadMode; -- abre o arquivo para leitura
            dados <- hGetLine arq; -- ler o arquivo
            hClose arq; -- fecha o arquivo
            menu (read dados); -- passa os dados para a funçao menu
            return ()
        }
        tratar_erro erro = if isDoesNotExistError erro then do
        {
            -- se o arquivo NÃO existir, então cria o arquivo
            arq <- openFile "calculadoraRibamar.txt" WriteMode; -- abre o arquivo para escrita
            hPutStrLn arq "[]"; -- Escreve uma lista vazia no arquivo
            hClose arq; -- fecha o arquivo
            menu []; -- passa uma lista vazia para o menu
            return ()
        }
        else
            ioError erro    

-- função para manipular a opção escolhida pelo usuário no Menu inicial
executarOpcao :: Calculadoras  -> Char -> IO Calculadoras
executarOpcao dados '1' = menuAreas dados
executarOpcao dados '2' = menuVolumes dados
executarOpcao dados '3' = menuDistancias dados
executarOpcao dados '4' = menuEspeciais dados
executarOpcao dados '5' = menuOperacoes dados
executarOpcao dados '0' = do
                         putStrLn ("\nBye! Visite: www.marombaGeek.com.br ;-)\n")
                         return dados
executarOpcao dados _ = do 
                       putStrLn ("\nOpçao invalida! Tente Novamente...")
                       putStr ("\nPressione <Enter> para voltar ao menu...")
                       getChar
                       menu dados


-- funçao que exibe o Menu
menu :: Calculadoras -> IO Calculadoras 
menu dados = do
            system "cls" -- limpa a tela 
            putStrLn "============= SUPER CALCULADORA ============="
            putStrLn "\nDigite 1 para Calcular Área"
            putStrLn "Digite 2 para Calcular Volume"
            putStrLn "Digite 3 para Calcular Distância entre pontos"
            putStrLn "Digite 4 para Calcular uma Função Especial"
            putStrLn "Digite 5 para Calcular Operações Algébricas"
            putStrLn "Digite 0 para sair"
            putStr "\nOpção: " 
            op <- getChar
            getChar -- descarta o Enter
            executarOpcao dados op


-- Funçao para manipular as opçoes do Menu Areas
executarOpcao_2 :: Calculadoras -> Char -> IO Calculadoras
executarOpcao_2 dados '1' = menuAreasTriangulos dados
executarOpcao_2 dados '2' = menuAreasRetangulo dados
executarOpcao_2 dados '3' = menuAreaCircunf dados
executarOpcao_2 dados '4' = menuAreaHexagono dados    
executarOpcao_2 dados '0' = do
                           putStrLn ("\nPressione <Enter> para voltar ao menu Inicial...")
                           getChar
                           menu dados    
executarOpcao_2 dados _ = do 
                         putStrLn ("\nOpçao invalida! Tente Novamente...")
                         putStr ("\nPressione <Enter> para voltar ao menu...")
                         getChar
                         menuAreas dados

-- Funçao Menu Areas 
menuAreas :: Calculadoras -> IO Calculadoras
menuAreas dados = do
            system "cls" -- limpa a tela 
            putStrLn "============= AREAS ============="
            putStrLn "\nDigite 1 para Calcular Area do Triangulo"
            putStrLn "Digite 2 para Calcular Area do Retangulo"
            putStrLn "Digite 3 para Calcular Area de uma Circunferencia "
            putStrLn "Digite 4 para Calcular Area do Hexagono"
            putStrLn "Digite 0 para retornar ao menu Inicial"
            putStr "\nOpção: " 
            op <- getChar
            getChar -- descarta o Enter
            executarOpcao_2 dados op


-- Funçao para manipular as opçoes do Menu Areas Triangulos
executarOpcao_3 :: Calculadoras -> Char -> IO Calculadoras
executarOpcao_3 dados '1' = areaTriexe dados
executarOpcao_3 dados '2' = areaHeron dados
executarOpcao_3 dados '3' = areaLadosangulo dados
executarOpcao_3 dados '0' = do
                           putStrLn ("\nPressione <Enter> para voltar ao menu Areas...")
                           getChar
                           menuAreas dados             
executarOpcao_3 dados _ = do 
                         putStrLn ("\nOpçao invalida! Tente Novamente...")
                         putStr ("\nPressione <Enter> para voltar ao menu...")
                         getChar
                         menuAreasTriangulos dados

-- Função para Manipular qual Area de Triangulo Calcular
menuAreasTriangulos :: Calculadoras -> IO Calculadoras
menuAreasTriangulos dados = do
            system "cls" -- limpa a tela 
            putStrLn "============= AREAS TRIANGULOS ============="
            putStrLn "\nDigite 1 se você sabe a Base e Altura do Triângulo"
            putStrLn "Digite 2 se você sabe os 3 lados do Triangulo"
            putStrLn "Digite 3 se você sabe dois lados e o angulo entre eles"
            putStrLn "Digite 0 para retornar ao menu Areas"
            putStr "\nOpção: " 
            op <- getChar
            getChar -- descarta o Enter
            executarOpcao_3 dados op


-- Funçao Area do Triangulo sabendo Base e Altura
areaTriexe :: Calculadoras -> IO Calculadoras
areaTriexe dados = do
                  system "cls" -- limpa a tela
                  putStr "\nDigite a base do Triangulo [cm]: " 
                  base <- rDouble
                  putStr "\nDigite a altura do Triângulo [cm]: "
                  altura <- rDouble
                  putStrLn $ "\nA area do Triangulo é: " ++ (show (areaTri base altura)) ++ " cm²" ++ "\n." ++
                    "\nPressione <Enter> para voltar ao menu de Areas Triangulos..."
                  getChar
                  menuAreasTriangulos dados


-- funçao para calcular Area do Triangulo
areaTri :: Double -> Double -> Double
areaTri base altura = ((base * altura) / 2)      

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

-- Funçao Area do Triangulo sabendo 3 lados (Formula de Heron)
areaHeron :: Calculadoras -> IO Calculadoras
areaHeron dados = do 
                 system "cls" -- limpa a tela
                 putStr "\nDigite o primeiro Lado [cm]: "
                 a1 <- rDouble
                 putStr "\nDigite o segundo Lado [cm]: "
                 b2 <- rDouble
                 putStr "\nDigite o terceiro Lado [cm]: "
                 c3 <- rDouble
                 if a1 < b2 + c3 && b2 < a1 + c3 && c3 < a1 + b2 then putStrLn $ "\nA area do Triangulo é: " ++ (show (areaHeron_exe a1 b2 c3)) ++ " cm²" ++ "\n." ++
                    "\nPressione <Enter> para voltar ao menu de Areas Triangulos..." else 
                                                                                        putStrLn "\nEsse Triangulo não Existe.\nPressione <Enter> para voltar ao menu de Areas Triangulos..."
                 getChar
                 menuAreasTriangulos dados
-- Funçao para Calcular Area do Triangulo usando Heron
areaHeron_exe :: Double -> Double -> Double -> Double
areaHeron_exe a1 b2 c3 = sqrt (p*(p-a1)*(p-b2)*(p-c3))
                    where
                        p = (a1 + b2 + c3)/2                       


-- Função para Calcular a Area de um Triangulo sabendo 2 lados e um angulo entre eles
areaLadosangulo :: Calculadoras -> IO Calculadoras
areaLadosangulo dados = do
                       system "cls" -- limopa tela
                       putStr "\nDigite o primeiro Lado [cm]: "
                       lado1 <- rDouble
                       putStr "\nDigite o segundo Lado [cm]: "
                       lado2 <- rDouble
                       putStr "\nDigite o ângulo entre os Lados [graus]: "
                       angulo <- rDouble
                       putStrLn $ "\nA area do Triangulo é: " ++ (show (areaLadosangulo_aux lado1 lado2 angulo)) ++ " cm²" ++ "\n." ++
                                                                      "\nPressione <Enter> para voltar ao menu de Areas Triangulos..."
                       getChar                                               
                       menuAreasTriangulos dados

-- Função para calcular a Area do Triangulo sabendo 2 Lados e o Angulo entre eles
areaLadosangulo_aux :: Double -> Double -> Double -> Double
areaLadosangulo_aux lado1 lado2 angulo =  ((lado1 * lado2) * (seno angulo)) / 2

-- Função seno para se implementada na Função acima 
ciclo :: Double -> Double
ciclo x  
    |x > 360 = ciclo (x - 360)
    |x < -360 = ciclo (x + 360)
    |otherwise = x

radiano :: Double -> Double
radiano x = 3.14*x/180

seno :: Double -> Double
seno x 
    |(k == 0 || k == 3.14 || k == 2*3.14 || k == -3.14 || k == -2*3.14) = 0
    |(k == 3.14/2 || k == -3*3.14/2) = 1
    |(k == 3*3.14/2 || k == -3.14/2) = (-1)
    |otherwise = sin k
    where
        k = radiano(ciclo x) 


-- Função para Manipular as opçoes do Menu Areas Retangulo
executarOpcao_4 :: Calculadoras -> Char -> IO Calculadoras
executarOpcao_4 dados '1' = areaRetQuad dados
executarOpcao_4 dados '2' = areaLosango dados
executarOpcao_4 dados '0' = do
                           putStrLn ("\nPressione <Enter> para voltar ao menu Areas...")
                           getChar
                           menuAreas dados
executarOpcao_4 dados _ = do 
                         putStrLn ("\nOpçao invalida! Tente Novamente...")
                         putStr ("\nPressione <Enter> para voltar ao menu...")
                         getChar
                         menuAreasRetangulo dados

-- Função para Manipular qual Area de Retangulo Calcular
menuAreasRetangulo :: Calculadoras -> IO Calculadoras
menuAreasRetangulo dados = do
            system "cls" -- limpa a tela 
            putStrLn "============= AREAS RETANGULOS ============="
            putStrLn "\nDigite 1 se você sabe a Base e Altura do RETANGULO OU QUADRADO"
            putStrLn "Digite 2 se você sabe a Diagonal maior e a Diagonal menor do Losango"
            putStrLn "Digite 0 para retornar ao menu Areas"
            putStr "\nOpção: " 
            op <- getChar
            getChar -- descarta o Enter
            executarOpcao_4 dados op  

-- Funçao para Calcular Area do Retangulo e do Quadrado
areaRetQuad :: Calculadoras -> IO Calculadoras
areaRetQuad dados = do
                   system "cls" -- limopa tela
                   putStr "\nDigite o primeiro Lado [cm]: "
                   lado1 <- rDouble
                   putStr "\nDigite o segundo Lado [cm]: "
                   lado2 <- rDouble
                   if lado1 == lado2 then putStrLn $ "\nA area do Quadrado é: " ++ (show (lado1 * lado2)) ++ " cm²" ++ "\n." ++
                                                            "\nPressione <Enter> para voltar ao menu de Areas Retangulo..." else
                                                                putStrLn $ "\nA area do Retangulo é: " ++ (show (lado1 * lado2)) ++ " cm²" ++ "\n." ++
                                                            "\nPressione <Enter> para voltar ao menu de Areas Retangulo..."
                   getChar                                               
                   menuAreasRetangulo dados

-- Funçao para Calcular Area do Losango
areaLosango :: Calculadoras -> IO Calculadoras
areaLosango dados = do
                   system "cls" -- limopa tela
                   putStr "\nDigite a Diagonal Maior do Losango [cm]: "
                   lado1 <- rDouble
                   putStr "\nDigite a Diagonal Menor do Losango [cm]: "
                   lado2 <- rDouble
                   putStrLn $ "\nA area do Losango é: " ++ (show ((lado1 * lado2)/2)) ++ " cm²" ++ "\n." ++
                                                            "\nPressione <Enter> para voltar ao menu de Areas Retangulo..."
                   getChar                                               
                   menuAreasRetangulo dados 



-- Função para Manipular as opçoes do Menu Areas Circunferencia
executarOpcao_5 :: Calculadoras -> Char -> IO Calculadoras
executarOpcao_5 dados '1' = areaCircunferencia dados
executarOpcao_5 dados '2' = comprimentoCircunferencia dados
executarOpcao_5 dados '0' = do
                           putStrLn ("\nPressione <Enter> para voltar ao menu Areas...")
                           getChar
                           menuAreas dados
executarOpcao_5 dados _ = do 
                         putStrLn ("\nOpçao invalida! Tente Novamente...")
                         putStr ("\nPressione <Enter> para voltar ao menu...")
                         getChar
                         menuAreaCircunf dados

-- Função do Menu Areas Circunferencia
menuAreaCircunf :: Calculadoras -> IO Calculadoras
menuAreaCircunf dados = do
                       system "cls" -- limpa a tela 
                       putStrLn "============= AREAS CIRCUNFERENCIA ============="
                       putStrLn "\nDigite 1 se você sabe o Raio da Circunferência"
                       putStrLn "Digite 2 se você quer saber o comprimento da Circunferência"
                       putStrLn "Digite 0 para retornar ao menu Areas"
                       putStr "\nOpção: " 
                       op <- getChar
                       getChar -- descarta o Enter
                       executarOpcao_5 dados op 

-- Função para Manipular a Area da Circunferencia
areaCircunferencia :: Calculadoras -> IO Calculadoras
areaCircunferencia dados = do
                          system "cls" -- limopa tela
                          putStr "\nDigite o Raio da Circunferência [cm]: "
                          raio <- rDouble
                          putStrLn $ "\nA area da Circunferência é: " ++ (show (pi * (raio^2))) ++ " cm²" ++ "\n." ++
                                                            "\nPressione <Enter> para voltar ao menu de Areas Circunferência..."
                          getChar                                               
                          menuAreaCircunf dados

-- Função para Manipular o Perimetro de uma Circunferencia
comprimentoCircunferencia :: Calculadoras -> IO Calculadoras
comprimentoCircunferencia dados = do
                                 system "cls" -- limopa tela
                                 putStr "\nDigite o Raio da Circunferência [cm]: "
                                 raio <- rDouble
                                 putStrLn $ "\nO comprimento da Circunferência é: " ++ (show (2 * pi * raio)) ++ " cm" ++ "\n." ++
                                                            "\nPressione <Enter> para voltar ao menu de Areas Circunferência..."
                                 getChar                                               
                                 menuAreaCircunf dados


-- Função para Manipular as opçoes do Menu Areas Circunferencia
executarOpcao_6 :: Calculadoras -> Char -> IO Calculadoras
executarOpcao_6 dados '1' = area_hexagono dados
executarOpcao_6 dados '0' = do
                           putStrLn ("\nPressione <Enter> para voltar ao menu Areas...")
                           getChar
                           menuAreas dados
executarOpcao_6 dados _ = do 
                         putStrLn ("\nOpçao invalida! Tente Novamente...")
                         putStr ("\nPressione <Enter> para voltar ao menu...")
                         getChar
                         menuAreaHexagono dados
                         
-- Função do Menu Area do Hexagono
menuAreaHexagono :: Calculadoras -> IO Calculadoras
menuAreaHexagono dados = do
                        system "cls" -- limpa a tela 
                        putStrLn "============= AREA DO HEXAGONO ============="
                        putStrLn "\nDigite 1 para saber a Area de um Hexagono Regular"
                        putStrLn "Digite 0 para retornar ao menu Areas"
                        putStr "\nOpção: " 
                        op <- getChar
                        getChar -- descarta o Enter
                        executarOpcao_6 dados op 

-- Função para Manipular a Area da Circunferencia
area_hexagono :: Calculadoras -> IO Calculadoras
area_hexagono dados = do
                          system "cls" -- limopa tela
                          putStr "\nDigite o Lado do Hexagono [cm]: "
                          lado <- rDouble
                          putStrLn $ "\nA area do Hexagono é: " ++ (show ((6 * (lado^2) * (sqrt 3)) / 4)) ++ " cm²" ++ "\n." ++
                                                            "\nPressione <Enter> para voltar ao menu de Areas Circunferência..."
                          getChar                                               
                          menuAreaHexagono dados
                          
-- Função de Volumes para ser Usada abaixo                          
data Figuras = Cubo Double Double Double | Paralelepipedo Double Double Double | Cilindro Double Double | Cone Double Double | Esfera Double

volCubo :: Figuras -> Double
volCubo (Cubo comp larg alt) = comp * larg * alt

volParalelepipedo :: Figuras -> Double
volParalelepipedo (Paralelepipedo comp larg alt) = comp * larg * alt

volCilindro :: Figuras -> Double
volCilindro (Cilindro raio altura) = pi * (raio^2) * altura

volCone :: Figuras -> Double
volCone (Cone raio altura) = (pi * (raio^2) * altura) / 3

volEsfera :: Figuras -> Double
volEsfera (Esfera raio) = (4 * pi * (raio^3)) / 3


                          
-- Função para Manipular o Menu de Volumes
executarOpcao_7 :: Calculadoras -> Char -> IO Calculadoras
executarOpcao_7 dados '1' = volumeCuboeParalelepipedo dados
executarOpcao_7 dados '2' = volumeCilindro dados
executarOpcao_7 dados '3' = volumeCone dados
executarOpcao_7 dados '4' = volumeEsfera dados
executarOpcao_7 dados '0' = do
                           putStrLn ("\nPressione <Enter> para voltar ao menu Inicial...")
                           getChar
                           menu dados
executarOpcao_7 dados _ = do 
                         putStrLn ("\nOpçao invalida! Tente Novamente...")
                         putStr ("\nPressione <Enter> para voltar ao menu...")
                         getChar
                         menuVolumes dados

-- Função do Menu Volumes
menuVolumes :: Calculadoras -> IO Calculadoras
menuVolumes dados = do
                   system "cls" -- limpa a tela 
                   putStrLn "============= VOLUMES ============="
                   putStrLn "\nDigite 1 para Calcular Volume do Cubo ou um Paralelepipedo e suas Areas Superficiais"
                   putStrLn "Digite 2 para Calcular Volume do Cilindro e sua Area Superficial"
                   putStrLn "Digite 3 para Calcular Volume do Cone e sua Area Superficial"
                   putStrLn "Digite 4 para Calcular Volume da Esfera e sua Area Superficial"
                   putStrLn "Digite 0 para retornar ao menu Inicial"
                   putStr "\nOpção: " 
                   op <- getChar
                   getChar -- descarta o Enter
                   executarOpcao_7 dados op

-- Função que Calcula Volume do Cubo e de um paralelepipedo e suas Areas Superficiais
volumeCuboeParalelepipedo :: Calculadoras -> IO Calculadoras
volumeCuboeParalelepipedo dados = do
                                 system "cls" -- limpa a tela
                                 putStr "\nDigite o Comprimento [cm]: "
                                 comp <- rDouble
                                 putStr "\nDigite a Largura [cm]: "
                                 larg <- rDouble
                                 putStr "\nDigite a Altura [cm]: "
                                 alt <- rDouble
                                 if comp == larg && comp == alt then putStrLn $ "\nO volume do Cubo é: " ++ (show (volCubo (Cubo comp larg alt))) ++ "cm³" ++ "\n." ++ 
                                                                      "\nA área Superficial do Cubo é de: " ++ (show (6 * comp * larg)) ++ "cm²" ++ "\n." ++ 
                                                                         "\nPressione <Enter> para voltar ao menu de Volumes..." else 
                                                                             putStrLn $ "\nO volume do Paralelepipedo é: " ++ (show (volParalelepipedo (Paralelepipedo comp larg alt))) ++ "cm³" ++ "\n." ++ 
                                                                               "\nA área Superficial do Paralelepipedo é de: " ++ (show ((2 * comp * alt) + (2 * larg * alt) + (2 * comp * larg))) ++ "cm²" ++ "\n." ++
                                                                                  "\nPressione <Enter> para voltar ao menu de Volumes..."
                                 getChar                                     
                                 menuVolumes dados


-- Função que Calcula o Volume do Cilindro e sua Area Superficial"
volumeCilindro :: Calculadoras -> IO Calculadoras
volumeCilindro dados = do
                      system "cls" -- limpa a tela
                      putStr "\nDigite o Raio do Cilindro [cm]: "
                      raio <- rDouble
                      putStr "\nDigite a Altura do Cilindro [cm]: "
                      altura <- rDouble
                      putStrLn $ "\nO volume do Cilindro é de: " ++ (show (volCilindro (Cilindro raio altura))) ++ "cm³" ++ "\n." ++
                        "\nA área Superficial do Cilindro é de: " ++ (show (2 * pi * raio * altura)) ++ "cm²" ++ "\n." ++
                           "\nPressione <Enter> para voltar ao menu de Volumes..."
                      getChar
                      menuVolumes dados


-- Função que Calcula o Volume do Cone e sua Area Superficial"
volumeCone :: Calculadoras -> IO Calculadoras
volumeCone dados = do
                      system "cls" -- limpa a tela
                      putStr "\nDigite o Raio do Cone [cm]: "
                      raio <- rDouble
                      putStr "\nDigite a Altura do Cone [cm]: "
                      altura <- rDouble
                      putStrLn $ "\nO volume do Cone é de: " ++ (show (volCone (Cone raio altura))) ++ "cm³" ++ "\n." ++
                        "\nA área Superficial do Cone é de: " ++ (show (pi * raio * (raio + (sqrt ((raio^2) + (altura^2))) ))) ++ "cm²" ++ "\n." ++
                           "\nPressione <Enter> para voltar ao menu de Volumes..."
                      getChar
                      menuVolumes dados
                      
                      
-- Função que Calcula o Volume da Esfera e sua Area Superficial"
volumeEsfera :: Calculadoras -> IO Calculadoras
volumeEsfera dados = do
                    system "cls" -- limpa a tela
                    putStr "\nDigite o Raio do Cone [cm]: "
                    raio <- rDouble
                    putStrLn $ "\nO volume da Esfera é de: " ++ (show (volEsfera (Esfera raio))) ++ "cm³" ++ "\n." ++ 
                      "\nA área Superficial da Esfera é de:" ++ (show (4 * pi * (raio^2))) ++ "cm²" ++ "\n." ++ 
                         "\nPressione <Enter> para voltar ao menu de Volumes..."
                    getChar
                    menuVolumes dados
                    
-- Funções Especiais e de Ditancia
data Calculadora = Somar Double Double | Subtrair Double Double | Dividir Double Double | Multiplicar Double Double | Modulo Double  
    | Raiz Double Double | Exponencial Double Double | Logaritmo Double Double | Seno Double | Cosseno Double | Tangente Double
    | Fatorial Double | Fibonacci Double | Distanciar2 [Double] [Double] | Distanciar3 [Double] [Double] | Produtovetorial [Double] [Double]
    | Produtomisto [Double] [Double] [Double]

calculadora :: Calculadora -> [Double]

calculadora (Somar x y ) = [x + y]
calculadora (Subtrair x y ) = [x - y]
calculadora (Dividir x y ) = [x / y]
calculadora (Multiplicar x y ) = [x * y]
calculadora (Modulo x ) = [if x > 0 || x == 0 then x else (-1)*x]
calculadora (Raiz x y ) = [x**(1/y)]
calculadora (Exponencial x y ) = [x**y]
calculadora (Logaritmo x y ) = [logBase x y]
calculadora (Seno x ) = [seno x]
calculadora (Cosseno x ) = [cosseno x]
calculadora (Tangente x ) = [tangente x]
calculadora (Fatorial x ) = [fatorial x]
calculadora (Fibonacci n ) = [fibonacci n]
calculadora (Distanciar2 [x,y] [a,b]) = dr2 [x,y] [a,b]
calculadora (Distanciar3 [x,y,z] [a,b,c]) = dr3 [x,y,z] [a,b,c]
calculadora (Produtovetorial [x,y,z] [a,b,c]) = pv [x,y,x] [a,b,c]
calculadora (Produtomisto [x,y,z] [a,b,c] [i,j,k]) = [pm [x,y,x] [a,b,c] [i,j,k]]

cosseno :: Double -> Double
cosseno x 
    |(k == 0 || k == 2*3.14 || k == -2*3.14) = 1
    |(k == 3.14 || k == -3.14) = (-1)
    |(k == 3.14/2 || k == 3*3.14/2 || k == -3*3.14/2 || k == -3.14/2) = 0
    |otherwise = cos k
    where
        k = radiano(ciclo x)

tangente :: Double -> Double
tangente x 
    |(k == 0 || k == 2*3.14 || k == -2*3.14 || k == 3.14 || k == -3.14) = 0
    |(k == 3.14/4 || k == -3.14*21/12 || k == 3.925 || k == -3*3.14/4) = 1
    |(k == 21*3.14/12 || k == -3.14/4 || k == 3.14*3/4 || k == -3.925) = (-1)
    |otherwise = tan k
    where
        k = radiano(ciclo x)

fatorial :: Double -> Double
fatorial 0 = 1
fatorial 1 = 1
fatorial x = x * fatorial (x-1)

fibonacci :: Double -> Double
fibonacci n
 | n == 0 = 0
 | n == 1 = 1
 | otherwise = fibonacci (n-1) + fibonacci (n-2)
 

dr2 :: [Double] -> [Double] -> [Double]
dr2 [x,y] [a,b] = [((x-a)^2 + (y-b)^2)**(1/2)]

dr3 :: [Double] -> [Double] -> [Double]
dr3 [x,y,z] [a,b,c] = [((x-a)^2 + (y-b)^2 + (z-c)^2)**(1/2)]

pv :: [Double] -> [Double] -> [Double]
pv [x, y, z] [a, b, c] = [(y*c - z*b), (z*a - x*c), (x*b - y*a)]

pm :: [Double] -> [Double] -> [Double] -> Double
pm [x, y, z] [a, b, c] [i, j, k] = x*b*k + y*c*i + z*a*j - z*b*i - y*a*k - x*c*j

-- Função para Manipular o Menu de Distancias entre Pontos
executarOpcao_8 :: Calculadoras -> Char -> IO Calculadoras
executarOpcao_8 dados '1' = distancias2D dados
executarOpcao_8 dados '2' = distancias3D dados
executarOpcao_8 dados '3' = produtoVetorial dados
executarOpcao_8 dados '4' = produtoMisto dados 
executarOpcao_8 dados '0' = do
                           putStrLn ("\nPressione <Enter> para voltar ao menu Inicial...")
                           getChar
                           menu dados
executarOpcao_8 dados _ = do 
                         putStrLn ("\nOpçao invalida! Tente Novamente...")
                         putStr ("\nPressione <Enter> para voltar ao menu...")
                         getChar
                         menuDistancias dados

-- Função do Menu Distancias 
menuDistancias :: Calculadoras -> IO Calculadoras
menuDistancias dados = do
                      system "cls" -- limpa a tela 
                      putStrLn "============= DISTÂNCIAS ENTRE PONTOS ============="
                      putStrLn "Digite 1 para Calcular a Distância entre dois pontos no plano x y"
                      putStrLn "Digite 2 para Calcular a Distância entre dois pontos no espaço x y z"
                      putStrLn "Digite 3 para Calcular o Produto Vetorial de dois Vetores"
                      putStrLn "Digite 4 para Calcular o Produto Misto de Três Vetores"
                      putStrLn "Digite 0 para retornar ao menu Inicial"
                      putStr "\nOpção: " 
                      op <- getChar
                      getChar -- descarta o Enter
                      executarOpcao_8 dados op


-- Função que Calcula a Distancia entre dois pontos no plano x y
distancias2D :: Calculadoras -> IO Calculadoras
distancias2D dados = do
                   system "cls" -- limpa a tela
                   putStr "\nDigite a coordenada x1: "
                   x <- rDouble
                   putStr "\nDigite a coordenada y1: "
                   y <- rDouble
                   putStr "\nDigite a coordenada x2: "
                   a <- rDouble
                   putStr "\nDigite a coordenada y2: "
                   b <- rDouble
                   putStrLn $ "\nA distância entre os pontos é: " ++ (show (calculadora (Distanciar2 [x,y] [a,b]))) ++ "\n." ++ 
                     "\nPressione <Enter> para voltar ao menu de Distâncias..."
                   getChar
                   menuDistancias dados

-- Função que Calcula a Distancia entre dois pontos no Espaço x y z
distancias3D :: Calculadoras -> IO Calculadoras
distancias3D dados = do
                   system "cls" -- limpa a tela
                   putStr "\nDigite a coordenada x1: "
                   x <- rDouble
                   putStr "\nDigite a coordenada y1: "
                   y <- rDouble
                   putStr "\nDigite a coordenada z1: "
                   z <- rDouble
                   putStr "\nDigite a coordenada x2: "
                   a <- rDouble
                   putStr "\nDigite a coordenada y2: "
                   b <- rDouble
                   putStr "\nDigite a coordenada z1: "
                   c <- rDouble
                   putStrLn $ "\nA distância entre os pontos é: " ++ (show (calculadora (Distanciar3 [x,y,z] [a,b,c]))) ++ "\n." ++ 
                     "\nPressione <Enter> para voltar ao menu de Distâncias..."
                   getChar
                   menuDistancias dados  
                   
-- Função que Calcula o Produto Vetores de dois Vetores
produtoVetorial :: Calculadoras -> IO Calculadoras
produtoVetorial dados = do
                   system "cls" -- limpa a tela
                   putStr "\nDigite a coordenada x1: "
                   x <- rDouble
                   putStr "\nDigite a coordenada y1: "
                   y <- rDouble
                   putStr "\nDigite a coordenada z1: "
                   z <- rDouble
                   putStr "\nDigite a coordenada x2: "
                   a <- rDouble
                   putStr "\nDigite a coordenada y2: "
                   b <- rDouble
                   putStr "\nDigite a coordenada z1: "
                   c <- rDouble
                   putStrLn $ "\nO Produto Vetorial entre os pontos é: " ++ "\n." ++ (show (calculadora (Produtovetorial [x,y,z] [a,b,c]))) ++ "\n." ++ 
                      "\nPressione <Enter> para voltar ao menu de Distâncias..."
                   getChar
                   menuDistancias dados
                   
-- Função que Calcula o Produto Misto de três Vetores
produtoMisto :: Calculadoras -> IO Calculadoras
produtoMisto dados = do
                   system "cls" -- limpa a tela
                   putStr "\nDigite a coordenada x1: "
                   x <- rDouble
                   putStr "\nDigite a coordenada y1: "
                   y <- rDouble
                   putStr "\nDigite a coordenada z1: "
                   z <- rDouble
                   putStr "\nDigite a coordenada x2: "
                   a <- rDouble
                   putStr "\nDigite a coordenada y2: "
                   b <- rDouble
                   putStr "\nDigite a coordenada z2: "
                   c <- rDouble
                   putStr "\nDigite a coordenada x3: "
                   i <- rDouble
                   putStr "\nDigite a coordenada y3: "
                   j <- rDouble
                   putStr "\nDigite a coordenada z3: "
                   k <- rDouble
                   putStrLn $ "\nO Produto Vetorial entre os pontos e o volume do sólido é: " ++ "\n." ++ (show (calculadora (Produtomisto [x,y,z] [a,b,c] [i,j,k]))) ++ "\n." ++ 
                      "\nPressione <Enter> para voltar ao menu de Distâncias..."
                   getChar
                   menuDistancias dados
                   
-- Função para Manipular o Menu de Funções Especiais
executarOpcao_9 :: Calculadoras -> Char -> IO Calculadoras
executarOpcao_9 dados '1' = numeroDivisiveis dados
executarOpcao_9 dados '2' = ehPrimo dados
executarOpcao_9 dados '3' = primosLista dados
executarOpcao_9 dados '4' = funcaoFibonacci dados
executarOpcao_9 dados '5' = sequenciaFibonacci dados
executarOpcao_9 dados '6' = fatorialX dados
executarOpcao_9 dados '7' = binario dados
executarOpcao_9 dados '0' = do
                           putStrLn ("\nPressione <Enter> para voltar ao menu Inicial...")
                           getChar
                           menu dados
executarOpcao_9 dados _ = do 
                         putStrLn ("\nOpçao invalida! Tente Novamente...")
                         putStr ("\nPressione <Enter> para voltar ao menu...")
                         getChar
                         menuEspeciais dados

                        
-- Função do Menu Especiais
menuEspeciais :: Calculadoras -> IO Calculadoras
menuEspeciais dados = do
                   system "cls" -- limpa a tela 
                   putStrLn "============= FUNÇÕES ESPECIAIS ============="
                   putStrLn "Digite 1 para Calcular o número de Divisíveis de um número"
                   putStrLn "Digite 2 para saber se um número é primo"
                   putStrLn "Digite 3 para saber todos os primo que vem antes do número desejado"
                   putStrLn "Digite 4 para saber o número na posição dada pela sequência de Fibonacci"
                   putStrLn "Digite 5 para saber a sequencia de Fibbonacci ate a posição escolhida"
                   putStrLn "Digite 6 para saber o Fatorial de um número escolhido"
                   putStrLn "Digite 7 para transformar um número qualquer em Binário"
                   putStrLn "Digite 0 para retornar ao menu Inicial"
                   putStr "\nOpção: " 
                   op <- getChar
                   getChar -- descarta o Enter
                   executarOpcao_9 dados op

-- Função que calcula o número de divisores de um número
divisores :: Int -> [Int]
divisores n = [x | x <- [1..n], n `mod` x == 0]

-- Interatividade da Função Calcula números de divisores
numeroDivisiveis :: Calculadoras -> IO Calculadoras
numeroDivisiveis dados = do
                         system "cls" -- Limpa Tela
                         putStr "\nDigite um número para saber seus divisíveis: "
                         n <- rInt
                         putStrLn $ "\nOs divisores do número " ++ (show (n)) ++ " é: " ++ (show (divisores n)) ++ "\n." ++
                          "\nPressione <Enter> para voltar ao menu de Funções Especiais..."
                         getChar
                         menuEspeciais dados

-- Função para saber se um número é primo ou não
primo :: Int -> Bool
primo n = divisores n == [1,n]

-- Interatividade da Função que mostra se um número é primo ou não
ehPrimo :: Calculadoras -> IO Calculadoras
ehPrimo dados = do
                         system "cls" -- Limpa Tela
                         putStr "\nDigite um número para saber se ele é Primo: "
                         n <- rInt
                         putStrLn $ "\nO número " ++ (show (n)) ++ " é Primo? " ++ (show (primo n)) ++ "\n." ++
                          "\nPressione <Enter> para voltar ao menu de Funções Especiais..."
                         getChar
                         menuEspeciais dados

-- Função para listar primos
primos :: Int -> [Int]
primos n = [x | x <- [2..n], primo x]                        
                         
-- Interatividade da Função que mostra se um número é primo ou não
primosLista :: Calculadoras -> IO Calculadoras
primosLista dados = do
                         system "cls" -- Limpa Tela
                         putStr "\nDigite um número para saber a sequência de Primos antes dele: "
                         n <- rInt
                         putStrLn $ "\nO número " ++ (show (n)) ++ " tem primos antes dele a sequência: " ++ "\n." ++ (show (primos n)) ++ "\n." ++
                          "\nPressione <Enter> para voltar ao menu de Funções Especiais..."
                         getChar
                         menuEspeciais dados

-- Interatividade da Função que mostra o numero na posiçao da sequencia de Fibonacci
funcaoFibonacci :: Calculadoras -> IO Calculadoras
funcaoFibonacci dados = do
                         system "cls" -- Limpa Tela
                         putStr "\nDigite a posição na sequência de Fibonacci para saber o número nela: "
                         n <- rDouble
                         putStrLn $ "\nA posição " ++ (show (n)) ++ " tem o número: " ++ (show (fibonacci n)) ++ "\n." ++
                          "\nPressione <Enter> para voltar ao menu de Funções Especiais..."
                         getChar
                         menuEspeciais dados

-- Função para printar a sequencia de Fibonacci ate determinada posição                      
fibonacci2 :: Int -> [Int]
fibonacci2 x = [fibo n | n <- [0..x]]
                         
fibo :: Int -> Int
fibo n
 | n == 0 = 0
 | n == 1 = 1
 | otherwise = fibo (n-1) + fibo (n-2)

-- Interatividade da Função que printa a sequencia de Fibonacci ate determinada posição
sequenciaFibonacci :: Calculadoras -> IO Calculadoras
sequenciaFibonacci dados = do
                          system "cls" -- Limpa a Tela
                          putStr "\nDigite ate que posição deseja produzir a sequência de Fibonacci: "
                          n <- rInt
                          putStrLn $ "\nA sequencia Fibonacci até a posição " ++ (show (n)) ++ " é:" ++ "\n." ++ (show (fibonacci2 n)) ++ "\n." ++
                           "\nPressione <Enter> para voltar ao menu de Funções Especiais..."
                          getChar
                          menuEspeciais dados


-- Interatividade da Função Fatorial
fatorialX :: Calculadoras -> IO Calculadoras
fatorialX dados = do
                      system "cls" -- Limpa a Tela
                      putStr "\nDigite o número para saber seu fatorial: "
                      fatorial <- rDouble
                      putStrLn $ "\nO fatorial de " ++ (show (fatorial)) ++ "! é: " ++ (show (calculadora (Fatorial fatorial))) ++ "\n." ++
                        "\nPressione <Enter> para voltar ao menu de Funções Especiais..."
                      getChar
                      menuEspeciais dados  

-- Função Binario
convBinario :: Int -> [Char]
convBinario n
  | n == 0 = "0"
  | div n 2 == 0 = show (mod n 2)
  | otherwise = convBinario (div n 2) ++ show (mod n 2)                     
                      
-- Interatividade da Função Binario
binario :: Calculadoras -> IO Calculadoras
binario dados = do
                      system "cls" -- Limpa a Tela
                      putStr "\nDigite o número para saber seu valor em Binário: "
                      n <- rInt
                      putStrLn $ "\nO Binário de " ++ (show (n)) ++ " é: " ++ (show (convBinario n)) ++ "\n." ++
                          "\nPressione <Enter> para voltar ao menu de Funções Especiais..."
                      getChar
                      menuEspeciais dados

-- Função para Manipular o Menu de Operações Algébricas
executarOpcao_10 :: Calculadoras -> Char -> IO Calculadoras
executarOpcao_10 dados '1' = operadorSomar dados
executarOpcao_10 dados '0' = do
                           putStrLn ("\nPressione <Enter> para voltar ao menu Inicial...")
                           getChar
                           menu dados
executarOpcao_10 dados _ = do 
                         putStrLn ("\nOpçao invalida! Tente Novamente...")
                         putStr ("\nPressione <Enter> para voltar ao menu Operações Algébricas...")
                         getChar
                         menuOperacoes dados

-- Função do Menu Operações Algébricas
menuOperacoes :: Calculadoras -> IO Calculadoras
menuOperacoes dados = do
                     system "cls" -- limpa a tela 
                     putStrLn "============= OPERAÇÕES ALGÉBRICAS ============="
                     putStrLn "Digite 1 para Calcular a Soma de Dois Números"
                     putStrLn "Digite 2 para Calcular a Subtração de Dois Números"
                     putStrLn "Digite 3 para Calcular a Divisão de Dois Números"
                     putStrLn "Digite 4 para Calcular a Multiplicação de Dois Números"
                     putStrLn "Digite 5 para Calcular o Módulo de um Número"
                     putStrLn "Digite 6 para Calcular a Raiz n-ésima de um Número "
                     putStrLn "Digite 7 para Calcular o Exponencial de um Número"
                     putStrLn "Digite 8 para Calcular o Logaritmo de um Número"
                     putStrLn "Digite 9 para Calcular o Seno, Cosseno e a Tangente de um ângulo"
                     putStrLn "Digite 0 para retornar ao menu Inicial"
                     putStr "\nOpção: " 
                     op <- getChar
                     getChar -- descarta o Enter
                     executarOpcao_10 dados op

-- Interatividade da Função Somar
operadorSomar :: Calculadoras -> IO Calculadoras
operadorSomar dados = do 
                     system "cls" -- Limpa a Tela
                     putStr "\nDigite o primeiro número para Somar: "
                     x <- rDouble
                     putStr "\nDigite o segundo número para Somar: "
                     y <- rDouble
                     putStrLn $ "\nA soma do número " ++ (show (x)) ++ " com o número " ++ (show (y)) ++
                                " é: " ++ (show(calculadora (Somar x y))) ++ "\n." ++
                                "\nPressione <Enter> para voltar ao menu de Operações Algébricas..."
                     getChar
                     menuOperacoes dados