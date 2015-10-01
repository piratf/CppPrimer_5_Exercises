---

Q: To calculate a mortgage payment, what types would you use for the rate, principal, and payment? Explain why you selected each type.

---

A: Think about the money, it's rarely in integer. `float` has no speed benefit than `double` and shorter range. `long double` is more slowly, and just a mortgage, not some huge number. double is enough. 
    So I choose `double` unless the machine needs to use `float`.