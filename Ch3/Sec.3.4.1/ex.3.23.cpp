// Q: Write a program to create a `vector` with ten `int` elements. Using an iterator, assign each element a value that is twice its current value. Test your program by printing the `vector`.

#include <iostream>
#include <vector>

using std::cout;
using std::endl;

int main() {
    std::vector<int> ivec(10, 42);
    cout << "Before process: ---" << endl;
    for (int i : ivec) {
        cout << i << ' ';
    }
    cout << endl;
    for (auto it = ivec.begin(); it != ivec.end(); ++it) {
        *it <<= 1;
    }
    cout << "After process: ---" << endl;
    for (int i : ivec) {
        cout << i << ' ';
    }
    cout << endl;
}