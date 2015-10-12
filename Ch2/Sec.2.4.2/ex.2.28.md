---

Q: Explain the following definitions. Identify any that are illegel.

    (a) int i, *const cp;       (b) int *p1, *const p2;
    (c) const int ic, &r = ic;  (d) const int *const p3;
    (e) const int *p;

---

A:

> + (a) int i, *const cp;     

const pointer must be initialized when it been defined.
> + (b) int *p1, *const p2;   

same as above;
> + (c) const int ic, &r = ic;

uninitialized const object `ic`.
> + (d) const int *const p3;  

uninitialized const object `p3`.
> + (e) const int *p;         

legal.