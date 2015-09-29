#include <iostream>
#include <vector>
#include "../Sales_item.h"
using namespace std;

int main() {
    freopen("ex.1.23.txt", "r", stdin);
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
        cerr << "ex.1.23: No data!?" << endl;
        return -1;
    }
    for (i = 0; i < occuredItem.size(); ++i) {
        cout << occuredItem[i] << endl;
    }
    return 0;
}