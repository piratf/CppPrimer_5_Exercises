#include <iostream>
#include "../Sales_item.h"
using namespace std;

int main() {
    freopen("ex.1.22.txt", "r", stdin);
    Sales_item itemVar, itemSum;
    cout << "Now reading to items:\n";
    cin >> itemSum;
    while (cin >> itemVar) {
        if (itemVar.isbn() != itemSum.isbn()) {
            cerr << "Date mush refer to same isbn!" << endl
                 << "-> " << itemVar << endl;
        }
        else {
            itemSum += itemVar;
        }
    }
    cout << "The sum of two items is: " << itemSum << endl;
    return 0;
}