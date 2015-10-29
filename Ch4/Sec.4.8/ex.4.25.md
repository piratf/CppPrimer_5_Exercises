---

Q: What is the value of `~'q' << 6` on a machine with 32-bit `int`s and 8 bit `char`s, that uses Latin-1 character set in which 'q' has the bit pattern 01110001?

---

A: first, in this process the value of 'q' will be promoted to `int` type first. Since the machine using 32-bit `int`s, so the value of 'q' is:

    0000 0000 0000 0000 0000 0000 0111 0001

now the operator `~` has higher precedence than `<<`:

    1111 1111 1111 1111 1111 1111 1000 1110

than do the `<< 6` operate

    1111 1111 1111 1111 1110 0011 1000 0000

that is the result.