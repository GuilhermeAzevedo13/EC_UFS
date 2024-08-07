from Conta import Conta
import os

def main():
    tentativas = 0
    minha_conta = None
    
    while tentativas < 3:
        nome_correntista = input("Digite o nome do Correntista: ")
        if not nome_correntista:
            print("Nome do correntista não pode estar vazio.")
            tentativas += 1
            continue
        numero_conta = int(input("Digite o numero do Conta: "))
        if not numero_conta:
            print("Digite um número de conta Alfa Numerico")
        try:
            minha_conta = Conta(nome_correntista, numero_conta)
        except ValueError as error:
            tentativas += 1
            print(f"Erro: {error}")
        else:
            break
            
    
    while True:
        print("\n>>>> MENU <<<<")
        print("[1] DEPOSITAR")
        print("[2] SACAR")
        print("[3] VERIFICAR SALDO")
        print("[4] ATIVAR CONTA")
        print("[5] DESATIVAR CONTA")
        print("[6] SAIR DO APP")
        
        escolha = int(input("Escolha uma opcao: "))
        
        if escolha == 1:
            tentativas = 0
            while tentativas<3:
                valor = float(input("Digite o valor a ser depositado: "))
                try:
                    minha_conta.depositar(valor)
                    print(f"Deposito de {valor} realizado com sucesso.")
                except ValueError as error:
                    tentativas += 1
                    print(f"Erro: {error}")
                else:
                    break
                
        elif escolha == 2:
            tentativas = 0
            while tentativas < 3:
                valor = float(input("Digite o valor a ser sacado: "))
                try:
                    minha_conta.sacar(valor)
                    print(f"Saque do {valor} realizado com sucesso.")
                except ValueError as error:
                    tentativas += 1
                    print(f"Erro: {error}")
                else:
                    break
                    
        elif escolha == 3:
                try:
                    saldo = minha_conta.get_saldoDisponivel()
                    print(f"\nSaldo Disponivel: {saldo}")
                except ValueError as error:
                    print(f"Erro: {error}")
                    
        elif escolha == 4:
                try:
                    minha_conta.ativar_Conta()
                    if minha_conta.get_SituacaoConta() == True:
                        print("Conta Ativa")
                except ValueError as error:
                    print(f"Erro: {error}")
                    
        elif escolha == 5:
                try:
                    minha_conta.desativar_Conta()
                    if minha_conta.get_SituacaoConta() == False:
                        print("Conta Desativada")
                except ValueError as error:
                    print(f"Erro: {error}")
                    
        elif escolha == 6:
            print("SAINDO...")
            break
        else:
            print("Opcao invalida. Tente Novamente...")
            
        
    

if __name__ == "__main__":
    main()