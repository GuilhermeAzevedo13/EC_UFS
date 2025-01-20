leiCos :: Float -> Float -> Float -> Float
leiCos b c t = sqrt ((b^2) + (c^2) - 2 * b * c * cos t)
{- a -> A função leiCos b c t assume o lado oposto ao angulo dado!
   Ao inserir o argumento t usar parenteses no terminal ghci 
-}