// Q: Repeat the previous program but read `string`s this time.

#include <iostream>
#include <vector>

int main() {
    std::string str;
    std::vector<std::string> ivec;
    while (std::cin >> str) {
        ivec.push_back(str);
    }
    return 0;
}