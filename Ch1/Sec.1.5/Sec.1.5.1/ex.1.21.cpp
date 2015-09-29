#include <iostream>
#include "../Sales_item.h"

int main() {
    freopen("ex.1.21.txt", "r", stdin);
    Sales_item item1, item2;
    std::cout << "Now reading to items:\n";

    std::cin >> item1 >> item2;
    if (item1.isbn() == item2.isbn()) {
        std::cout << "The sum of two items is: " << item1 + item2 << std::endl;
        return 0;
    }
    else {
        std::cerr << "Date mush refer to same isbn!";
        return -1;
    }
}