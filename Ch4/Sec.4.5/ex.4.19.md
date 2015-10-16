---

Q: Given that `ptr` points to an `int`, that `vec` is a `vector<int>`, and that `ival` is an `int`, explain the behavior of each of these expressions. Which, if any, are likely to be incorrect? Why? How might each be corrected.

    (a) ptr != 0 && *ptr++      (b) ival++ && ival
    (c) vec[ival++] <= vec[ival]

---

A: 

> + (a) ptr != 0 && *ptr++      

check whether the value of ptr is zero first, then get the value of `ptr`, increase the value of `ptr`.
> + (b) ival++ && ival

check whether the value of `ival` is zero, increase the value of `ival`, then check the value of ival again.

The result of this condition coult be always true, because in `&&` process, the left expression will always be evaluated first. 

If here required the check of `ival` and need the increased value of `ival`, just (ival++) will be ok.
> + (c) vec[ival++] <= vec[ival]

Undefined! the evaluation order of `<=` is undefined, so the result is undefined.

if here required the compare of vec[ival] the the next one, could write like this:

    vec[ival + 1] <= vec[ival]
    ++ival;