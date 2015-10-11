// Q: Write a program that reads a string of characters including punctuation and writes what was read but with the punctuation removed.

#include <iostream>
#include <cctype>
using std::cout;
using std::cin;
using std::endl;

int main() {
    std::string src;
    std::string upt;
    cin >> src;

    for (auto &ch : src) {
        if (!std::ispunct(ch)) {
            upt += ch;
        }
    }

    cout << upt << endl;
    return 0;
}