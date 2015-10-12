---

Q: List three ways to define a `vector` and give it ten elements, each with the value 42, Indicate whether there is a preferred way to do so and why.

---

A: 

    vector<int> ivec(10, 42);
---
    vector<int> ivec{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
---
    vector<int> ivec;
    for (unsigned i = 0; i < 10; ++i) {
        ivec.push_back(42);
    }

First way is prefered, it's simple to write and prevent most mistakes.