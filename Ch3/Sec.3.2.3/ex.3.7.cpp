#include <iostream>
using std::cout;
using std::endl;

int main() {
    std::string ori = "original string";
    cout << "before process: " <<  ori << endl;
    for (char ch : ori) {
        ch = 'X';
    }
    cout << " after process: " << ori << endl;
    return 0;
}