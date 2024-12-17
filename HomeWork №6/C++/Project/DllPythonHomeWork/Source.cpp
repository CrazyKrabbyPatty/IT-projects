#include "pch.h"
#include "Header.h"
#include <cmath>
#include <ctime>

// Функция для вычисления среднего значения
double calculateMean(const double* data, int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += data[i];
    }
    return sum / size;
}

// Функция для вычисления скорости вычисления стандартного отклонения
double calculateStandardDeviation(const double* data, int size, int iterations) {
    double elapsed_time = 0.0;

    for (int i = 0; i < iterations; i++) {
        clock_t start_time = clock();

        double mean = calculateMean(data, size);
        double varianceSum = 0.0;

        for (int j = 0; j < size; j++) {
            varianceSum += (data[j] - mean) * (data[j] - mean);
        }

        double variance = std::sqrt(varianceSum / size);

        clock_t end_time = clock();
        elapsed_time += static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC;
    }

    return elapsed_time; 
}


