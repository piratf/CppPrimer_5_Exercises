#include <iostream>
using std::cout;
using std::endl;

int main() {
    std::string ori = "original string";
    cout << "before process with while: " <<  ori << endl;
    decltype(ori.size()) i = 0;
    // while loop
    while (i != ori.size()) {
        ori[i] = 'X';
        ++i;
    }
    cout << " after process with while: " << ori << endl;
    // traditional for loop 
    ori = "original string";
    cout << "before process with for: " <<  ori << endl;
    for (i = 0; i < ori.size(); ++i) {
        ori[i] = 'X';
    }
    cout << " after process with for: " << ori << endl;
    return 0;
}