---

Q: Is the following range for legal? If so, what is the type of c?

    const string s = "Keep out!";
    for (auto &c: s) { /* ... */ }

---

A: It is legal, the type of c is `const char &`.