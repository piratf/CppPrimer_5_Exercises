---

Q: Given the following definitions,

    char cval;      int ival;       unsigned int ui;
    float fval;     double dval;

identify the implicit type conversions, if any, taking place:

    (a) cval = 'a' + 3;         (b) fval = ui - ival * 1.0;
    (c) dval = ui * fval;       (d) cval = ival + fval + dval;

---

A: 

> * (a) cval = 'a' + 3;         

'a' will be convert to `int` type, then the result of `+` will be converted to `char` type;
> * (b) fval = ui - ival * 1.0;

the `ival` will be convert to `double` type first, than the `ui` will be converted to `double` too to do the `-` process, finally the result will be converted to `float` type;
> * (c) dval = ui * fval;       

the value of `ui` will be converted to `float`, than the result will be converted to `double`;
> * (d) cval = ival + fval + dval;

the value of `ival` will be converted to `float` first, then the result of the first `+` operate will be converted to `double`, then to total result will be converted to `char`;