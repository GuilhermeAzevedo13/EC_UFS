import random


class Notebook:
    def __init__(self):
        self.__notes = list()

    def StoreNote(self, note):
        self.__notes.append(note)

    def NumberOfNotes(self):
        return len(self.__notes)

    def showNote(self, noteNumber):
        if noteNumber < 0 or noteNumber >= self.NumberOfNotes():
            print("Este não é um número de nota válido")
        else:
            print(self.__notes[noteNumber])

    def RemoveNote(self, note):
        if note in self.__notes:
            self.__notes.remove(note)
            print("Nota Removida com Sucesso!!!\n")
        else:
            print("Esta não é uma nota válida")

    def ListNotesfor(self):
        for note in self.__notes:
            print(note, end=' ')

    def hasNotes(self):
        return self.NumberOfNotes() > 0

    def compareNote(self, note):
        return note in self.__notes

    def showNoteRandom(self):
        notaAleatoria = random.choice(self.__notes)
        print("\nNota Aleatória: ", notaAleatoria)

    def showMultiNotRandom(self, quantidade):
        variosAleatorios = random.sample(self.__notes, min(quantidade, self.NumberOfNotes()))
        print("\nMostrar Notas Aleatórias: ", variosAleatorios)

    def ListNotes(self):
        index = 0
        while index < self.NumberOfNotes():
            print(self.__notes[index])
            index += 1


"""

Essa classe chamada Notebook parece ser uma representação básica de um caderno que permite 
armazenar, exibir e remover notas. Aqui está a descrição de cada método da classe:

#1 __init__(self)

Construtor da classe, inicializa o objeto Notebook criando uma lista vazia __notes para armazenar as notas.

#2 StoreNote(self, note)

Adiciona uma nota à lista __notes. Recebe uma nota como argumento e a insere no final da lista.

#3 NumberOfNotes(self)

Retorna o número total de notas armazenadas no caderno. É simplesmente o tamanho da lista __notes.

#4 showNote(self, noteNumber)

Mostra a nota armazenada no índice específico da lista __notes. Recebe como argumento noteNumber, o 
índice da nota a ser exibida. Se o número for inválido (fora do intervalo da lista), uma mensagem de 
erro é exibida.

#5 RemoveNote(self, note)

Remove uma nota específica da lista __notes. Recebe a nota a ser removida como argumento. Se a nota estiver 
na lista, ela é removida; caso contrário, é exibida uma mensagem informando que a nota não é válida.

#6 ListNotesfor(self)

Exibe todas as notas armazenadas na lista __notes. Percorre a lista e imprime cada nota, separadas por espaço.

#7 hasNotes(self)

Verifica se o caderno possui alguma nota. Retorna True se houver notas na lista __notes e False se a lista 
estiver vazia.

#8 compareNote(self, note)

Verifica se uma nota específica está armazenada no caderno. Recebe a nota como argumento e retorna True se 
ela estiver na lista __notes, caso contrário, retorna False.

#9 showNoteRandom(self)

Mostra uma nota aleatória do caderno. Escolhe uma nota aleatoriamente da lista __notes usando o módulo random 
e imprime a nota selecionada.

#10 showMultiNotRandom(self, quantidade)

Mostra várias notas aleatórias do caderno. Seleciona quantidade notas aleatórias da lista __notes usando 
o módulo random.sample() e imprime as notas selecionadas.

#11 istNotes(self)

Exibe todas as notas armazenadas no caderno. Percorre a lista __notes usando um loop while e imprime cada 
nota em uma nova linha.



random.sample(self.__notes, min(quantidade, self.NumberOfNotes()))

A função random.sample() é usada para selecionar aleatoriamente itens de uma lista. Neste caso, 
ela recebe dois argumentos: self.__notes, que é a lista que contém as notas armazenadas no caderno, 
e min(quantidade, self.NumberOfNotes()).

quantidade é o número de notas aleatórias que o método deve mostrar.
self.NumberOfNotes() é usado para obter o número total de notas armazenadas no caderno.
min(quantidade, self.NumberOfNotes()) é usado para garantir que o número de notas aleatórias a serem 
selecionadas não exceda o número total de notas no caderno. Se quantidade for maior que o número de 
notas no caderno, então min() irá selecionar o menor valor entre quantidade e o número de notas.
variosAleatorios = random.sample(...)

O resultado da chamada a random.sample() é armazenado na variável variosAleatorios. Essa variável 
conterá uma lista contendo as notas selecionadas aleatoriamente do caderno.
print("\nMostrar Notas Aleatórias: ", variosAleatorios)

O método imprime a mensagem "Mostrar Notas Aleatórias:" seguida pela lista variosAleatorios, que contém 
as notas selecionadas aleatoriamente.

As notas serão exibidas exatamente como foram selecionadas, não necessariamente em ordem numérica ou 
alfabética, pois foram escolhidas aleatoriamente.

"""
