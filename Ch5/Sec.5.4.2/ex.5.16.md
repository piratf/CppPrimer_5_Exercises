
Q: The `while` loop is particularly good at executing while some condition holds; for example, when we need to read values until end-of-file. The `for` loop is generally thought of as a step loop: An index steps through a range of values in a collection. Write an idiomatic use of each loop and then rewrite each using the other loop construct. If you could use only one loop, which would you choose? Why?

---

A:

code for example:

``` c++
int i = 0;
while (i < 10) {
    printf("i = %d\n", i);
    ++i;
}

for (int i = 0; i < 10; ++i) {
    printf("i = %d\n", i);
}
```

I would choose for loop, because it can do anything which `while` can do, but more clear and readable when I need the initializer or step loop.