from relogio import *

testarNumber = NumberDisplay()

testarNumber.increment(12)
print(testarNumber.getDisplayValue())

testarNumber.setValue(1)
print(testarNumber.getValue())


reloginho = ClockDisplay()

print(reloginho.getTime())

for i in range(3600):
    reloginho.tick()
print(reloginho.getTime())

reloginho.setTime(6, 50, 30)

print(reloginho.getTime())

