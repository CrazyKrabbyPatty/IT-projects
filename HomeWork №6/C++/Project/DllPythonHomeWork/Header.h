#pragma once

#ifdef MYLIBRARY_EXPORTS
#define MYLIBRARY_API __declspec(dllexport)  // Для компиляции библиотеки
#else
#define MYLIBRARY_API __declspec(dllimport) // Для использования библиотеки
#endif

extern "C" {
    // Функция для вычисления среднего арифмитического массива
    MYLIBRARY_API double calculateMean(const double* data, int size);  
    // Функция для вычисления стандартного отклонения
    MYLIBRARY_API double calculateStandardDeviation(const double* data, int size, int iterations);  
} 



