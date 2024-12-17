#pragma once

#ifdef MYLIBRARY_EXPORTS
#define MYLIBRARY_API __declspec(dllexport)  // ��� ���������� ����������
#else
#define MYLIBRARY_API __declspec(dllimport) // ��� ������������� ����������
#endif

extern "C" {
    // ������� ��� ���������� �������� ��������������� �������
    MYLIBRARY_API double calculateMean(const double* data, int size);  
    // ������� ��� ���������� ������������ ����������
    MYLIBRARY_API double calculateStandardDeviation(const double* data, int size, int iterations);  
} 



