---

Q: What would happen if the `while` loop on page 148 that prints the elements from a `vector` used the prefix increment operator?

---

A: That will skip the first element of the `vector` and start from the second, then when iterator move to the last one, dereference the `++pbeg` - the one after last element, could cause an out of range error.