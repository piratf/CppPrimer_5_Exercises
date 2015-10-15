// Q: Write the condition for a `while` loop that would read ints from the standard input and stop when the value read is equal to 42.

#include <iostream>

int main() {
    int num = 0;
    while (std::cin >> num && num != 42) {
        std::cout << num << std::endl;
    }
    return 0;
}