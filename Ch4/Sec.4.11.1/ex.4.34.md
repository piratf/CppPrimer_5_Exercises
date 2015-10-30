---

Q: Given the variable definitions in this section, explain what conversions take place in the following expressions:

    (a) if (fval)   (b) dval = fval + ival;     (c) dval + ival * cval

---

A: 

> * (a) if (fval)   

the `fval` will be converted to `bool` type.
> * (b) dval = fval + ival;     

the `ival` will be converted to `float` first, than the result of `+` operate be converted to `double`.
> * (c) dval + ival * cval

the `cval` will be convert to `int` first, than the result of `*` operate will be convert to `double` type.