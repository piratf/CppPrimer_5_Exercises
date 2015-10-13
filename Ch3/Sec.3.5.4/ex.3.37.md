---

Q: What does the following program do?

    const char ca[] = {'h', 'e', 'l', 'l', 'o'};
    const char *cp = ca;
    while (*cp) {
        cout << *cp << endl;
        ++cp;
    }

---

A: Undefined. the C-style string `ca` is not `null terminated`, so the answer is undefined.