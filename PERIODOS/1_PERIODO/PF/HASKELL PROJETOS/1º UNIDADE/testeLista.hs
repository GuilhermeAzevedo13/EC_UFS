{-# OPTIONS_GHC -Wno-incomplete-patterns #-}
emPares :: [(Integer,Integer)] -> [Integer]
emPares pairList = [ m+n | (m,n) <- pairList ]

produto :: [(Integer,Integer)] -> [(Integer)]
produto 