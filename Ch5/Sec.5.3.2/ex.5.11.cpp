// Q: Modify our vowel-counting program so that it also counts the number of blank spaces, tabs, and newlines read.

#include <iostream>
using namespace std;

int main() {
    char ch = 0;
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    unsigned bsCnt = 0, tabCnt = 0, nlCnt = 0;
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
        } else if (ch == ' ') {
            ++bsCnt;
        } else if (ch == '\t') {
            ++tabCnt;
        } else if (ch == '\n') {
            ++nlCnt;
        }
    }
    cout << "the count of 'a' \\ 'A' is: " << aCnt << endl;
    cout << "the count of 'e' \\ 'E' is: " << eCnt << endl;
    cout << "the count of 'i' \\ 'I' is: " << iCnt << endl;
    cout << "the count of 'o' \\ 'O' is: " << oCnt << endl;
    cout << "the count of 'u' \\ 'U' is: " << uCnt << endl;
    if (bsCnt == 1) {
        cout << "there is only one blank space." << endl;
    } else {
        cout << "there are " << bsCnt << " blank spaces." << endl;
    }
    if (tabCnt == 1) {
        cout << "there is only one tab character." << endl;
    } else {
        cout << "there are " << tabCnt << " tab characters." << endl;
    }
    if (nlCnt == 1) {
        cout << "only one line." << endl;
    } else {
        cout << "there are " << nlCnt << " lines." << endl;
    }
    return 0;
}