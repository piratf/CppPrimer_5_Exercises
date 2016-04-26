// Q: Write a program using a series of `if` statements to count the number os vowels in text read from `cin`.

#include <iostream>
using namespace std;

int main() {
    char ch = 0;
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    while (cin >> ch) {
        if (ch == 'a') {
            ++aCnt;
        } else if (ch == 'e') {
            ++eCnt;
        } else if (ch == 'i') {
            ++iCnt;
        } else if (ch == 'o') {
            ++oCnt;
        } else if (ch == 'u') {
            ++uCnt;
        }
    }
    cout << "the count of 'a' is: " << aCnt << endl;
    cout << "the count of 'e' is: " << eCnt << endl;
    cout << "the count of 'i' is: " << iCnt << endl;
    cout << "the count of 'o' is: " << oCnt << endl;
    cout << "the count of 'u' is: " << uCnt << endl;
    return 0;
}