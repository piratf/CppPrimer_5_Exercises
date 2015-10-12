---

Q: Assuming `txt_size` is a function that takes no arguments and returns an `int` value, which of the following definitions are illegal? Explain why?

    unsigned buf_size = 1024;
    (a) int ia[buf_size];       (b) int ia[4 * 7 - 14];
    (c) int ia[txt_size()];     (d) char st[11] = "fundamental";

---

A: 
> + (a) int ia[buf_size];       

    size of array must be constant positive value, `buf_size` not, illegal.
> + (b) int ia[4 * 7 - 14];

    legal. `4 * 7 - 14` = 14, it's a constant positive value.
> + (c) int ia[txt_size()];     

    txt_size() not a constexpr, can't use its return value for size declaration.
> + (d) char st[11] = "fundamental";

    length of the string literal is larger than 11, so it's illegal.

