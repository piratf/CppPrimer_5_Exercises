#include <iostream>

int main() {
    int var = 10;
    while (var >= 0) {
        std::cout << var-- << ' ';
    }
    std::cout << std::endl;
    return 0;
}