---

Q: Assignment is an example of an expression that yields a reference type. The type is a reference to the type of the left-hand operand. That is, if `i` is an `int`, then the type of the expression `i = x` is `int&`. Using that knowledge, determine the type and value of each variable in this code.

    int a = 3, b = 4;
    decltype(a) c = a;
    decltype(a = b) d = a;

---

A: `a` and `b` is `int`, c is `int`, d is `int&`;

the value of `a` is 3, because the expression in decltype() will not be executed。
the value of `b` is 4;
the value of c = 3;
the value of `d` is 3;