---

Q: Explain when operands are evaluated in the logical AND, logical OR, and equality operators.

---

A: In logical `AND`, the right-hand operands been evaluate only if the left-hand one yield `true`. So the left-hand operand been evaluated first.

In logical `OR`, the same thing happen only expect the left-hand operands need to yield `false` than the right-hand start evaluate process, So the left-hand operand been evaluated first.

With equality operator, the order of evaluation is undefined. The only for operators which has specific order is `&&`, `||`, `?:` and `,`.