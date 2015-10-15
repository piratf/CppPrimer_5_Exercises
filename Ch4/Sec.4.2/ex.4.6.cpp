// Q: Write a expression to determine whether an `int` value is even or odd.

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
    int in = 0;
    while (cin >> in) {
        // Better performence than ((in % 2) == 1)
        if (in & 1) {
            cout << "The number is odd." << endl;
        }
        else {
            cout << "The number is even." << endl;
        }
    }
    return 0;
}