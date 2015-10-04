---

Q: Why is the initialization of `p` legal but that of `lp` illegal?

    int i = 42;     void *p = &i;   long *lp = &i;

---

A: the type `void*` is a specify type for pointer, it can hold any type of address and could not be dereference. So `p` is legal. `lp` has the type `long*`, it could change the performence of the object it is pointing, if the object not have the same base type `long`. the object has the type `int` now, so `lp` is illegal.