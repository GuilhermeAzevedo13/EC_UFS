class Professor:
    def __init__(self, nome, matSIAPE, cargaHoraria):
        self.__nome = nome
        self.__matSIAPE = matSIAPE
        self.__cargaHoraria = cargaHoraria

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

    def maisHoras(self, maisHoras):
        self.__cargaHoraria += maisHoras

    def menosHoras(self, menosHoras):
        self.__cargaHoraria -= menosHoras
