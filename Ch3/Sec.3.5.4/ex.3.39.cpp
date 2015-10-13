// Write a program to compare two strings. Now write a program to compare the values of two C-style character string.

#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

int main() {
    // Compare two string
    std::string str = "Hello";
    std::string str2 = "Hellow";
    if (str == str2) {
        cout << "The two string is equal" << endl;
    }
    else {
        if (str > str2) {
            cout << "The first string is larger." << endl;
        }
        else {
            cout << "The second string is larger." << endl;
        }
    }
    // Compare two C-style string
    char cstr[] = "Hellow";
    char cstr2[] = "Hellow";
    if (strcmp(cstr, cstr2) == 0) {
        cout << "The two C-style string is equal" << endl;
    }
    else {
        if (strcmp(cstr, cstr2) == 1) {
            cout << "The first C-style string is larger." << endl;
        }
        else {
            cout << "The second C-style string is larger." << endl;
        }
    }
    return 0;
}