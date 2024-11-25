#include <iostream>

int main() {
    int number, multiples;


    std::cout << "Enter a number: ";
    std::cin >> number;


    std::cout << "Enter how many multiples: ";
    std::cin >> multiples;

    std::cout << "The first " << multiples << " multiples of " << number << " are:" << std::endl;


    for (int i = 1; i <= multiples; i++) {
        std::cout << number * i << " ";
    }

    std::cout << std::endl;
    return 0;
}

