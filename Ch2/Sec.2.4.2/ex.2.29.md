---

Q: Using the variables in the previous exercise, which of the following assignments are legal? Explain why.

    (a) i = ic;         (b) p1 = p3;
    (c) p1 = &ic;       (d) p3 = &ic;
    (e) p2 = p1;        (f) ic = *p3;

---

A: 

> + (a) i = ic;  

legal, `i` is plain int, `ic` is const int, the assignment will not change the value of `ic`.
> + (b) p1 = p3; 

legal, p1 is a pointer point to an const object. p3 is a const pointer point to an const object, the assignment will not change the const pointer `p3`.
> + (c) p1 = &ic;

legal, `ic` is a const int;
> + (d) p3 = &ic;

illegal, `p3` is a const object and could not be assigned.
> + (e) p2 = p1; 

illegal, `p2` is a const object and could not so the assignment.
> + (f) ic = *p3;

illegal, `ic` is a const object and could not do the assignment.