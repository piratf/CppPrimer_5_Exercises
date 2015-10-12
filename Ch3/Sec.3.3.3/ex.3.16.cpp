// Q: Write a program to print the size and contents of `vector`s from exercise 3.13. Check whether your answers to that exercise were correct. If not, restudy & 3.3.1(p.97) until you understand why you were wrong.

#include <iostream>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::endl;

int main() {
    vector<int> v1;
    printf("The size of v1 is %d\n", v1.size());
    if (v1.size()) {
        for (auto i : v1) {
            cout << i << ' ';
        }
        cout << endl;
    }
    vector<int> v2(10);
    printf("The size of v2 is %d\n", v2.size());
    if (v2.size()) {
        for (auto i : v2) {
            cout << i << ' ';
        }
        cout << endl;
    }
    vector<int> v3(10, 42);
    printf("The size of v3 is %d\n", v3.size());
    if (v3.size()) {
        for (auto i : v3) {
            cout << i << ' ';
        }
        cout << endl;
    }
    vector<int> v4{10};
    printf("The size of v4 is %d\n", v4.size());
    if (v4.size()) {
        for (auto i : v4) {
            cout << i << ' ';
        }
        cout << endl;
    }
    vector<int> v5{10, 42};
    printf("The size of v5 is %d\n", v5.size());
    if (v5.size()) {
        for (auto i : v5) {
            cout << i << ' ';
        }
        cout << endl;
    }
    vector<string> v6{10};
    printf("The size of v6 is %d\n", v6.size());
    if (v6.size()) {
        for (auto i : v6) {
            cout << i << ' ';
        }
        cout << endl;
    }
    vector<string> v7{10, "hi"};
    printf("The size of v7 is %d\n", v7.size());
    if (v7.size()) {
        for (auto i : v7) {
            cout << i << ' ';
        }
        cout << endl;
    }
    return 0;
}