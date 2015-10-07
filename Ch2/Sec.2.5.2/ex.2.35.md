---

Q: Determine the types deduced in each of the following definitions. Once you've figure out the types, write a program to see whether you were correct.

    const int i = 42;
    auto j = i; const auto &k = i; auto *p = &i;
    const auto j2 = i, &k2 = i;

---

A: 

    const int i = 42;   // i is const int
    auto j = i;         // j is int
    const auto &k = i;  // k is const int
    auto *p = &i;       // p is const int*
    const auto j2 = i,  // j2 is const int
    &k2 = i;            // k2 is const int&