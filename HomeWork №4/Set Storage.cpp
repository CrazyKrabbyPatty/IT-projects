#include <iostream>
#include <set>

void set_input(std::set<int> SET, int size) {
	int number;
	for(int i = 0; i < size; i++)
	{	
		std::cin >> number;
		SET.insert(number);
	}
}

int main() {
	int N;
	std::cin >> N;
	std::set<int> setA{};
	std::set<int> setB{};
	set_input(setA*, N);
	for (int n : setA) {
		std::cout << n << "\t";
	}
	std::cout << std::endl;
	return 0;
}