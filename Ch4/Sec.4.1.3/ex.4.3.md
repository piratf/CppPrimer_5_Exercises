---

Q: Order of evaluation for most of the binary operators is left undefined to give the compiler opportunities for optimization. This strategy presents a trade-off between efficient code generation and potential pitfalls in the use of the language by the programmer. Do you consider that an acceptable trade-off? Why or why not?

---

A: I think it is a acceptable trade-off. It is clearly enough to deduce the final answer, and this pitoff could be prevented if we never change the value of operand in one expression. For efficient that's acceptable.

Unlike the short-circuit evaluations, which specifies the order of operations could ensure high performance and predictable evaluation process, most of binary operators don't have the benefit even if we order that. So it is unnecessary.