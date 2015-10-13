// Q: Using pointers, write a program to set the elements in an array to zero.

#include <iostream>

using std::cout;
using std::endl;

int main() {
    int arr[10] = {42};
    cout << "The oridinary contents of array are: " << endl;
    for (auto i : arr) {
        cout << i << ' ';
    }
    cout << endl;
    // Now set them to zero
    for (int *p = std::begin(arr); p != std::end(arr); ++p) {
        *p = 0;
    }
    cout << "The contents after process are: " << endl;
    for (auto i : arr) {
        cout << i << ' ';
    }
    cout << endl;
    return 0;
}