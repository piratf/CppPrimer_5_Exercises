---

Q: Which of the following initialization are legal? Explain why.

    (a) int i = -1, &r = 0;         (b) int *const p2 = &i2;
    (c) const int i = -1, &r = 0;   (d) const int *const p3 = &i2;
    (e) const int *p1 = &i2;        (f) const int &const r2;
    (g) const int i2 = i, &r = i;

---

A: 

    (a) int i = -1, &r = 0;             // illegal, r is a reference, must be initialized with an object.
    (b) int *const p2 = &i2;            // legal if i2 is an plain int object, else not.
    (c) const int i = -1, &r = 0;       // same as (a), definition of `i` is legal.
    (d) const int *const p3 = &i2;      // legal only if i2 is an const int object.
    (e) const int *p1 = &i2;            // same as above.
    (f) const int &const r2;            // r2 is a reference, reference not a object, so can use const to modity it.
    (g) const int i2 = i, &r = i;       // legal if i is an const int object.