---

Q: Identify the indexing errors in the following code:
    
    constexpr size_t array_size = 10;
    int ia[array_size];
    for (size_t ix = 1; ix <= array_size; ++ix)
        ia[ix] = ix;

---

A: The error occured because the for loop end at array_size postion.
In C++ the index of array start from `0` and end at `lengthOfArray - 1`.