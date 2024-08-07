import tkinter as tk
from tkinter import ttk, messagebox
from Conta import Conta

class App:
    def __init__(self, root):
        self.root = root
        self.root.title("Conta Bancaria")
        self.root.geometry("700x500")
        self.titulo = tk.Label(root, text="CONTA BANCÁRIA", font=("Century Gothic bold", 24), fg='#000')  
        self.titulo.pack(padx=20, pady=10)
        self.cliente_entry = None
        self.numeroConta_entry = None
        self.todo_sistema()
        
    def todo_sistema(self):
        self.frame_cliente = ttk.LabelFrame(root, text="Dados do Cliente")
        self.frame_cliente.pack(padx=10, pady=10, fill=tk.BOTH, expand=True)
        
        cliente_label = tk.Label(self.frame_cliente, text="Nome do Cliente", font=("Century Gothic bold", 12))
        cliente_label.pack()
        self.cliente_entry = tk.Entry(self.frame_cliente)  # Torne a entrada do cliente um atributo da classe
        self.cliente_entry.pack()
        
        numeroConta_label = tk.Label(self.frame_cliente, text="Numero da Conta", font=("Century Gothic bold", 12))
        numeroConta_label.pack()
        self.numeroConta_entry = tk.Entry(self.frame_cliente)  # Torne a entrada do número da conta um atributo da classe
        self.numeroConta_entry.pack()
        
        # Crie um novo LabelFrame para agrupar o campo Numero da Conta e o botao
        frame_botao = ttk.LabelFrame(self.frame_cliente, text="")
        frame_botao.pack(padx=10, pady=10, fill=tk.BOTH, expand=True)
        
        registrar_button = tk.Button(frame_botao, text="ABRIR CONTA", command=self.abrir_conta)
        registrar_button.pack()
        
    def abrir_conta(self):
        cliente = self.cliente_entry.get()
        numeroConta = self.numeroConta_entry.get()
        
        # Crie uma nova janela de nível superior
        janela = tk.Toplevel(self.root)
        janela.geometry("500x300")
        
        tentativas = 0
        minha_conta = None
        
        while(tentativas < 3):
            if not cliente:
                messagebox.showinfo("Sistema","Nome do correntista não pode estar vazio.")
                tentativas += 1
                continue
            # Validar se o número da conta é um número válido
            if not numeroConta.isdigit():
                messagebox.showinfo("Sistema", "Número da conta deve ser um valor numérico válido.")
                continue
            try:
                minha_conta = Conta(cliente, numeroConta)
            except ValueError as error:
                tentativas += 1
                messagebox.showinfo("Sistema", f"Erro: {error}")
            else:
                break
        
        # Menu interativo
        self.criar_menu_interativo(janela)
        
    def criar_menu_interativo(self, janela):
        # Crie um menu suspenso (dropdown menu)
        menu = tk.Menu(janela)
        janela.config(menu=menu)
        
        # opção no menu
        opcao_menu = tk.Menu(menu)
        menu.add_cascade(label="Opções", menu=opcao_menu)
        
        #funções interativas
        opcao_menu.add_command(label="DEPOSITAR", command=self.depositar)
        opcao_menu.add_command(label="SACAR", command=self.sacar)
        opcao_menu.add_command(label="VERIFICAR SALDO", command=self.sacar)
        opcao_menu.add_separator()
        opcao_menu.add_command(label="Fechar Conta", command=self.fechar_conta)
        
    def depositar(self):
        tentativas = 0
        while (tentativas < 3):
            pass
        
    def sacar(self):
        # Lógica para sacar dinheiro da conta
        pass
        
    def fechar_conta(self):
        # Lógica para fechar a conta
        pass

if __name__ == "__main__":
    root = tk.Tk()
    app = App(root)
    root.mainloop()
