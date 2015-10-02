// Q: Using escape sequences, write a proogram to print 2M followed by a new line. Modify the program to print 2, then a tab, then an M, followed by a newline.


#include <iostream>
using namespace std;

int main() {
    cout << "2\115\n";
    cout << 2 << '\t' << '\115' << '\n' << endl;
    return 0;
}