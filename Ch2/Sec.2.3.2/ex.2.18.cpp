// Q: Write code to change the value of pointer. Write code to change the value to which the pointer points.

#include <iostream>

int main() {
    int i = 0, *pi = &i;
    double d = 3.14, *pd = &d;
    printf("i = %d\n", i);
    *pi = 1;
    printf("after change value via pi: i = %d\n", i);
    pi = nullptr;
    if (!pi) {
        printf("pi has been changed to nullptr: %p\n", (void*)pi);
    }
    printf("pd = %p\n", (void*)pd);
    pd = nullptr;
    if (!pi) {
        printf("pd has been changed to nullptr: %p\n", (void*)pd);
    }
    return 0;
}