---

Q: Explain each of the following definitions, Indicate whether any are illegal and, if so, why.

    int i = 0;
    (a) double* dp = &i;    (b) int *ip = i;    (c) int *p = &i;

---

A: 

> + (a) double* dp = &i;

illegal, different type between two operand.
> + (b) int *ip = i;    

illegal, can assign an int to a pointer
> + (c) int *p = &i;    

vaild.
