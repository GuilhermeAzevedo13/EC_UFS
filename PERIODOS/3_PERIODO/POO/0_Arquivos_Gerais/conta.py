import os


class Conta:
    def __init__(self, numero, titular=None, saldo=0.0, limite=0.0):
        self.__numero = numero
        self.__titular = titular
        self.__saldo = saldo
        self.__limite = limite

    def get_numero(self):
        return self.__numero

    def get_titular(self):
        return self.__titular

    def deposita(self, valor):
        self.__saldo += valor

    def saca(self, valor):
        if self.__saldo < valor:
            return False
        else:
            self.__saldo -= valor
            return True

    def transfere_para(self, destino, valor):
        retirou = self.saca(valor)
        if retirou == False:
            return False
        else:
            destino.deposita(valor)
            return True

    def extrato(self):
        print("Número: {}\nSaldo: {}".format(self.__numero, self.__saldo))
        if self.__titular:
            print("Cliente: {} {} - CPF: {}".format(self.__titular.nome,
                  self.__titular.sobrenome, self.__titular.cpf))


class ClienteTitular:
    def __init__(self, nome, sobrenome, cpf):
        self.__nome = nome
        self.__sobrenome = sobrenome
        self.__cpf = cpf

    def get_nome(self):
        return self.__nome

    def get_sobrenome(self):
        return self.__sobrenome

    def get_cpf(self):
        return self.__cpf

class Data:
    def __init__(self, dia, mes, ano):
        self.dia = dia
        self.mes = mes
        self.ano = ano


os.system("cls")
cliente = ClienteTitular('Guilherme', 'Silva', '12345678901')
conta = Conta('123-4', cliente, 120.0, 1000.0)

print(conta.get_numero())
print(conta.get_titular().get_nome())
