// Q: Using the Sales_item.h header from the Web site, compile and execute the bookstore program presented in this section.

#include <iostream>
#include <vector>
#include "Sales_item.h"

int main() {
    freopen("ex.1.25.txt", "r", stdin);
    Sales_item total;
    if (std::cin >> total) {
        Sales_item trans;
        while (std::cin >> trans) {
            if (total.isbn() == trans.isbn()) {
                total += trans;
            }
            else {
                std::cout << total << std::endl;
                total = trans;
            }
        }
        std::cout << total << std::endl;
    } else {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}