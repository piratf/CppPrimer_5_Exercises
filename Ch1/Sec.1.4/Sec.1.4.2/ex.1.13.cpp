// Q: Rewrite the exercises from & 1.4.1(p.13) using for loops

// A:
// ex.1.9 with for loop
// #include <iostream>

// int main() {
//     int sum = 0;
//     for (int var = 50; var <= 100; ++var) {
//         sum += var;
//     }
//     std::cout << "The sum of 50 to 100 inclusive is " << sum << std::endl;
//     return 0;
// }

// ex.1.10 with for loop

// #include <iostream>

// int main() {
//     for (int var = 10; var >= 0; --var) {
//         std::cout << var << ' ';
//     }
//     std::cout << std::endl;
//     return 0;
// }

// ex.1.11 with for loop
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
    for (; start <= end; ++start) {
        std::cout << start << ' ';
    }
    std::cout << std::endl;
    return 0;
}