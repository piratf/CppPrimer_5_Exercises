---

Q: Explain the following definitions. For those that are illegal, explain what's wrong and how to correct it.

    (a) std::cin >> int input_value;    (b) int i = { 3.14 };
    (c) double salary = wage = 9999.99; (d) int i = 3.14;

---

A: 
(a) std::cin >> int input_value;
variable definition don't return any thing, so can't be a right operand of '>>'.
should define the variable first.
``` c++
    int input_value;
    std::cin >> input_value;
```

(b) int i = { 3.14 };
double to int will loss information. rejected.
``` c++
    int i = 3.14;
```

(c) double salary = wage = 9999.99;
variable definition need commas as a separator, so `wage` is a undefined variable, rejected.
``` c++
    double salary = 9999.99, wage = salary;
```

(d) int i = 3.14;
correct!