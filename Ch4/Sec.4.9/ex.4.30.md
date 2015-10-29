---

Q: Using Table 4.12 (p. 166), parenthesize the following expressions to match the default evaluation:

    (a) sizeof x + y        (b) sizeof p -> mem[i]
    (c) sizeof a < b        (d) sizeof f()

---

A: because the precedence of `sizeof` is same as `*`:

    (a) sizeof (x + y)
    (b) sizeof (p -> mem[i])
    (c) (sizeof a) < b
    (d) sizeof (f())