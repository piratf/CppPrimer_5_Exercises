---

Q: Describe the differences in type deduction between `decltype` and `auto`. Give and example of an expression where `auto` and `decltype` will deduce the same type and an example where they will deduce differing types.

---

A: `decltype` will handle types including top-level `const`, auto will ignore that.

    const int i = 0;
    decltype(i) a = i;
    auto b = i;

`a` is `const int`, `b` is `int`;

    int i = 0;
    decltype(&i) a = i;
    auto b = &i;

both `a` and `b` is `int*` now.