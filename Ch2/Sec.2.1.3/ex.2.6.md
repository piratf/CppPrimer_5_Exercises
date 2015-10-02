---

Q: What, if any, are the difference between the following definitions:

``` c++
    int month = 9, day = 7;
    int month = 09, day = 07;
```

---

A: IF just output the value, we can't see any difference directly. The difference is: a integer literal start with a `0` means this is a octal integer, so the first line is in decimal, second line is octal.