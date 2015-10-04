---

Q: Assuming `p` is a pointer to int, explain the following code:

    if (p) // ...
    if (*p) // ...

---

A: 

    if (p) // ...       
        use value of p in the condition, the value is the address p pointing.
    if (*p) // ...      
        use value of the object pointed by p in the condition.