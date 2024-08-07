import os
from professor import Professor


def main():

    # Pegar os atributos do Professor 1
    nome1 = str(input("Digite o nome do Professor: "))
    matriculaSIAPE1 = str(input("Digite a Matricula do Professor: "))
    cargaHoraria = int(input("Digite a carga Horaria do Professor: "))

    professor1 = Professor(nome1, matriculaSIAPE1, cargaHoraria)

    print("\n")
    print("DADOS PROFESSOR")
    print("Nome: {}\nMatricula SIAPE: {}\nCarga Horaria: {}\n".format(
        professor1.getNome(), professor1.getMatSIAPE(), professor1.getCargaHoraria()))

    while (True):
        print("\n")
        print("ALTERAR DADOS PROFESSOR")
        print("[1] ALTERAR NOME\n[2] ALTERAR MATRICULA SIAPE\n[3] ALTERAR CARGA HORARIA\n  [4] ADICIONAR HORAS\n  [5] RETIRAR HORAS")
        opcao = int(input("Escolha: \n"))
        if opcao == 1:
            x = input("Digite o novo Nome do Professor: \n")
            nome1 = professor1.setNome(x)
            print("\n")
            print("DADOS ATUALIZADOS DO PROFESSOR")
            print("Nome: {}\nMatricula SIAPE: {}\nCarga Horaria: {}\n".format(
                professor1.getNome(), professor1.getMatSIAPE(), professor1.getCargaHoraria()))
        elif opcao == 2:
            y = input("Digite a nova Matricula do Professor: \n")
            matriculaSIAPE1 = professor1.setMatSIAPE(y)
            print("\n")
            print("DADOS ATUALIZADOS DO PROFESSOR")
            print("Nome: {}\nMatricula SIAPE: {}\nCarga Horaria: {}\n".format(
                professor1.getNome(), professor1.getMatSIAPE(), professor1.getCargaHoraria()))
        elif opcao == 3:
            print("Deseja ADICIONAR ou RETIRAR  Carga Horaria?\n")
            print("[4] ADICIONAR HORAS\n[5] RETIRAR HORAS")
            escolha = int(input("Escolha: \n"))
            if escolha == 4:
                w = int(input("Digite a quantidade que deseja ADICIONAR: "))
                professor1.maisHoras(w)
                print("\n")
                print("DADOS ATUALIZADOS DO PROFESSOR")
                print("Nome: {}\nMatricula SIAPE: {}\nCarga Horaria: {}\n".format(
                    professor1.getNome(), professor1.getMatSIAPE(), professor1.getCargaHoraria()))
            elif escolha == 5:
                retirarHoras = int(
                    input("Digite a quantidade que deseja RETIRAR: "))
                if (professor1.getCargaHoraria() >= retirarHoras):
                    professor1.menosHoras(retirarHoras)
                    print("\n")
                    print("DADOS ATUALIZADOS DO PROFESSOR")
                    print("Nome: {}\nMatricula SIAPE: {}\nCarga Horaria: {}\n".format(
                        professor1.getNome(), professor1.getMatSIAPE(), professor1.getCargaHoraria()))
                else:
                    print("Carga horaria menor que zero")
                    continue


if __name__ == "__main__":
    main()
