// Q: Write a program to read a sequence of `ints` from `cin` and store those values in a vector.

#include <iostream>
#include <vector>

int main() {
    int num = 0;
    std::vector<int> ivec;
    while (std::cin >> num) {
        ivec.push_back(num);
    }
    return 0;
}