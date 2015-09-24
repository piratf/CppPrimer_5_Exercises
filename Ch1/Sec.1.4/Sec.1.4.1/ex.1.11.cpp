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