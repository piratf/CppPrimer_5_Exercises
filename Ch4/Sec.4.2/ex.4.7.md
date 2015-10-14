---

Q: What does `overflow` mean? Show three expressions that will overflow.

---

A: `overflow` means there is a variable which not large enough to hold the current value. The behavior is undefined.

Examples:

> * int i = 100000000000LL;


> * unsigned i = -1;


> * int i = -100000000000LL;

