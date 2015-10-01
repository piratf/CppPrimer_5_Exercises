---

Q: Determine the type of each of the following literals. Explain the differences among the literals in each of the four examples.

---

A: 

(a) 'a', L'a', "a", L"a";

first 'a' is a character, minimumsize one byte.
secode L'a' is a wide character, minimumsize two byte.
third "a" is a string literal with a not visible '\0' in the end, minimumsize two byte.
the fourth is a wide character string literal, 2 * 2 byte as munimumsize.

(b) 10, 10u, 10L, 10uL, 012, 0xC

first 10 is an integer literal, as default, minimumsize 2 byte.
second 10u is an unsigned integer, the type could only represent numbers greater or equal to zero.
third 10L is a long type, minimumsize four byte.
the fourth 10uL is a unsigned long type, because 10 fits in long type, long long is too large.
the fifth 012 is an octal literal, with prefix 0, 12 means 10 in decimal, so the type is int.
the sixth 0xC is clearly a hexadecimal literal, with prefix 0x, C means 12 in decimal integer, so the type is int.

(c) 3.14, 3.14f, 3.14L

first 3.14 is double type with default setting, minimumsize 10 significant dights.
second 3.14f is float type, minimumsize 6 significant dights.
third 3.14L is long double type, minimumsize as same as double.

(d) 10, 10u, 10., 10e-2

10 is a integer as said above.
10u is a unsigned integer as fited in.
10. is a double value means 10.0.
10e-2 is a double value means the inverse square of ten.