---

Q: Predict the output of the following code and explain your resoning, Now run the program. Is the output what you expected? If not, figure out why.

    int x[10];      int *p = x;
    cout << sizeof(x) / sizeof(*x) << endl;
    cout << sizeof(p) / sizeof(*p) << endl;

---

A: The result is:

10
1

the code in file `ex.4.29.cpp`.