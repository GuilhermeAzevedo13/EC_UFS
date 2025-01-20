from questao1 import Servidor


def main():
    print("==== DADOS PROFESSOR ====")
    nome = input("Digite o nome do Servidor: ")
    salario = input("Digite o salario do Professor: ")

    servidor1 = Servidor(nome, salario)
    print("\n")
    print("==== DADOS PROFESSOR ====")
    servidor1.ExibirInformacoes()

    print("==== ALTERAR DADOS PROFESSOR =====")
    novoNome = input("Digite o novo nome do Servidor: ")
    novoSalario = input("Digite um novo Salario: ")
    novaMatricula = input("Digite a nova Matricula [Com 5 dígitos]: ")
    servidor1.setNomeServidor(novoNome)
    servidor1.setSalarioServidor(novoSalario)
    if len(novaMatricula) == 5:
        servidor1.setNumeroMatricula(novaMatricula)
    else:
        None
         
    print("\n")
    print("==== DADOS PROFESSOR ====")
    servidor1.ExibirInformacoes()


if __name__ == "__main__":
    main()
