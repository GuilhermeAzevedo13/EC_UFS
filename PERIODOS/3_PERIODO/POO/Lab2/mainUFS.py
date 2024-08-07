import os
from professorUFS import ProfessorUFS


def main():

    while (True):
        os.system("cls")
        print("====== REGISTRO PROFESSOR CAPIVARA ======")
        print("[1] REGISTRAR PROFESSOR")
        print("[2] ALTERAR NOME DO PROFESSOR")
        print("[3] ALTERAR A MATRICULA DO PROFESSOR")
        print("[4] ALTERAR A CARGA HORARIA DO PROFESSOR")
        escolha = int(input("Escolha: "))

        match escolha:
            case 1:
                # Pegar os atributos do Professor 1
                os.system("cls")
                nome1 = str(input("Digite o nome do Professor: "))
                matriculaSIAPE1 = str(
                    input("Digite a Matricula do Professor: "))
                cargaHoraria = int(
                    input("Digite a carga Horaria do Professor: "))
                professor1 = ProfessorUFS(nome1, matriculaSIAPE1, cargaHoraria)
                print("Adicionado com Sucesso")
                print("====DADOS PROFESSOR====")
                print("Nome: {}\nMatricula SIAPE: {}\nCarga Horaria: {}\n".format(
                    professor1.getNome(), professor1.getMatSIAPE(), professor1.getCargaHoraria()))

                print("\n")
                input("Pressione Enter para voltar ao Menu...")

                print("\n")
                input("Pressione Enter para tentar de novo...")

            case 2:
                os.system("cls")
                x = input("Digite o novo Nome do Professor: \n")
                nome1 = professor1.setNome(x)
                print("\n")
                print("====DADOS ATUALIZADOS DO PROFESSOR====")
                print("Nome: {}\nMatricula SIAPE: {}\nCarga Horaria: {}\n".format(
                    professor1.getNome(), professor1.getMatSIAPE(), professor1.getCargaHoraria()))
                print("\n")
                input("Pressione Enter para voltar ao Menu...")

            case 3:
                os.system("cls")
                y = input("Digite a nova Matricula do Professor: \n")
                matriculaSIAPE1 = professor1.setMatSIAPE(y)
                print("\n")
                print("====DADOS ATUALIZADOS DO PROFESSOR====")
                print("Nome: {}\nMatricula SIAPE: {}\nCarga Horaria: {}\n".format(
                    professor1.getNome(), professor1.getMatSIAPE(), professor1.getCargaHoraria()))
                print("\n")
                input("Pressione Enter para voltar ao Menu...")

            case 4:
                os.system("cls")
                print("[1] INSERIR MAIS HORAS")
                print("[2] REMOVER HORAS")
                opcao = int(input("Digite sua Escolha: "))

                match opcao:
                    case 1:
                        novaMais = int(
                            input("Digite quanto deseja Adicionar: "))
                        funcao1 = (professor1.getCargaHoraria() + novaMais)
                        professor1.maisHoras(funcao1, novaMais)
                        print("====DADOS ATUALIZADOS DO PROFESSOR====")
                        print("Nome: {}\nMatricula SIAPE: {}\nCarga Horaria: {}\n".format(
                            professor1.getNome(), professor1.getMatSIAPE(), professor1.getCargaHoraria()))
                        print("\n")
                        input("Pressione Enter para voltar ao Menu...")
                    case 2:
                        novaMenos = int(
                            input("Digite quanto deseja Retirar: "))
                        funcao2 = (professor1.getCargaHoraria() - novaMenos)
                        professor1.menosHoras(funcao2, novaMenos)
                        print("====DADOS ATUALIZADOS DO PROFESSOR====")
                        print("Nome: {}\nMatricula SIAPE: {}\nCarga Horaria: {}\n".format(
                            professor1.getNome(), professor1.getMatSIAPE(), professor1.getCargaHoraria()))
                        print("\n")
                        input("Pressione Enter para voltar ao Menu...")


if __name__ == "__main__":
    main()
