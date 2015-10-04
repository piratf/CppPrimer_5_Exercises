---

Q: Given a pointer p, can you determine whether p points to a valid object? If so, how? If not, why not?

---

A: No. Here is a example.

    int i = 2;
    int d = 0;
    int *pi = &i - 1;

now the pi is valid or not? if there is no `d` after the int `i`, `pi` should be invalid, but there is something after `i` immediately, so now `pi` could be valid. I say "could be" because it's a undefined behaviour.

we can't test whether a pointer is valid or not and never let the program crashs in the same time.