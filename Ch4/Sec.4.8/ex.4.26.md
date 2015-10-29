---

Q: In our grading example in this section, what would happen if we used `usingned int` as the type for `quiz1`?

---

A: If the current machine using 32-bit `int`, the result will not been changed.
If the current machine using 16-bit `int`, the operand `(1UL << 27)` will exceed the length of `quiz1` and could be 0. So the data of student number 27 will be lost. or, any data of students which number larger then 16 will be lost.