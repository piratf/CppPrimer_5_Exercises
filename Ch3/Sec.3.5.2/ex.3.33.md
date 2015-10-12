---

Q: What would happen if we did not initialize the `scores` array in the program on page 116?

---

A: If the array was defined in any function body, the initial value is undefined, so the `++` operate will cause any thing. The final answer could be wrong.
If the array was defined in the global scope, the initial value is 0 (for int), the answer will not be changed.