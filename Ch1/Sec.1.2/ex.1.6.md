Q: Explain whether the following program fragment is legal.
``` c++
    std::cout << "The sum of " << v1;
              << " and " << v2;
              << " is " << v1 + v2 << std::endl;
```
If the program is legal, what does it do? If the program is not legal, why not? How would you fix it?

A: The program is not legal because of the semicolon at the end of first, second line. first semicolon cut the statement off, so the statement after him has no left-hand operand, that why the program is not legal.

I will remove the semicolon at the end of first, second line to fix this bug.