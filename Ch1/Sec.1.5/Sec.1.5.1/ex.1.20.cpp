#include <iostream>
#include "../Sales_item.h"

int main() {
    freopen("ex.1.20.txt", "r", stdin);
    Sales_item item;
    while (std::cin >> item) {
        std::cout << item << std::endl;
    }
}