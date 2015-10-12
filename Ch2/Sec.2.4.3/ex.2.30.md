---

Q: For each of the following declarations indicate whether the object being declared has top-level or low-level const.

    const int v2 = 0;       int v1 = v2;
    int *p1 = &v1, &r1 = v1;
    const int *p2 = &v2, *const p3 = &i, &r2 = v2;

---

A: 

> + const int v2 = 0;         

top level int.
> + int v1 = v2;              

not const.
> + int *p1 = &v1, &r1 = v1;  

not const.
> + const int *p2 = &v2, *const p3 = &i, &r2 = v2;

p2 is low-level const, p3 is both top-level and low-level const. r2 is low-level const.