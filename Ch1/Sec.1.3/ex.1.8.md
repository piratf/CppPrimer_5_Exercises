Q: Indicate which, if any, of the following output statements are legal:
``` c++
    std::cout << "/*";
    std::cout << "*/";
    std::cout << /* "*/" */;
    std::cout << /* "*/" /* "/*" */;
```
After you've predicted what will happen, test your answers by compiling a program with each of these statements. Correct any errors you encounter.

A: The first two line has no problem. 
The first "*/" inside the double quotation marks in the third line built a comment pair with the `/*` forward. so the second quotation mark was alone, any code after that will be recongized as the string literal. even thought there is a quotation mark in the fourth line, the string can not warp, so it's an lonely quotation mark, and the third line need a semicolon.
At the fourth line, after the first quotation mark there is no semicolon. so here is another part will cause errors.
The rest of the statement start with a `*`, it's the third part.

The easiest way to make the code work is to add a quotation mark and a semicolon after third line.

Codes in file `ex.1.8.cpp`.