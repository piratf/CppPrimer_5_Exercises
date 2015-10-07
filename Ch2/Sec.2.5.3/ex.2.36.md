---

Q: In the following code, determine the type of each variable and the value each variable has when the code finishers:

    int a = 3, b = 4;
    decltype(a) c = a;
    decltype((b)) d = a;
    ++c;
    ++d;

---

A: c is a int, so `++c` change the value of c, not a. d is a reference to int, so ++d change the value of b. and the value of d is b because of the dereference.

so a is int, value is 3;
b is int, value is 5;
c is int, value is 4;
d is int&, value is 5;