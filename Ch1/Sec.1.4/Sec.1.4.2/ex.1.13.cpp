// ---

// Q: Rewrite the exercises from & 1.4.1(p.13) using for loops

// ---

// A:

#include <iostream>

int main() {
    std::cout << "-------Here is the ex.1.09 part--------" << std::endl;
    int sum = 0;
    for (int var = 50; var <= 100; ++var) {
        sum += var;
    }
    std::cout << "The sum of 50 to 100 inclusive is " << sum << std::endl;
    std::cout << "--------ex.1.09 part end here----------" << std::endl;
    std::cout << "-------Here is the ex.1.10 part--------" << std::endl;
    for (int var = 10; var >= 0; --var) {
        std::cout << var << ' ';
    }
    std::cout << std::endl;
    std::cout << "--------ex.1.10 part end here----------" << std::endl;
    std::cout << "-------Here is the ex.1.11 part--------" << std::endl;
    int start = 0, end = 0;
    std::cout << "Please enter two number: ";
    std::cin >> start >> end;
    if (start > end) {
        start ^= end;
        end ^= start;
        start ^= end;
    }
    for (; start <= end; ++start) {
        std::cout << start << ' ';
    }
    std::cout << std::endl;
    std::cout << "--------ex.1.11 part end here----------" << std::endl;
    return 0;
}