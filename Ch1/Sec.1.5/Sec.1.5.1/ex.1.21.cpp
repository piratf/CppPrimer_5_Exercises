#include <iostream>
#include "../Sales_item.h"
using namespace std;

int main() {
    freopen("ex.1.21.txt", "r", stdin);
    Sales_item item1, item2;
    cout << "Now reading to items:\n";

    cin >> item1 >> item2;
    if (item1.isbn() == item2.isbn()) {
        cout << "The sum of two items is: " << item1 + item2 << endl;
        return 0;
    }
    else {
        cerr << "Date mush refer to same isbn!";
        return -1;
    }
}