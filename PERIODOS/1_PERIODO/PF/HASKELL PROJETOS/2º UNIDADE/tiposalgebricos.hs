type Nome = String
type Linguagem = String
type Universidade = String

data Pessoa = Programador Nome Linguagem | Aluno Nome Universidade deriving(Show)

programador = Programador "Guilherme" "Haskell"
aluno = Aluno "Guilherme" "UFS" 

is_programador :: Pessoa -> Bool
is_programador (Programador _ _) = True
is_programador _ = False

is_aluno :: Pessoa -> Bool
is_aluno (Aluno _ _) = True
is_aluno _ = False