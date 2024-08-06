analiseImc :: Float -> Float -> String
analiseImc peso altura
              | imc <= 18.5 = "Voce esta muito magro"
              | imc <= 25 = "Voce esta no seu peso ideal"
              | imc <= 30 = "Voce esta gordo"
              | otherwise = "Voce esta muito gordo"
              where
                imc = peso/(altura^2)