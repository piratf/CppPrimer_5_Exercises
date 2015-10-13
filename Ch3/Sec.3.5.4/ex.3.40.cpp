// Q: Write a program to define two character arrays initialized from string literals. Now define a third character array to hold the concatenation of the two arrays. Use `strcpy` and `strcat` to copy the two arrays into the third.

#include <iostream>
#include <cstring>

int main() {
    char str[] = "Hello ";
    char str2[] = "world";
    char str3[50] = {};
    strcpy(str3, strcat(str, str2));
    std::cout << str3 << std::endl;
    return 0;
}