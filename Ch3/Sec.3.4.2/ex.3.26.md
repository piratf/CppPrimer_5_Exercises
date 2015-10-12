---

Q: In the binary search program on page 112, why did we write `mid = beg + (end - beg) / 2;` instead of `mid = (beg + end) / 2;` ?

---

A: `(beg + end)` could be a big enough number to cause unnecessary overflow. The numbers could appear in first way will have less value than second way. It will never larger than the answer, could prevent overflow effictivly.