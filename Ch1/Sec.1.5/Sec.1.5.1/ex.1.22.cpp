// Q: Write a program that reads several transactions for the same ISBN. Write the sum of all the transactions that were read.

#include <iostream>
#include "../Sales_item.h"
using namespace std;

int main() {
    freopen("ex.1.22.txt", "r", stdin);
    Sales_item itemVar, itemSum;
    std::cout << "Now reading to items:\n";
    std::cin >> itemSum;
    while (std::cin >> itemVar) {
        if (itemVar.isbn() != itemSum.isbn()) {
            std::cerr << "Date mush refer to same isbn!" << std::endl
                 << "-> " << itemVar << endl;
        }
        else {
            itemSum += itemVar;
        }
    }
    std::cout << "The sum of items is: " << itemSum << endl;
    return 0;
}