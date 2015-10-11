// Q: Use a range `for` to change all the characters in a string to X.

#include <iostream>
using std::cout;
using std::endl;

int main() {
    std::string ori = "original string";
    cout << "before process: " <<  ori << endl;
    for (auto &ch : ori) {
        ch = 'X';
    }
    cout << " after process: " << ori << endl;
    return 0;
}