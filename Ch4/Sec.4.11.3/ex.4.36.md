---

Q: Assuming `i` is an `int` and `d` is a `double` write the expression `i *= d` so that is does intergral, rather than floating-point, multiplication.

---

A: 

    i *= (int)d;