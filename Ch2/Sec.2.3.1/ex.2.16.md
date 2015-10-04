---

Q: Which, if any, of the following assignments are invalid? If they are vallid, explain what they do.

    int i = 0, &r1 = i; double d = 0, &r2 = d;
    (a) r2 = 3.14159;   (b) r2 = r1;
    (c) i = r2;         (d) r1 = d;

---

A: 

(a) r2 = 3.14159;   // vaild, d = 3.14159;
(b) r2 = r1;        // vaild, type convertion.
(c) i = r2;         // vaild, type convertion.
(d) r1 = d;         // vaild, type convertion.