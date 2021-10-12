#include <iostream>
#include "ext_operations.h"

int main() {
	int n;
	std::cout << "Enter the number of array elements: ";
	while (!(std::cin >> n) || n < 1 || n>1e6) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Enter the number of array elements: ";
	}

	std::vector<double> b(n);

	for (auto& i : b) {
		std::cout << "Enter the next array element: ";
		while (!(std::cin >> i)) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Enter the next array element: ";
		}
	}

	double res = 0;
	calculate(b, res, 0, n - 1);

	std::cout << res << std::endl;
}
