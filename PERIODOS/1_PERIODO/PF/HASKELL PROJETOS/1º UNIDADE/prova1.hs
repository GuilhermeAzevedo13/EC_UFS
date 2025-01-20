-- Atividade 1
media :: Float -> Float -> String
media n1 n2
            | media == 10 && media > 9 = "A"
            | media == 9 && media > 8 = "B"
            | media == 8 && media > 7 = "C"
            | media == 7 && media > 6 = "D"
            | otherwise = "E"
            where
                media = (n1 + n2) / 2
