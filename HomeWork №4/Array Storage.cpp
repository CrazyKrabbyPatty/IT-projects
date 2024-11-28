#include <iostream>

void count_values_more_t(const int* arr, int size, int& count, int t) {
    count = 0; // Инициализация счётчика
    for (int i = 0; i < size; i++) {
        if (arr[i] > t)
        {
            count++;
        }
    }
}

void print_array(const int* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void find_min_arr(const int* arrA, const int* arrB, int size, int t) {
    int countA = 0, countB = 0;

    // Считаем количество элементов > t
    count_values_more_t(arrA, size, countA, t);
    count_values_more_t(arrB, size, countB, t);

    // Сравниваем и выводим массив с меньшим количеством
    if (countA < countB) {
        std::cout << "Массив A имеет меньше элементов больших " << t << ":" << std::endl;
        print_array(arrA, size);
    }
    else {
        std::cout << "Массив B имеет меньше элементов больших " << t << ":" << std::endl;
        print_array(arrB, size);
    }
}

int main() {
    setlocale(LC_ALL, "Russian");

    int N = 5; // Размер массивов

    int* A = new int[N]; // Динамическое выделение памяти для массива A
    int* B = new int[N]; // Динамическое выделение памяти для массива B

    // Ввод массивов
    std::cout << "Введите " << N << " элементов для массива A:" << std::endl;
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    std::cout << "Введите " << N << " элементов для массива B:" << std::endl;
    for (int i = 0; i < N; i++) {
        std::cin >> B[i];
    }

    int t;
    std::cout << "Введите значение t:" << std::endl;
    std::cin >> t;

    // Поиск массива с наибольшей суммой
    find_min_arr(A, B, N, t);

    system("pause");

    // Освобождение выделенной памяти
    delete[] A;
    delete[] B;

    return 0;
}
