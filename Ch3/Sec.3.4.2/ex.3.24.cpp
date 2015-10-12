// Q: Redo the last exercise from & 3.3.3(p.105) using iterators.

#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main() {
    freopen("ex.3.24.txt", "r", stdin);
    int num;
    vector<int> ivec;
    while (cin >> num) {
        ivec.push_back(num);
    }

    if (ivec.cbegin() == ivec.cend()) {
        std::cerr << "None data." << endl;
        return 0;
    }

    cout << "-----------Original elements------------" << endl;
    for (auto n : ivec) {
        cout << n << ' ';
    } cout << endl;

    cout << "-----------Adjacent elements------------" << endl;
    num = *ivec.cbegin();
    for (auto it = ivec.cbegin(); it != ivec.cend(); ++it) {
        cout << num + *it << ' ';
        num = *it;
    }
    cout << endl;

    cout << "-----------first-and-last elements------------" << endl;
    auto mid = ivec.cbegin() + (ivec.size() >> 1);
    for (auto it = ivec.cbegin(); it != mid; ++it) {
        cout << *it + *(ivec.cend() - (it - ivec.cbegin()) - 1) << ' ';
    }
    if (ivec.size() & 1) {
        cout << *mid;
    }
    cout << endl;
    return 0;
}