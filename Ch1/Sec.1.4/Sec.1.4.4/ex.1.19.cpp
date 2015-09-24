// Q: Revise the program you wrote for the exercises in &1.4.1(p.13) that printed a range of numbers so that is handles input in which the first number is smaller than the second.

// A:
#include <iostream>

int main() {
    int start = 0, end = 0;
    std::cout << "Please enter two number: ";
    std::cin >> start >> end;
    if (start > end) {
        start ^= end;
        end ^= start;
        start ^= end;
    }
    while (start <= end) {
        std::cout << start++ << ' ';
    }
    std::cout << std::endl;
    return 0;
}