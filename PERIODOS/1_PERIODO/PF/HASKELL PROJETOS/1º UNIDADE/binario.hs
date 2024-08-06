convBinario :: Int -> [Char]
convBinario x
  | x == 0 = "0"
  | div x 2 == 0 = show (mod x 2)
  | otherwise = convBinario (div x 2) ++ show (mod x 2)