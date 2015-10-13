// Write three different versions of a program to print the elements of `ia`, One version should use a range `for` to manage the iteration, the other two should use an ordinary for loop in one using subscripts and in the other using pointers. In all three programs write all the types directly. That is, do not use a type alias, `auto`, or `decltype` to simplify the code.

#include <iostream>

using std::cout;
using std::endl;

int main() {
    int ia[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };
    // Using range for
    cout << "Using range for: " << endl;
    for (int (&row)[4] : ia) {
        for (int num : row) {
            cout << num << ' ';
        }
        cout << endl;
    }
    // Using subscripts
    cout << "Using subscripts: " << endl;
    for (size_t i = 0; i != 3; ++i) {
        for (size_t j = 0; j != 4; ++j) {
            cout << ia[i][j] << ' ';
        }
        cout << endl;
    }
    // Using pointers
    cout << "Using pointers: " << endl;
    for (int (*p)[4] = ia; p != std::end(ia); ++p) {
        for (int *q = *p; q != std::end(*p); ++q) {
            cout << *q << ' ';
        }
        cout << endl;
    }
    return 0;
}