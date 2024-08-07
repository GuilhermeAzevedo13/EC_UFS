class Conta:
    def __init__(self, nomeCorrentista, numeroConta):
        self.__nomeCorrentista = self.set_nomeCorrentista(nomeCorrentista)
        self.__numeroConta = self.set_numeroConta(numeroConta)
        self.__saldoDisponivel = 0
        self.__contaAtiva = True
        
    def get_nomeCorrentista(self):
        return self.__nomeCorrentista
    
    def set_nomeCorrentista(self, nomeCorrentista):
        if nomeCorrentista != None:
            self.__nomeCorrentista = nomeCorrentista
        else:
            raise ValueError("Insira um nome Valido")
        
    def get_numeroConta(self):
        return self.__numeroConta
    
    def set_numeroConta(self, numeroConta):
        if numeroConta != None:
            numeroConta = int(numeroConta)
            if numeroConta > 0:
                self.__numeroConta = numeroConta
            else:
                raise ValueError("Numero da Conta Negativa")
        else:
            raise ValueError("Insira um numero de Conta Valido")
        
    def get_saldoDisponivel(self):
        return self.__saldoDisponivel
    
    def get_SituacaoConta(self):
        return self.__contaAtiva
    
    def ativar_Conta(self):
        self.__contaAtiva = True
        
    def desativar_Conta(self):
        self.__contaAtiva = False
        
    def depositar(self, valor):
        if self.__contaAtiva == True:
            if valor > 0:
                self.__saldoDisponivel += valor
            else:
                raise ValueError("O valor do deposito deve ser positivo")       
        else:
            raise ValueError("A conta esta Desativada")

        
    def sacar(self, valor):
        if self.__contaAtiva == True:
            if valor > 0:
                if self.__saldoDisponivel >= valor:
                    self.__saldoDisponivel -= valor
                else:
                    raise ValueError("Saldo Insuficiente para Saque")
            else:
                raise ValueError("O valor do Saque deve ser positivo.")
        else:
            raise ValueError("A conta esta desativada, nao eh possivel sacar.")