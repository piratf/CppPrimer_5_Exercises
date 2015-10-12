// Q: Read a set of integers into a vector. Print the sum of each pair of adjacent elements. Change your program so that it prints the sum of the first and last elements, followed by the sum of the second and second-to-last, and so on.

#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main() {
    freopen("ex.3.20.txt", "r", stdin);
    int num;
    vector<int> ivec;
    while (cin >> num) {
        ivec.push_back(num);
    }
    for (auto n : ivec) {
        cout << n << ' ';
    } cout << endl;

    cout << "-----------Adjacent elements------------" << endl;
    num = *ivec.begin();
    for (auto n : ivec) {
        cout << num + n << ' ';
        num = n;
    } 
    cout << endl;
    cout << "-----------first-and-last elements------------" << endl;
    decltype(ivec.size()) len = ivec.size() >> 1;
    for (decltype(len) i = 0; i < len; ++i) {
        cout << ivec[i] + ivec[ivec.size() - 1 - i] << ' ';
    }
    if (len & 1) {
        cout << ivec[len];
    }
    cout << endl;
    return 0;
}