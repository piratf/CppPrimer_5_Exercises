---

Q: What does the following program do?

    int i = 42;
    int *p1 = &i;
    *p1 = *p1 * *p1;

---

A:

> + int i = 42;     

defined int type object `i` and initial with value 42;
> + int *p1 = &i;   

defined int type pointer `i` and initial with address of `i`;
> + *p1 = *p1 * *p1;

change value of `i` to the product of `i`, via pointer `pi`.