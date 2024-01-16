import ctypes
import random

operator = ctypes.CDLL('./100-operations.so')
num1 = random.randint(-111, 111)
num2 = random.randint(-111, 111)

print("{} + {} = {}".format(num1, num2, operator.add(num1, num2)))
print("{} - {} = {}".format(num1, num2, operator.sub(num1, num2)))
print("{} * {} = {}".format(num1, num2, operator.mul(num1, num2)))
print("{} / {} = {}".format(num1, num2, operator.div(num1, num2)))
print("{} % {} = {}".format(num1, num2, operator.mod(num1, num2)))
