// Q: Write your own version of a program that prints the sum of a set of integers read from cin.

#include <iostream>

int main() {
    int sum = 0;
    std::cout << "Please enter numbers with ctrl-z represent the end of input: ";
    for (int var = 0; std::cin >> var; ) {
        sum += var;
    }
    std::cout << "The sum of the numbers you inputed is: " << sum << std::endl;
}