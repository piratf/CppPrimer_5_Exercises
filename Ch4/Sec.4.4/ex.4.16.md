---

Q: Although the following are legal, they probably do not behave as the programmer exprcts. Why? Rewrite the expressions as you think they should be.

    (a) if (p = getPtr() != 0)      (b) if (i = 1024)

---

A:

> + (a) if (p = getPtr() != 0)      

the assignment operator has lower precedence than inequality operator, so this condition will judge whether the value of `getPtr()` is 0, and assign the result - true or false to `p`, then judge the value of `p`.
`p` can't get the value of `getPtr()`.

I will rewrite it:

    if ((p = getPtr()) != 0) 
> + (b) if (i = 1024)

here the condition use assignment operator, then judge whether the value of i equal or not equal to 0. We can predict that the result will always true.

I will rewrite it:

    if (i == 1024)
