// Q: Write your own version of the Sals_data.h header and use it to rewrite the exercise from & 2.6.2(p.76)

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Sales_data.h"
using namespace std;

ifstream fileIn;

bool inline readSalesData(Sales_data &item) {
    return fileIn >> item.bookNo && fileIn >> item.units_sold && fileIn >> item.revenue;
}

Sales_data add(const Sales_data &item1, const Sales_data &item2) {
    Sales_data ans;
    ans.bookNo = item1.bookNo;
    ans.units_sold = item1.units_sold + item2.units_sold;
    ans.revenue = item1.revenue + item2.revenue;
    return ans;
}

void inline printSalesData(const Sales_data& item) {
    cout << item.bookNo << ' '
         << item.units_sold << ' '
         << item.revenue << std::endl;
}

int main() {
    // Q: http://www.informit.com/title/0321714113 contains a copy of Sales_item.h in the Chapter 1 code directory. Copy that file to your working directory. Use it to write a program that reads a set of book sales transactions, writing each transaction to the standard output.
    cout << "----------- Here is ex.1.20 part:--------" << endl;
    fileIn.open("ex.1.20.txt", ios::out);
    Sales_data item;
    while (readSalesData(item)) {
        printSalesData(item);
    }
    fileIn.close();
    cout << "----------- ex.1.20 end -----------------" << endl << endl;

    // Q: Write a program that reads two Sales_item objects that have the same ISBN and produces their sum.
    cout << "----------- Here is ex.1.21 part:--------" << endl;
    fileIn.open("ex.1.21.txt", ios::out);
    Sales_data item1, item2;
    std::cout << "Now reading to items:\n";
    readSalesData(item1);
    readSalesData(item2);
    if (item1.bookNo == item2.bookNo) {
        std::cout << "The sum of two items is: " << std::endl;
        printSalesData(add(item1, item2));
    }
    else {
        std::cerr << "Date mush refer to same isbn!";
        return -1;
    }
    fileIn.close();
    cout << "----------- ex.1.21 end -----------------" << endl << endl;

    // Q: Write a program that reads several transactions for the same ISBN. Write the sum of all the transactions that were read.
    cout << "----------- Here is ex.1.22 part:--------" << endl;
    fileIn.open("ex.1.22.txt", ios::out);
    Sales_data itemVar, itemSum;
    cout << "Now reading to items:\n";
    readSalesData(itemSum);
    while (readSalesData(itemVar)) {
        if (itemVar.bookNo != itemSum.bookNo) {
            cerr << "Date mush refer to same isbn!" << endl;
        }
        else {
            itemSum = add(itemSum, itemVar);
        }
    }
    cout << "The sum of items is: ";
    printSalesData(itemSum);
    fileIn.close();
    cout << "----------- ex.1.22 end -----------------" << endl << endl;

    // Q: Write a program that reads several transactions and counts how many transactions occur for each ISBN.
    // Next question is test this program, the test data is in the ex.1.24.txt file.
    cout << "----- Here is ex.1.23, ex.1.24 part:-----" << endl;
    fileIn.open("ex.1.24.txt", ios::out);
    std::vector<Sales_data> occuredItem;
    unsigned int i = 0;
    bool flag = false;
    while (readSalesData(item)) {
        flag = true;
        for (i = 0; i < occuredItem.size(); ++i) {
            if (item.bookNo == occuredItem[i].bookNo) {
                occuredItem[i]  = add(occuredItem[i], item);
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
        printSalesData(occuredItem[i]);
    }
    fileIn.close();
    cout << "-------- ex.1.23, ex.1.24 end -----------" << endl << endl;

    // Q: Using the Sales_item.h header from the Web site, compile and execute the bookstore program presented in this section.
    cout << "----------- Here is ex.1.25 part:--------" << endl;
    fileIn.open("ex.1.25.txt", ios::out);
    Sales_data total;
    if (readSalesData(total)) {
        Sales_data trans;
        while (readSalesData(trans)) {
            if (total.bookNo == trans.bookNo) {
                total = add(total, trans);
            }
            else {
                printSalesData(trans);
                total = trans;
            }
        }
        printSalesData(total);
    } else {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    fileIn.close();
    cout << "----------- ex.1.25 end -----------------" << endl;
    return 0;
}