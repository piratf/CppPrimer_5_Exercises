---

Q: Given that `p1` and `p2` point to elements in the same array, what does the following code do? Are there values of `p1` or `p2` that make this code illegal?

    p1 += p2 - p1;

---

A: This code move `p1` to the postion of `p2` pointed. `p1` will have the same address of `p2`. The value of pointer arithmetic could be negative, so if the initial value of `p1` and `p2` is legal, the final value of them are legal.