---

Q: Is the following code legal or not? If not, how might you make it legal?

    int null = 0, *p = null;

---

A: I might change it to this:

    int null = 0, *p = &null;
