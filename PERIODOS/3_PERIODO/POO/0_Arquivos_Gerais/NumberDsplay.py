class NumberDisplay:

    #  __limit
    #  __value
    #  Construtor e
    # métodos omitidos.
    def __init__(self, rollOverLimit):
        self.__limit = rollOverLimit
        self.__value = 0
    
    def increment(self):
        self.__value = (self.__value + 1) % self.__limit

    def getDisplayValue(self):
        if(self.__value < 10):
            return "0" + str(self.__value)
        else:
            return "" + str(self.__value)

    def getValue(self):
        return self.__value

    def setValue(self, replacementValue):
        if replacementValue < self.__limit:
            self.__value = replacementValue
        else:
            return -1


class ClockDisplay:
#  “””
#  __hours - classe NumberDisplay
#  __minutes - classe NumberDisplay
#  __displayString - string
#  “””
    def __init__(self):
        self.__hours = NumberDisplay(24)
        self.__minutes= NumberDisplay(60)
        self.__updateDisplay()

    def timeTick(self):
        self.__minutes.increment()
        if(self.__minutes.getValue() == 0):
        # acaba de voltar a zero!
            self.__hours.increment()
        self.__updateDisplay()

# “””
#  Atualiza a string interna que
#  representa o mostrador.
# “””
    def __updateDisplay(self):
        self.__displayString = self.__hours.getDisplayValue() + ":" + self.__minutes.getDisplayValue()


