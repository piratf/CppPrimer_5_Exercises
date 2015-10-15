---

Q: Explain what happens in each of the `if` tests:

    if (42 = i)     // ...
    if (i = 42)     // ...

---

A:

    if (42 = i)     // error: assignment to r-value
    if (i = 42)     // assign 42 to `i` than test if i > 0