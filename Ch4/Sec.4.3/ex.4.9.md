---

Q: Explain the behavior of the condition in the following `if`:

    const char *cp = "Hello world";
    if (cp && *cp)

---

A: This condition will check if the pointer `cp` is a `null pointer` first, if `cp` is not null, than it check if the character been pointed has the value `0`. because the C-style string literal is `null terminated`, so the condition could check if the pointer get a accessible character in the string literal.