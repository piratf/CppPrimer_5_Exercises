// Q: Write a program that reads several transactions and counts how many transactions occur for each ISBN.
// 
// Next question is test this program, the test data is in the ex.1.24.txt file.

#include <iostream>
#include <vector>
#include "../Sales_item.h"

int main() {
    freopen("ex.1.24.txt", "r", stdin);
    Sales_item item;
    std::vector<Sales_item> occuredItem;
    unsigned int i = 0;
    bool flag = false;
    while (std::cin >> item) {
        flag = true;
        for (i = 0; i < occuredItem.size(); ++i) {
            if (item.isbn() == occuredItem[i].isbn()) {
                occuredItem[i] += item;
                flag = false;
            }
        }
        if (flag) {
            occuredItem.push_back(item);
        }
    }
    if (!occuredItem.size()) {
        std::cerr << "ex.1.23: No data!?" << std::endl;
        return -1;
    }
    for (i = 0; i < occuredItem.size(); ++i) {
        std::cout << occuredItem[i] << std::endl;
    }
    return 0;
}