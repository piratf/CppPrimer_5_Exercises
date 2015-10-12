---

Q: Is the following program legal? If not, how might you fix it?

    vector<int> ivec;
    ivec[0] = 42;

---

A: illegal, I might fix it like this:

    vector<int> ivec;
    ivec.push_back(42);