#include <iostream>
#include <set>

void set_input(std::set<int>& SET, int size) {
	int number;
	for(int i = 0; i < size; i++)
	{	
		std::cin >> number;
		SET.insert(number);
	}
}

std::set<int> numbers_in_both_sets(std::set<int> SET1, std::set<int> SET2, int size) {
	std::set<int> FSET{};
	for(const int n : SET1)
	{
		if (SET2.find(n) != SET2.end())
		{
			FSET.insert(n);
		}
	}
	return FSET;
}

int main() {
	setlocale(LC_ALL, "Russian");

	std::cout << "Введите размер множеств:" << std::endl;
	int N;
	std::cin >> N;

	std::set<int> setA{};
	std::set<int> setB{};

	std::cout << "Введите числа в множество A:" << std::endl;
	set_input(setA, N);

	std::cout << "Введите числа в множество B:" << std :: endl;
	set_input(setB, N);

	std::set<int> IntersectionSet = numbers_in_both_sets(setA, setB, N);

	int t;
	std::cout << "Введите t:" << std::endl;
	std::cin >> t;

	std::set<int> FSET{};
	for(const int n : IntersectionSet)
	{
		if (n > t)
		{
			FSET.insert(n);
		}
	}

	for (int n : FSET)
		std::cout << n << " ";
	std::cout << std::endl;

	return 0;
}