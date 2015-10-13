// Q: Write a program to initialize a vector from an array of `int`s.

#include <iostream>
#include <vector>

using std::cout;
using std::endl;

int main() {
    int arr[10] = {42, 42, 4, 2, 4, 2};
    // initialize
    std::vector<int> ivec(std::begin(arr), std::end(arr));
    // print
    for (int num : ivec) {
        cout << num << ' ';
    }
    cout << endl;
    return 0;
}