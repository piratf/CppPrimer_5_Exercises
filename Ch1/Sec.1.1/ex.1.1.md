---

Q: Review the documentation for your compiler and determine what file naming convention it uses. Compile and run the main program form page2.

---

A: I'm using g++ 4.9.2. I found the documentation at [g++(1) - Linux man page][g++(1) - Linux man page]

It's said "C ++ source files conventionally use one of the suffixes .C, .cc, .cpp, .CPP, .c++, .cp, or .cxx; C ++ header files often use .hh, .hpp, .H, or (for shared template code) .tcc; and preprocessed C ++ files use the suffix .ii. GCC recognizes files with these names and compiles them as C ++ programs even if you call the compiler the same way as for compiling C programs (usually with the name gcc).
However, the use of gcc does not add the C ++ library. g++ is a program that calls GCC and treats .c, .h and .i files as C ++ source files instead of C source files unless -x is used, and automatically specifies linking against the C ++ library. This program is also useful when precompiling a C header file with a .h extension for use in C ++ compilations. On many systems, g++ is also installed with the name c++."

C++源文件按照惯例使用“`.C`, `.cc`, `.cpp`, `.CPP`, `.c++`, `.cp`, 或 `.cxx`”这些后缀中的一个, C++头文件经常使用“`.hh`, `.hpp`, `.H`, `.tcc`（共享模板代码）"作为后缀名，C++的预处理文件使用`.ii`作为后缀名。GCC将识别使用这类命名后缀的文件，就算用户使用与编译c相同的方法来调用（调用gcc），编译器也会将其当作C++程序代码来编译。
然而，使用gcc进行编译不会理会代码中使用的C++库。而g++则会调用GCC并将”.c, .h, .i“文件当作C++文件而不是C文件进行处理（除非使用了`-x`编译选项），并且自动连接指定的C++库。这个程序在C++编译过程中预编译`.h`后缀的C头文件也十分有用。在许多系统中，`g++`以`c++`的名字被安装。

---

Codes in file `ex.1.1.cpp`.
running program: ex.1.1.cpp

![编译和运行][编译和运行]

---


[g++(1) - Linux man page]: http://linux.die.net/man/1/g++
[编译和运行]:./exec1.1.png