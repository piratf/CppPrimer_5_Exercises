// Q: Write a program to print the size of each of the built-in types.

#include <iostream>

using std::cout;
using std::endl;

int main() {
    cout << sizeof(bool) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(short) << endl;
    cout << sizeof(unsigned short) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(unsigned int) << endl;
    cout << sizeof(long) << endl;
    cout << sizeof(unsigned long) << endl;
#ifdef __GNUC__
    cout << sizeof(long long) << endl;
    cout << sizeof(unsigned long long) << endl;
#endif
#ifdef _MSC_VER
    cout << sizeof(__int64) << endl;
    cout << sizeof(unsigned __int64) << endl;
#endif
    return 0;
}