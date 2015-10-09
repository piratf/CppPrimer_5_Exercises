---

Q: Explain how whitespace characters are handled in the string input operator and in the `getline` function.

---

A: In the string input operator, program will skip all the whitespace at first until read some aviable characters, than keep reading until find next whitespace character. discard it, then stop.

In the `getline` function, the start is same as input operator, when start reading characters, `getline` will read any whitespace until meeting new line. than discard newline, stop.