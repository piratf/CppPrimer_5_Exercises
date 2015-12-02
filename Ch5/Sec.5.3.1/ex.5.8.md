---

Q: What is a "dangling `else`"? How are `else` clauses resolved in C++?

---

A: The question of "dangling `else`" is meaning sometimes we don't know to which `if` a given `else` belongs.
In C++ the ambiguity is resolved be specifying that each `else` is matched with the closest preceding unmatched `if`.
So, I strongly recommend that using braces after each `if` and `else` statement, the use such tools help us to indent source code to match its structure automaticlly.