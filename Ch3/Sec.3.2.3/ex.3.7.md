---

Q: What would happen if you define the loop control variable in the previous exercise as type `char`? Predict the results and then change your program to use the `char` to see if you were right.

---

A: Using type `char &` means the alias of the character stroaged in the string. Using type `char` means get a copy of the character. So if using `char`, the content of string will not be changed.

Codes in `ex.3.7.cpp` file.