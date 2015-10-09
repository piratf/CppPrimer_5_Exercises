// Q: Write a program to read the standard input a line at a time. Modify your program to read a word at a time;

#include <iostream>
using namespace std;

int main() {
    string var;
    while (getline(cin, var)) {
        cout << var << endl;
    }

    /** read a word */
    // while (cin >> var) {
    //     cout << var << endl;
    // }
    return 0;
}