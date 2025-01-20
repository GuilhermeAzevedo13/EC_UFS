from teste1 import Servidor


def main():
    print("==== DADOS PROFESSOR ====")
    nome = input("Digite o nome do Servidor: ")
    salario = input("Digite o salario do Professor: ")

    servidor1 = Servidor(nome, salario)
    matricula = servidor1.getNumeroMatricula()
    print("\n")
    print("==== DADOS PROFESSOR ====")
    servidor1.ExibirInformacoes()

    print("==== ALTERAR DADOS PROFESSOR =====")
    novoNome = input("Digite o novo nome do Servidor: ")
    novoSalario = input("Digite um novo Salario: ")
    servidor1.setNomeServidor(novoNome)
    servidor1.setSalarioServidor(novoSalario)
    print("\n")
    print("==== DADOS PROFESSOR ====")
    print("Nome do Servidor: {}\nMatricula do Servidor: {}\nSalario do Servidor: {}\n".format(
        servidor1.getNomeServidor(), servidor1.getNumeroMatricula(), servidor1.getSalarioServidor()))


if __name__ == "__main__":
    main()
