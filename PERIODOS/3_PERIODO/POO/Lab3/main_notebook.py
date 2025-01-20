from notebook import Notebook
import os


def main():

    notebook = Notebook()

    while (True):
        os.system("cls")
        print("====== REGISTRO NOTEBOOK CAPIVARA ======")
        print("[1] REGISTRAR ALGO")
        print("[2] VERIFICAR A EXISTENCIA DE NOTAS")
        print("[3] VERIFICAR SE EXISTE UMA DETERMINADA NOTA")
        print("[4] MOSTRAR UMA NOTA ALEATORIA")
        print("[5] MOSTRAR VARIAS NOTAS ALEATORIAMENTE")
        print("[6] MOSTRAR TUDO NA LISTA")
        print("[7] REMOVER ITEM DA LISTA")
        escolha = int(input("Escolha: "))
        if escolha == 1:
            opcao = 1
            while (opcao == 1):
                os.system("cls")
                textoNovo = input("Digite o texto: ")
                notebook.StoreNote(textoNovo)
                print("Adicionado com Sucesso")

                print("\n")

                print("Deseja Continuar? [1] SIM [2] NAO")
                opcao = int(input("Opcao: "))

        elif escolha == 2:
            os.system("cls")
            print(notebook.hasNotes())
            print("\n")
            input("Pressione Enter para continuar...")
        elif escolha == 3:
            os.system("cls")
            x = input("Digite a Nota para ver se Existe: ")
            print(notebook.compareNote(x))
            print("\n")
            input("Pressione Enter para continuar...")
        elif escolha == 4:
            os.system("cls")
            notebook.showNoteRandom()
            print("\n")
            input("Pressione Enter para continuar...")
        elif escolha == 5:
            os.system("cls")
            quantidade = int(input("Quantas notas você deseja mostrar? "))
            notebook.showMultiNotRandom(quantidade)
            print("\n")
            input("Pressione Enter para continuar...")
        elif escolha == 6:
            os.system("cls")
            notebook.ListNotesfor()
            print("\n")
            input("Pressione Enter para continuar...")
        elif escolha == 7:
            os.system("cls")
            removerItem = input("Digite o item da Lista que Deseja Remover: ")
            notebook.RemoveNote(removerItem)
            notebook.ListNotesfor()
            print("\n")
            input("Pressione Enter para continuar...")


if __name__ == "__main__":
    main()
