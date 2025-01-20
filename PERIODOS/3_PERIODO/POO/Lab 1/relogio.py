class NumberDisplay:
    def __init__(self, limit):
        self.__limit = limit
        self.__value = 0

    def increment(self):
        self.__value = (self.__value + 1) % self.__limit

    def getDisplayValue(self):
        if self.__value < 10:
            return "0" + str(self.__value)
        else:
            return str(self.__value)

    def getValue(self):
        return self.__value

    def setValue(self, replacementValue):
        if replacementValue < self.__limit:
            self.__value = replacementValue
        else:
            self.__value = 0


class ClockDisplay:
    def __init__(self):
        self.__hours = NumberDisplay(24)
        self.__minutes = NumberDisplay(60)
        self.__seconds = NumberDisplay(60)

    def tick(self):
        self.__seconds.increment()
        if self.__seconds.getDisplayValue() == "00":
            self.__minutes.increment()
            if self.__minutes.getDisplayValue() == "00":
                self.__hours.increment()

    def getTime(self):
        return f"{self.__hours.getDisplayValue()}:{self.__minutes.getDisplayValue()}:{self.__seconds.getDisplayValue()}"

    def setTime(self, hours, minutes, seconds):
        if (hours < 24 and minutes < 60 and seconds < 60):
            self.__hours.setValue(hours)
            self.__minutes.setValue(minutes)
            self.__seconds.setValue(seconds)
            self.updateDisplay()
        else:
            return -1

    def updateDisplay(self):
        self.__displayString = self.__hours.getDisplayValue() + ":" + \
            self.__minutes.getDisplayValue()
