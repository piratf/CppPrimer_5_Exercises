// Q: Copy the array you defined in the previous exercise into another array. Rewrite your program to use vectors.

#include <iostream>
#include <vector>

using std::cout;
using std::endl;

int main() {
    int arr[10] = {};
    int arr2[10] = {};
    for (size_t i = 0; i != 10; ++i) {
        arr[i] = i;
    }
    cout << "The elements in arr is: " << endl;
    for (size_t i = 0; i != 10; ++i) {
        cout << arr[i] << ' ';
    }
    cout << endl;
    // Copy Array
    for (size_t i = 0; i != 10; ++i) {
        arr2[i] = arr[i];
    }
    cout << "The elements in arr2 is: " << endl;
    for (size_t i = 0; i != 10; ++i) {
        cout << arr2[i] << ' ';
    }
    cout << endl;
    // Using vector
    std::vector<int> ivec;
    std::vector<int> ivec2;
    for (int i = 0; i < 10; ++i) {
        ivec.push_back(i);
    }
    cout << "The elements in ivec is: " << endl;
    for (auto num : ivec) {
        cout << num << ' ';
    }
    cout << endl;
    ivec2 = ivec;   // Copy
    cout << "The elements in ivec2 is: " << endl;
    for (auto num : ivec2) {
        cout << num << ' ';
    }
    cout << endl;
    return 0;
}