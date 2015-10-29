---

Q: Explain the following loop.

    constexpr in size = 5;
    int ia[size] = {1, 2, 3, 4, 5};
    for (int *ptr = ia, ix = 0; 
        ix != size && ptr != ia + size; ++ix, ++ptr) {
        /* ... */ 
    }

---

A: first initial an `int` array with five elements - 1, 2, 3, 4, 5;
then in the for loop, declare an `int` pointer and an `int` number, which point the same postion in the array, and grow in same step.