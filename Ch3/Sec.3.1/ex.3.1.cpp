// Q: Rewrite the exercises from & 1.4.1(p.13) and & 2.6.2(p.76) with appropriate `using` declarations.

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using std::ios;
using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::string;
using std::vector;
using std::ifstream;

struct Sales_data
{
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

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
         << item.revenue << endl;
}

int main() {
    // Q: Write a program that uses a while to sum the numbers from 50 to 100.
    cout << "----------- Here is ex.1.09 part:--------" << endl;
    int var = 50, sum = 0;
    while (var <= 100) {
        sum += var;
        ++var;
    }
    cout << "The sum of 50 to 100 inclusive is " << sum << endl;
    cout << "----------- ex.1.09 end -----------------" << endl << endl;
    // Q: Inaddition to the ++ operator that adds 1 to its operand, there is a decrement operator(--) that subtracts 1. Use the decrement operator to write a while that prints the numbers from ten down to zero.
    cout << "----------- Here is ex.1.10 part:--------" << endl;
    var = 10;
    while (var >= 0) {
        cout << var-- << ' ';
    }
    cout << endl;
    cout << "----------- ex.1.10 end -----------------" << endl << endl;
    // Q: Write a program that prompts the user for two integets. Print each number in the range specified by those two integers.
    cout << "----------- Here is ex.1.11 part:--------" << endl;
    int start = 0, end = 0;
    cout << "Please enter two number: ";
    cin >> start >> end;
    if (start > end) {
        start ^= end;
        end ^= start;
        start ^= end;
    }
    while (start <= end) {
        cout << start++ << ' ';
    }
    cout << endl;
    cout << "----------- ex.1.11 end -----------------" << endl << endl;
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
    cout << "Now reading to items:\n";
    readSalesData(item1);
    readSalesData(item2);
    if (item1.bookNo == item2.bookNo) {
        cout << "The sum of two items is: " << endl;
        printSalesData(add(item1, item2));
    }
    else {
        cerr << "Date mush refer to same isbn!";
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
    vector<Sales_data> occuredItem;
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
        cerr << "ex.1.23: No data!?" << endl;
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
        cerr << "No data?!" << endl;
        return -1;
    }
    fileIn.close();
    cout << "----------- ex.1.25 end -----------------" << endl;
    return 0;
}