---

Q: Explain the following expression:
    
    double slope = static_cast<double>(j / i);

---

A: In this expression, the subexpression `(j / i)` will be executed first, with its result be returned. Then the `static_cast<double>` part do the convertion, convert the result to `double` if could, than return the result to the right hand of `=` operator, than assign the value to slope.