// Q: Write a program to compare two arrays for equality. Write a similar program to compare two vectors.

#include <iostream>
#include <vector>

using std::cout;
using std::endl;

bool isArrEqual(int *lhead, int *lend, int *rhead, int *rend) {
    if ((lend - lhead) != (rend - rhead)) {
        return false;
    }
    for (int *l = lhead, *r = rhead; l != lend; ++l, ++r) {
        if (*l != *r) {
            return false;
        }
    }
    return true;
}

int main() {
    // compare array
    int arr[10] = {42};
    int arr2[10] = {42};
    if (isArrEqual(std::begin(arr), std::end(arr), std::begin(arr2), std::end(arr2))) {
        cout << "The two array is equal." << endl;
    }
    else {
        cout << "The two array is not equal." << endl;
    }
    // compare vector
    std::vector<int> ivec = {10};
    std::vector<int> ivec2 = {5};
    if (ivec == ivec2) {
        cout << "The two vector is equal." << endl;
    }
    else {
        cout << "The two vector is not equal." << endl;
    }
    return 0;
}