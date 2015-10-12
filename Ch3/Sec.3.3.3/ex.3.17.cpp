// Q: Read a sequence of words from `cin` and store the values a `vector`. After you've read all the words, process the `vector` and change each word to uppercase. Print the transformed elements, eight words to a line.

#include <iostream>
#include <vector>
#include <cctype>
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main() {
    freopen("ex.3.17.txt", "r", stdin);
    char ch;
    vector<char> chs;
    while (cin >> ch) {
        chs.push_back(ch);
    }
    for (auto &c : chs) {
        c = std::toupper(c);
    }
    for (decltype(chs.size()) i = 0; i < chs.size(); ++i) {
        cout << chs[i];
        if (!((i + 1) % 8)) {
            cout << endl;
        }
    }
}