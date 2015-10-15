---

Q: The following assignment is illegal. Why? How would you correct it?

    double dval; int ival; int *pi;
    dval = ival = pi = 0;

---

A: The assignment operator is right associative, so `pi` get value 0 first. But pi can't convert to `int`, so it can't assign to `ival`. 

I will correct it like this:

    double dval; int ival; int *pi;
    dval = ival = 0; pi = 0;