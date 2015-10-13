// Q: Write a program to copy a `vector` of `int`s into an array of `int`s.

#include <iostream>
#include <vector>

using std::cout;
using std::endl;

int main() {
    std::vector<int> ivec(10, 42);
    int arr[10] = {};
    // copy
    for (decltype(ivec.size()) i = 0; i != ivec.size(); ++i) {
        arr[i] = ivec[i];
    }
    // print
    for (int num : arr) {
        cout << num << ' ';
    }
    cout << endl;
    return 0;
}