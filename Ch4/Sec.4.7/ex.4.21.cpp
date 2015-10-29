// Q: Write a program to use a conditional operator to find the elements in a `vector<int>` that have odd value and double the value of each such element.

#include <iostream>
#include <vector>

using std::cout;
using std::endl;

int main() {
    std::vector<int> ivec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Before process: " << endl;
    for (int value : ivec) {
        cout << value << ' ';
    }
    cout << endl;
    // double odd numbers
    for (int &value : ivec) {
        value = ((value & 1) ? (value << 1) : value);
    }
    cout << "After process: " << endl;
    for (const int &value : ivec) {
        cout << value << ' ';
    }
    cout << endl;
    return 0;
}