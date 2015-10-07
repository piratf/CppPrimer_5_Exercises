// Q: Write a program containing the variables and assignments from the previous exercise, Print the variables before and after the assignment to check whether your predictions in the previous exercise were correct. If not, study the examples until you can convince yourself you know what led you to the wrong conclusion.

#include <iostream>
using namespace std;

int main() {
    int i = 0, &r = i;
    const int ci = i, &cr = ci;

    auto a = r;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    auto &g = ci;

    printf("before assignment:\n a = %d\nb = %d\nc = %d\nd = %p\ne = %p\ng = %d\n", a, b, c, d, e, g);
    puts("-------------------------------------");
    a = 42;     
    b = 42;     
    c = 42;
    // d = 42;     
    // e = 42;     
    // g = 42;

    printf("after assignment:\n a = %d\nb = %d\nc = %d\nd = %p\ne = %p\ng = %d\n", a, b, c, d, e, g);
    return 0;
}