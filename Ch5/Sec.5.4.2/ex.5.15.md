---

Q: Explain each of the following loops. Correct any problems you detect.

    (a) for (int ix = 0; ix != sz; ++ix) { /* ... */ }
        if (ix != sz) 
            // ...

    (b) int ix;
        for (ix != sz; ++ix) { /* ... */ }

    (c) for (int ix = 0; ix != sz; ++ix, ++sz) { /* ... */ }

---

A:

(a): The variable `ix` is defined in the for loop, so it is inaccessible out of the loop.

(b): Missing initializer in for loop, there must be three statements in the `for` header.

(c): Moving ix and sz in the same time, the for loop will execute indefinitely.