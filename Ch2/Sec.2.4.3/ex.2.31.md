---

Q: Given the declarations in the previous exercise determine whether the following assignments are legal. Explain how the top-level or low-level `const` applies in each case.

    r1 = v2;
    p1 = p2;    p2 = p1;
    p1 = p3;    p2 = p3;

---

A: 

    r1 = v2;    // legal, copy `const int` to `int`;
    p1 = p2;    // illegal, p2 is a low-level const but p1 not;
    p2 = p1;    // legal, convert `int*` to `const int*`;
    p1 = p3;    // illegal, p3 is a low-level const but p1 not;
    p2 = p3;    // legel, both are low-level, on top-level it is a copy from unconst to const.