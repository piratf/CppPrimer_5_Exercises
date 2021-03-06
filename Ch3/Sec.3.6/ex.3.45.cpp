// Q: Rewrite the programs again, this time using `auto`.

#include <iostream>

using std::cout;
using std::endl;
using rowT = int[4];

int main() {
    int ia[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };
    // Using range for
    cout << "Using range for: " << endl;
    for (auto &row : ia) {
        for (auto num : row) {
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
    for (auto *p = ia; p != std::end(ia); ++p) {
        for (auto *q = *p; q != std::end(*p); ++q) {
            cout << *q << ' ';
        }
        cout << endl;
    }
    return 0;
}