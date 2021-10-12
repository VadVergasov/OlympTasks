#include <iostream>

#include "vector_addon.h"

int main(){
    std::vector<double> x(10), y(10), res(10);
    
    for (auto& i : x) {
        std::cout << "Enter the next element of the array: ";
        while (!(std::cin >> i)) {  
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max());
            std::cout << "Enter the next element of the array: ";
        }
    }

    std::cout << "Y:\n";
    generate_second(y);
    for (auto i : y) {
        std::cout << i << " ";
    }
    multiply(x, y, res);

    std::cout << std::endl << "Result:\n";
    for (auto i :res) {
        std::cout << i << " ";
    }
}
