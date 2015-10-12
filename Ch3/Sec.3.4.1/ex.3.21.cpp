// Q: Redo the first exercise from & 3.3.3(p.105) using iterators.

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
        for (auto it = v1.cbegin(); it != v1.cend(); it++) {
            cout << *it << ' ';
        }
        cout << endl;
    }
    vector<int> v2(10);
    printf("The size of v2 is %d\n", v2.size());
    if (v2.size()) {
        for (auto it = v2.cbegin(); it != v2.cend(); it++) {
            cout << *it << ' ';
        }
        cout << endl;
    }
    vector<int> v3(10, 42);
    printf("The size of v3 is %d\n", v3.size());
    if (v3.size()) {
        for (auto it = v3.cbegin(); it != v3.cend(); it++) {
            cout << *it << ' ';
        }
        cout << endl;
    }
    vector<int> v4{10};
    printf("The size of v4 is %d\n", v4.size());
    if (v4.size()) {
        for (auto it = v4.cbegin(); it != v4.cend(); it++) {
            cout << *it << ' ';
        }
        cout << endl;
    }
    vector<int> v5{10, 42};
    printf("The size of v5 is %d\n", v5.size());
    if (v5.size()) {
        for (auto it = v5.cbegin(); it != v5.cend(); it++) {
            cout << *it << ' ';
        }
        cout << endl;
    }
    vector<string> v6{10};
    printf("The size of v6 is %d\n", v6.size());
    if (v6.size()) {
        for (auto it = v6.cbegin(); it != v6.cend(); it++) {
            cout << *it << ' ';
        }
        cout << endl;
    }
    vector<string> v7{10, "hi"};
    printf("The size of v7 is %d\n", v7.size());
    if (v7.size()) {
        for (auto it = v7.cbegin(); it != v7.cend(); it++) {
            cout << *it << ' ';
        }
        cout << endl;
    }
    return 0;
}