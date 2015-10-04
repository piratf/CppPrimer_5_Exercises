---

Q: Explain whether each of the following is a declaration or a definition:

    (a) extern in ix = 1024;
    (b) int iy;
    (c) extern int iz;

---

A:
    (a) extern in ix = 1024;        // is a definition, even though is has keyword `extern`, but includes an explicit initializer, that is a definition;
    (b) int iy;                     // clearly a definition;
    (c) extern int iz;              // a typical declaration;