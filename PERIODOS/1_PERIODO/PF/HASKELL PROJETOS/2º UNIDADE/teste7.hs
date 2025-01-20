

data Lista a = Nil | Cons [a] 

ultimo :: Lista [a] -> a
ultimo (Cons []) = undefined
ultimo (Cons [x]) = x
ultimo (Cons (_:xs)) = ultimo (Cons(xs))

