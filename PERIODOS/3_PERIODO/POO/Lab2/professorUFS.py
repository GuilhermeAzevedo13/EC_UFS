class ProfessorUFS:
    def __init__(self, nome, matSIAPE, cargaHoraria):
        self.__nome = nome
        self.__matSIAPE = matSIAPE
        self.__cargaHoraria = cargaHoraria
        self.__cargaHorariaMIN = 8
        self.__cargaHorariaMAX = 20

    def getNome(self):
        return self.__nome

    def getMatSIAPE(self):
        return self.__matSIAPE

    def getCargaHoraria(self):
        return self.__cargaHoraria

    def setNome(self, nome):
        self.__nome = nome

    def setMatSIAPE(self, matSIAPE):
        self.__matSIAPE = matSIAPE

    def setCargaHoraria(self, cargaHoraria):
        self.__cargaHoraria = cargaHoraria

    def maisHoras(self, novaCargaHoraria, maisHoras):
        if novaCargaHoraria >= self.__cargaHorariaMIN and novaCargaHoraria <= self.__cargaHorariaMAX:
            self.__cargaHoraria += maisHoras
        else:
            print("Não é possível adicionar horas menores que 8h ou maiores que 20h")

    def menosHoras(self, novaCargaHoraria, menosHoras):
        if novaCargaHoraria >= self.__cargaHorariaMIN and novaCargaHoraria <= self.__cargaHorariaMAX:
            self.__cargaHoraria -= menosHoras
        else:
            print("Não é possível adicionar horas menores que 8h ou maiores que 20h")
