from questao1 import Servidor
from questao2 import Servidores
import os



def main():
    servidores = Servidores()
    
    while True:
        os.system("cls")
        print("====== REGISTRO NOTEBOOK CAPIVARA ======")
        print("[1] INSERIR SERVIDOR")
        print("[2] REMOVER SERVIDOR")
        print("[3] LISTAR SERVIDORES")
        print("[4] EXISTENCIA DE SERVIDOR")
        escolha = int(input("Escolha: "))
        
        if (escolha == 1):
            opcao = 1
            while (opcao == 1):
                os.system("cls")
                print("==== DADOS PROFESSOR ====")
                nomeServidor = input("Digite o nome do Servidor: ")
                salarioServidor = input("Digite o salario do Servidor: ")
                servidores.InserirServidor(nomeServidor, salarioServidor)
                print("Adicionado com Sucesso")
                
                print("\n")

                print("Deseja Continuar? [1] SIM [2] NAO")
                opcao = int(input("Opcao: "))
                
        elif (escolha == 2):
            os.system("cls")
            print("==== REMOVER SERVIDOR ====")
            print("\n")
            removerServidor = input("Digite o nome do Servidor: ")
            servidores.RemoverServidor(removerServidor)
            print("\n")
            input("Pressione Enter para continuar...")
            
        elif (escolha == 3):
            os.system("cls")
            print("==== LISTAR SERVIDORES ====")
            print("\n")
            servidores.ListarServidores()
            print("\n")
            input("Pressione Enter para continuar...")
            
        elif (escolha == 4):
            os.system("cls")
            print("==== EXISTENCIA DE SERVIDOR ====")
            print("\n")
            nomeServidor = input("Digite o nome do Servidor para verificar se Existe: ")
            servidores.ExistenciaServidor(nomeServidor)
            print("\n")
            input("Pressione Enter para continuar...")
            
        
if __name__ == "__main__":
    main()




