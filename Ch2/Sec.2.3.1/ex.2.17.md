---

Q: What does the following code print?

    int i, &ri = i;
    i = 5, ri = 10;
    std::cout << i << " " << ri << std::endl;

---

A: `ri` is a alias of `i`, so i = ri = 10;

print: 10 10