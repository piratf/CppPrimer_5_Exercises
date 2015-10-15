// Q: Write an expression that tests for values, `a`, `b`, `c` and `d`, and ensures that `a` is greater than `b`, which is greater than `c`, which is greater than `d`.

#include <iostream>

int main() {
    int a = 0, b = 0, c = 0, d = 0;
    std::cin >> a >> b >> c >> d;
    if (a > b && b > c && c > d) {
        std::cout << "a greater b and b greater c and c greater d." << std::endl;
    }
    else {
        std::cout << "Not the right order." << endl;
    }
}