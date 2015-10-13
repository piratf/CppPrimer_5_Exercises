---

Q: Order of evaluation for most of the binary operators is left undefined to give the compiler opportunities for optimization. This strategy presents a trade-off between efficient code generation and potential pitfalls in the use of the language by the programmer. Do you consider that an acceptable trade-off? Why or why not?

---

A: I think it is a acceptable trade-off. It is clearly enough to deduce the final answer, and this pitoff could prevent if we never change the value of operand in one expression. For efficient that's acceptable.