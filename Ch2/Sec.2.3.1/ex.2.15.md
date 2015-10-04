---

Q: Which of the following definitions, if any, are invalid? Why?

    (a) int ival = 1.01;    (b) int &raval1 = 1.01;
    (c) int &rval2 = ival;  (d) int &rval3;

---

A:

    (a) int ival = 1.01;        // valid;
    (b) int &raval1 = 1.01;     // invalid, 1.01 is `const int` type;
    (c) int &rval2 = ival;      // ok;
    (d) int &rval3;             // invalid, a reference must be initialized when they been defined first time;