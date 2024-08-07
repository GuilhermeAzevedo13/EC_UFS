import os
from estudante import Estudante


def main():
    os.system('cls')

    aluno1 = Estudante('nome', 'matricula', 0)
    
    nome_aluno1 = str(input("Digite o nome aluno 1: "))
    aluno1.setNome(nome_aluno1)
    
    matricula_aluno1 = str(input("Digite o matricula aluno 1: "))
    aluno1.setMatricula(matricula_aluno1)
    creditos_aluno1 = int(input("Digite o Credito dos alunos"))
    aluno1.AddCreditos(creditos_aluno1)
    print(aluno1.ExibirInformacoes())


main()
