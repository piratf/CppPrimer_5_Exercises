---

Q: What is the value of `j` in the following program?

``` c++
    int i = 42;

    int main() {
        int i = 100;
        int j = i;
    }
```

---

A: The value is 100, because local varible `i` replace the value of `i` outside.