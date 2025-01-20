-- Eq Horaria da Velocidade
s :: Rational -> Rational
s t = s0 + v0*t + ((a*(t^2)))/2
  where
    s0 = 100
    v0 = 15
    a = -9.81