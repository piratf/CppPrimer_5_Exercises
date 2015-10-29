// Q: Extend the program that assigned `high pass`, `pass`, and `fail` grades to also assign low pass for grades between `60` and `75` includive. Write two versions: One version that uses only conditional operators; the other should use one or more `if` statements. Which version do you think is easier to understand and why?

#include <iostream>
#include <vector>

using std::cout;
using std::endl;

int main() {
    freopen("ex.4.22.data", "r", stdin);
    int num;
    std::vector<int> scores;
    while (std::cin >> num) {
        scores.push_back(num);
    }

    for (const int &num : scores) {
        cout << num << ' ';
    }
    cout << endl;

    // Uses only conditional
    for (const int &num : scores) {
        cout << ((num > 90) ? "high pass" : 
                ((num < 60) ? "fail" : 
                ((num >= 60 && num <= 75) ? "low pass" 
                : "pass"))) 
             << endl;
    }

    // Uses `if` statements
    for (const int &num : scores) {
        if (num > 90) {
            cout << "high pass";
        }
        else if (num < 60) {
            cout << "fail";
        }
        else if (num >= 60 && num <= 75) {
            cout << "low pass";
        }
        else {
            cout << "pass";
        } 
        cout << endl;
    }

    return 0;
}