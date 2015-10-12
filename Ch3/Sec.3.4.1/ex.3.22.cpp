// Q: Revise the loop that printed the first paragraph in text to instead change the elements in `text` that correspond to the first paragraph to all uppercase. After you've update `text`, print its contents.

#include <iostream>
#include <vector>

using std::string;

void inline toUpperString(string &str) {
    for (char &ch : str) {
        ch = std::toupper(ch);
    }
}

int main() {
    freopen("ex.3.22.txt", "r", stdin);
    std::vector<string> text;
    string str;
    while (std::getline(std::cin, str)) {
        text.push_back(str);
    }
    for (auto it = text.begin(); it != text.end() && !it -> empty(); ++it) {
        toUpperString(*it);
    }
    for (string str : text) {
        std::cout << str << std::endl;
    }
}