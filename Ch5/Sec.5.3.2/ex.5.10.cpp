// Q: There is a problem with our vowel-counting program as we've implemented it: It doesn't count capital letters as vowels. Write a program that counts both lower- and uppercase leters as the appropriate vowel -- that is, your program should count both 'a' and 'A' as part of `aCnt`, and so forth.

#include <iostream>
using namespace std;

int main() {
    char ch = 0;
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    while (cin >> ch) {
        if (ch == 'a' || ch == 'A') {
            ++aCnt;
        } else if (ch == 'e' || ch == 'E') {
            ++eCnt;
        } else if (ch == 'i' || ch == 'I') {
            ++iCnt;
        } else if (ch == 'o' || ch == 'O') {
            ++oCnt;
        } else if (ch == 'u' || ch == 'U') {
            ++uCnt;
        }
    }
    cout << "the count of 'a' \\ 'A' is: " << aCnt << endl;
    cout << "the count of 'e' \\ 'E' is: " << eCnt << endl;
    cout << "the count of 'i' \\ 'I' is: " << iCnt << endl;
    cout << "the count of 'o' \\ 'O' is: " << oCnt << endl;
    cout << "the count of 'u' \\ 'U' is: " << uCnt << endl;
    return 0;
}