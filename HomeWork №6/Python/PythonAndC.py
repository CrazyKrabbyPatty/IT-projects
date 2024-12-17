import time
from ctypes import *

Library = CDLL("./DllPythonHomeWork.dll")
Library.calculateStandardDeviation.argtypes = [POINTER(c_double), c_int, c_int]
Library.calculateStandardDeviation.restype = c_double

a = [1.999, 5.345, 10345.12234, -2342.43, 7666.67, 333.01, 99.00001, 234.234, -8900.777]
c_array = (c_double * len(a))(*a)

def calculateStandardDeviationPy(mass, iterations):
    all_time = 0.0
    for i in range(iterations):
        PyStartTime = time.time()
        mean = sum(mass)
        varianceSum = 0.0
        for i in mass:
            varianceSum += (i - mean) ** 2
        
        variance = (varianceSum / len(mass)) ** 0.5
        all_time += (time.time() - PyStartTime)
    return all_time

iterations = 100000000

print(Library.calculateStandardDeviation(c_array, len(a), iterations))
print(calculateStandardDeviationPy(a, iterations))



