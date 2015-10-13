---

Q: In this section, we noted that is was not only illegal but meaningless to try to add two pointers. Why would adding two pointers be meaningless?

---

A: The value of pointer is a address of object, but the memory allocate of irrelevant objects is undefined at runtime. So the answer of adding two pointer is undefined, it's may doesn't represent anything, it's meaningless.