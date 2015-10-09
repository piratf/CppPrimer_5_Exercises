// Q: Write a program to read two strings and report whether the strings are equal. If not, report which of the two is larger. Now, change the program to report whether the strings have the same length, and if not, report which is longer.

#include <iostream>
using namespace std;

int main() {
    string str1, str2;
    while (cin >> str1 >> str2) {
        if (str1 == str2) {
            cout << "The two strings are equal." << endl;
        }
        else {
            cout << "The two strings are different." << endl;
            cout << "The " << ((str1 > str2) ? "first" : "second") << " one is larger" << endl;
        }

        if (str1.length() == str2.length()) {
            cout << "The two strings have the same length." << endl;
        }
        else {
            cout << "The two strings have different length." << endl;
            cout << "The " << (str1.length() > str2.length() ? "first" : "second") << " one is longer" << endl;
        }
    }
    return 0;
}