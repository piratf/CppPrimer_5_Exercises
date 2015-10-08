// Q: Write a program that uses a while to sum the numbers from 50 to 100.

#include <iostream>

int main() {
    int var = 50, sum = 0;
    while (var <= 100) {
        sum += var;
        ++var;
    }
    std::cout << "The sum of 50 to 100 inclusive is " << sum << std::endl;
    return 0;
}