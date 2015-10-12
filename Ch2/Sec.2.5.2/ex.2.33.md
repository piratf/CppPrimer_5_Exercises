---

Q: Using the variable definitions from this section, determine what happens in each of these assignments:

    a = 42;     b = 42;     c = 42;
    d = 42;     e = 42;     g = 42;

---

A: 

> + a = 42;

a is int, because r is a reference of int type, do assignment, the value of a is 42;
> + b = 42;

b is int, auto will drop top-level const; do assignment, the value of b is 42;
> + c = 42;

c is int, cr is a reference of const int; do assignment, the value of c is 42;
> + d = 42;

d is int*, &i is an address of int; an error will be raised;
> + e = 42;

e is const int *, that is low-level const; en error will be raised.
> + g = 42;

g is const int &, consts are not top-level when bind a reference to an initializer. en error will be raised.